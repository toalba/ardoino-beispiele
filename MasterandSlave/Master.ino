// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Writes data to an I2C/TWI slave device
// Refer to the "Wire Slave Receiver" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

void setup() {
Wire.begin(); // join i2c bus (address optional for master)
}

void loop() {
 Wire.beginTransmission(8); // transmit to device #8
 for(byte x =50; x<=200;x= x+50){
  Wire.write(x); 
  Serial.println(x);        
  delay(10000)
 }
 Wire.endTransmission();    // stop transmitting
}