#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int piezoPin = A0;

int rawValue = 0;
float voltage = 0.0;

int stepCount = 0;
int threshold = 100;   
bool stepDetected = false;

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  lcd.clear();
}

void loop() {

  rawValue = analogRead(piezoPin);
  voltage = rawValue * (5.0 / 1023.0);

  // Step detection (edge-based)
  if (rawValue > threshold && !stepDetected) {
    stepCount++;
    stepDetected = true;
  }

  // Reset detection when signal drops
  if (rawValue < threshold - 20) {
    stepDetected = false;
  }

  // ----- LCD OUTPUT -----
  lcd.setCursor(0, 0);
  lcd.print("Steps:");
  lcd.print(stepCount);
  lcd.print("   ");  

  lcd.setCursor(0, 1);
  lcd.print("Volt:");
  lcd.print(voltage, 2);
  lcd.print(" V  ");

  // ----- SERIAL DEBUG -----
  Serial.print("Raw: ");
  Serial.print(rawValue);
  Serial.print("  Steps: ");
  Serial.print(stepCount);
  Serial.print("  Voltage: ");
  Serial.println(voltage);

  delay(50); 
}