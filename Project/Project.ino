#include <Servo.h>
#include "UBTech.h"
#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
SoftwareSerial ss14(14, 14, false, 256);

// UBTech servo(&ss14);  
UBTech servo(&ss14, &Serial);  // Debug on Serial
SoftwareSerial serial(5,4);
int servoCnt = 0;
String data;
String cmp;
void setup() {
	delay(100);
	Serial.begin(9600);
  serial.begin(9600);
	Serial.println(F("\n\n\nUBTech Servo Tester\n"));
	servo.init(16);
	servo.setDebug(false);  // Do not view servo detction here
	servo.begin();
	servo.setDebug(true);
	Serial.println(F("\n\nAvailable servo:"));
	servoCnt = 0;
	for (int id = 1; id <= 16; id++) {
		if (servo.exists(id)) {
			Serial.print(F("Servo ID="));
			Serial.print(id);
			Serial.println(F(" is avalable."));
			servo.setLedOff(id); // turn the led off (default on when power on)
			servoCnt++;
		}
	}
	Serial.println();
	if (servoCnt > 0) {
		Serial.print(servoCnt);
	} else {
		Serial.print(F("No "));
	}
	Serial.print(F(" servo detected."));
}

byte ledMode = 0;
byte action = 0;
char c;
int a;
int b;
String readStrings;
void loop() {
  Serial.print("asd");
  c=serial.read();
  data+=c;
  a+=Serial.read();
  b+=serial.read();
	fx_checkServo();
  while(serial.available()){
    char c=serial.read();
    readStrings +=c;
    delay(5);
  }
  if(readStrings.length()>0){
    fx_action();
    Serial.println(readStrings);
    Serial.println("ada data, servo pasti jalan");
  }else{
    Serial.println(readStrings);
    Serial.println("gak ada data,servo gk bakal jalan");
  }
	delay(2000);
}

// Right hand only
void fx_action() {
	if (!(servo.exists(3))) return;
	for (action = 1; action <= 2; action++) {
		switch (action) {
      
      case 1:
        servo.move(3, 0x0, 140);
//        servo.move(6, 0x5A, 140);
        delay(1000);
      break;
      case 2:
        servo.move(3, 0x5A, 40);
//        servo.move(6, 0x0, 40);
        delay(1000);
      break;
      if(action==2){
        action=1;
      }
      
    }
	}
}

void fx_checkServo() {
	if (!servoCnt) return;
	ledMode = 1 - ledMode;
	Serial.print("\nServo version / Position & LED = ");
	Serial.println(ledMode);
	byte *retBuffer;
	retBuffer = servo.retBuffer();
	for (int id = 1; id <= 16; id++) {
		if (servo.exists(id)) {
			Serial.print("Servo ");
			Serial.print(id);
			servo.getVersion(id);
      Serial.print("test1\n");
			for (int i = 4; i <8; i++) {
        Serial.print("test2");
				Serial.print(retBuffer[i] < 0x10 ? " 0" : " ");
        Serial.print("test3\n");
				Serial.print(retBuffer[i], HEX);
        Serial.print("test4\n");
			}
        Serial.print("te bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbst5\n");
			Serial.print("  at ");
			servo.getPos(id);
			for (int i = 4; i <8; i++) {
				Serial.print(retBuffer[i] < 0x10 ? " 0" : " ");
				Serial.print(retBuffer[i], HEX);
			}
			servo.setLED(id, ledMode);
			Serial.println();
		}

	}
}
