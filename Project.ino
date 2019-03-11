
#include <Servo.h>
#include "UBTech.h"
#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
SoftwareSerial ss14(14, 14, false, 256);

// UBTech servo(&ss14);  // Without debug
UBTech servo(&ss14, &Serial);  // Debug on Serial

int servoCnt = 0;

void setup() {
	delay(100);
	Serial.begin(115200);
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

void loop() {
	fx_checkServo();
	fx_action();
	delay(5000);
}

// Right hand only
void fx_action() {
	if (!(servo.exists(1) && servo.exists(2) && servo.exists(3) &&servo.exists(4) && servo.exists(5) && servo.exists(6) && servo.exists(7) && servo.exists(8) && servo.exists(9) && servo.exists(10) && servo.exists(11) && servo.exists(12) && servo.exists(13) && servo.exists(14) && servo.exists(15) && servo.exists(16)  )) return;
	for (action = 1; action <= 16; action++) {
		switch (action) {
      case 1:
        servo.move(1, 0x36, 500);
        servo.move(2, 0x14, 500);
        servo.move(3, 0x43, 500);
        servo.move(4, 0x28, 500);
        servo.move(5, 0xA2, 500);
        servo.move(6, 0x6F, 500);
        servo.move(7, 0x48, 500);
        servo.move(8, 0x6C, 500);
        servo.move(9, 0x68, 500);
        servo.move(10, 0x78, 500);
        servo.move(11, 0x67, 500);
        servo.move(12, 0x50, 500);
        servo.move(13, 0x5A, 500);
        servo.move(14, 0x48, 500);
        servo.move(15, 0x4E, 500);
        servo.move(16, 0x66, 500);
        delay(2000);
      break;
      case 2:
        servo.move(1, 0x69, 240);
        servo.move(2, 0x1F, 240);
        servo.move(3, 0x43, 240);
        servo.move(4, 0x41, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x6F, 240);
        servo.move(7, 0x48, 240);
        servo.move(8, 0x3A, 240);
        servo.move(9, 0x37, 240);
        servo.move(10, 0x7A, 240);
        servo.move(11, 0x64, 240);
        servo.move(12, 0x50, 240);
        servo.move(13, 0x5A, 240);
        servo.move(14, 0x48, 240);
        servo.move(15, 0x4E, 240);
        servo.move(16, 0x66, 240);
        delay(2000);
      break;
      case 3:
        servo.move(1, 0x69, 40);
        servo.move(2, 0x1F, 40);
        servo.move(3, 0x43, 40);
        servo.move(4, 0x41, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x6F, 40);
        servo.move(7, 0x48, 40);
        servo.move(8, 0x3A, 40);
        servo.move(9, 0x37, 40);
        servo.move(10, 0x7A, 40);
        servo.move(11, 0x64, 40);
        servo.move(12, 0x50, 40);
        servo.move(13, 0x5A, 40);
        servo.move(14, 0x48, 40);
        servo.move(15, 0x4E, 40);
        servo.move(16, 0x66, 40);
        delay(2000);
      break;
      case 4:
        servo.move(1, 0x87, 240);
        servo.move(2, 0x14, 240);
        servo.move(3, 0x42, 240);
        servo.move(4, 0x78, 240);
        servo.move(5, 0xA1, 240);
        servo.move(6, 0x7B, 240);
        servo.move(7, 0x48, 240);
        servo.move(8, 0x3D, 240);
        servo.move(9, 0x73, 240);
        servo.move(10, 0x44,240);
        servo.move(11, 0x64, 240);
        servo.move(12, 0x50, 240);
        servo.move(13, 0x5A, 240);
        servo.move(14, 0x48, 240);
        servo.move(15, 0x4E, 240);
        servo.move(16, 0x66, 240);
        delay(2000);
      break;
      case 5:
        servo.move(1, 0x87, 40);
        servo.move(2, 0x14, 40);
        servo.move(3, 0x42, 40);
        servo.move(4, 0x78, 40);
        servo.move(5, 0xA1, 40);
        servo.move(6, 0x7B, 40);
        servo.move(7, 0x48, 40);
        servo.move(8, 0x3D, 40);
        servo.move(9, 0x73, 40);
        servo.move(10, 0x44,40);
        servo.move(11, 0x64, 40);
        servo.move(12, 0x50, 40);
        servo.move(13, 0x5A, 40);
        servo.move(14, 0x48, 40);
        servo.move(15, 0x4E, 40);
        servo.move(16, 0x66, 40);
        delay(2000);
      break;
      case 6:
        servo.move(1, 0x79, 500);
        servo.move(2, 0x14, 500);
        servo.move(3, 0x43, 500);
        servo.move(4, 0x55, 500);
        servo.move(5, 0x97, 500);
        servo.move(6, 0x6E, 500);
        servo.move(7, 0x64, 500);
        servo.move(8, 0x5A, 500;
        servo.move(9, 0x6C, 500);
        servo.move(10, 0x64,500);
        servo.move(11, 0x4F, 500);
        servo.move(12, 0x69, 500);
        servo.move(13, 0x4A, 500);
        servo.move(14, 0x45, 500);
        servo.move(15, 0x42, 500);
        servo.move(16, 0x4F, 500);
        delay(2000);
      break;
      case 7:
        servo.move(1, 0x69, 240);
        servo.move(2, 0x14, 240);
        servo.move(3, 0x43, 240);
        servo.move(4, 0x41, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x6F, 240);
        servo.move(7, 0x62, 240);
        servo.move(8, 0x57, 240);
        servo.move(9, 0x6C, 240);
        servo.move(10, 0x64,240);
        servo.move(11, 0x4F, 240);
        servo.move(12, 0x69, 240);
        servo.move(13, 0x7B, 240);
        servo.move(14, 0x7D, 240);
        servo.move(15, 0x39, 240);
        servo.move(16, 0x50, 240);
        delay(2000);
      break;
      case 8:
        servo.move(1, 0x69, 40);
        servo.move(2, 0x14, 40);
        servo.move(3, 0x43, 40);
        servo.move(4, 0x41, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x6F, 40);
        servo.move(7, 0x62, 40);
        servo.move(8, 0x57, 40);
        servo.move(9, 0x6C, 40);
        servo.move(10, 0x64,40);
        servo.move(11, 0x4F, 40);
        servo.move(12, 0x69, 40);
        servo.move(13, 0x7B, 40);
        servo.move(14, 0x7D, 40);
        servo.move(15, 0x39, 40);
        servo.move(16, 0x50, 40);
        delay(2000);
      break;
      case 9:
        servo.move(1, 0x69, 240);
        servo.move(2, 0x14, 240);
        servo.move(3, 0x43, 240);
        servo.move(4, 0x41, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x6F, 240);
        servo.move(7, 0x64, 240);
        servo.move(8, 0x57, 240);
        servo.move(9, 0x6C, 240);
        servo.move(10, 0x64,240);
        servo.move(11, 0x4F, 240);
        servo.move(12, 0x68, 240);
        servo.move(13, 0x72, 240);
        servo.move(14, 0x48, 240);
        servo.move(15, 0x69, 240);
        servo.move(16, 0x50, 240);
        delay(2000);
      break;
      case 10:
        servo.move(1, 0x69, 40);
        servo.move(2, 0x14, 40);
        servo.move(3, 0x43, 40);
        servo.move(4, 0x41, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x6F, 40);
        servo.move(7, 0x64, 40);
        servo.move(8, 0x57, 40);
        servo.move(9, 0x6C, 40);
        servo.move(10, 0x64,40);
        servo.move(11, 0x4F, 40);
        servo.move(12, 0x68, 40);
        servo.move(13, 0x72, 40);
        servo.move(14, 0x48, 40);
        servo.move(15, 0x69, 40);
        servo.move(16, 0x50, 40);
        delay(2000);
      break;
      case 11:
        servo.move(1, 0x36, 500);
        servo.move(2, 0x14, 500);
        servo.move(3, 0x43, 500);
        servo.move(4, 0x28, 500);
        servo.move(5, 0xA2, 500);
        servo.move(6, 0x6F, 500);
        servo.move(7, 0x4B, 500);
        servo.move(8, 0x6C, 500);
        servo.move(9, 0x68, 500);
        servo.move(10, 0x78,500);
        servo.move(11, 0x67, 500);
        servo.move(12, 0x50, 500);
        servo.move(13, 0x5A, 500);
        servo.move(14, 0x48, 500);
        servo.move(15, 0x4E, 500);
        servo.move(16, 0x66, 500);
        delay(2000);
      break;
      case 12:
        servo.move(1, 0x69, 240);
        servo.move(2, 0x1F, 240);
        servo.move(3, 0x43, 240);
        servo.move(4, 0x41, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x6F, 240);
        servo.move(7, 0x4B, 240);
        servo.move(8, 0x3A, 240);
        servo.move(9, 0x37, 240);
        servo.move(10, 0x7A,240);
        servo.move(11, 0x64, 240);
        servo.move(12, 0x50, 240);
        servo.move(13, 0x5A, 240);
        servo.move(14, 0x48, 240);
        servo.move(15, 0x4E, 240);
        servo.move(16, 0x66, 240);
        delay(2000);
      break;
      case 13:
        servo.move(1, 0x69, 40);
        servo.move(2, 0x1F, 40);
        servo.move(3, 0x43, 40);
        servo.move(4, 0x41, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x6F, 40);
        servo.move(7, 0x4B, 40);
        servo.move(8, 0x3A, 40);
        servo.move(9, 0x37, 40);
        servo.move(10, 0x7A,40);
        servo.move(11, 0x64, 40);
        servo.move(12, 0x50, 40);
        servo.move(13, 0x5A, 40);
        servo.move(14, 0x48, 40);
        servo.move(15, 0x4E, 40);
        servo.move(16, 0x66, 40);
        delay(2000);
      break;
      case 14:
        servo.move(1, 0x87, 240);
        servo.move(2, 0x14, 240);
        servo.move(3, 0x42, 240);
        servo.move(4, 0x78, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x7B, 240);
        servo.move(7, 0x4B, 240);
        servo.move(8, 0x3D, 240);
        servo.move(9, 0x73, 240);
        servo.move(10, 0x44,240);
        servo.move(11, 0x64, 240);
        servo.move(12, 0x50, 240);
        servo.move(13, 0x5A, 240);
        servo.move(14, 0x48, 240);
        servo.move(15, 0x4E, 240);
        servo.move(16, 0x66, 240);
        delay(2000);
      break;
      case 15:
        servo.move(1, 0x87, 40);
        servo.move(2, 0x14, 40);
        servo.move(3, 0x42, 40);
        servo.move(4, 0x78, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x7B, 40);
        servo.move(7, 0x4B, 40);
        servo.move(8, 0x3D, 40);
        servo.move(9, 0x73, 40);
        servo.move(10, 0x44,40);
        servo.move(11, 0x64, 40);
        servo.move(12, 0x50, 40);
        servo.move(13, 0x5A, 40);
        servo.move(14, 0x48, 40);
        servo.move(15, 0x4E, 40);
        servo.move(16, 0x66, 40);
        delay(2000);
      break;
      case 16:
        servo.move(1, 0x79, 500);
        servo.move(2, 0x14, 500);
        servo.move(3, 0x43, 500);
        servo.move(4, 0x55, 500);
        servo.move(5, 0x97, 500);
        servo.move(6, 0x6E, 500);
        servo.move(7, 0x64, 500);
        servo.move(8, 0x5A, 500);
        servo.move(9, 0x6C, 500);
        servo.move(10, 0x64,500);
        servo.move(11, 0x4F, 500);
        servo.move(12, 0x69, 500);
        servo.move(13, 0x4A, 500);
        servo.move(14, 0x45, 500);
        servo.move(15, 0x42, 500);
        servo.move(16, 0x4F, 500);
        delay(2000);
      break;
      case 17:	
        servo.move(1, 0x69, 240);
        servo.move(2, 0x14, 240);
        servo.move(3, 0x43, 240);
        servo.move(4, 0x41, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x6F, 240);
        servo.move(7, 0x62, 240);
        servo.move(8, 0x57, 240);
        servo.move(9, 0x6C, 240);
        servo.move(10, 0x64,240);
        servo.move(11, 0x4F, 240);
        servo.move(12, 0x69, 240);
        servo.move(13, 0x7B, 240);
        servo.move(14, 0x7D, 240);
        servo.move(15, 0x39, 240);
        servo.move(16, 0x50, 240);
        delay(2000);
      break;
      case 18:	
        servo.move(1, 0x69, 40);
        servo.move(2, 0x14, 40);
        servo.move(3, 0x43, 40);
        servo.move(4, 0x41, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x6F, 40);
        servo.move(7, 0x62, 40);
        servo.move(8, 0x57, 40);
        servo.move(9, 0x6C, 40);
        servo.move(10, 0x64,40);
        servo.move(11, 0x4F, 40);
        servo.move(12, 0x69, 40);
        servo.move(13, 0x7B, 40);
        servo.move(14, 0x7D, 40);
        servo.move(15, 0x39, 40);
        servo.move(16, 0x50, 40);
        delay(2000);
      break;
      case 19:	
        servo.move(1, 0x69, 240);
        servo.move(2, 0x14, 240);
        servo.move(3, 0x43, 240);
        servo.move(4, 0x41, 240);
        servo.move(5, 0xA2, 240);
        servo.move(6, 0x6F, 240);
        servo.move(7, 0x62, 240);
        servo.move(8, 0x57, 240);
        servo.move(9, 0x6C, 240);
        servo.move(10, 0x64,240);
        servo.move(11, 0x4F, 240);
        servo.move(12, 0x68, 240);
        servo.move(13, 0x72, 240);
        servo.move(14, 0x48, 240);
        servo.move(15, 0x69, 240);
        servo.move(16, 0x50, 240);
        delay(2000);
      break;
      case 19:	
        servo.move(1, 0x69, 40);
        servo.move(2, 0x14, 40);
        servo.move(3, 0x43, 40);
        servo.move(4, 0x41, 40);
        servo.move(5, 0xA2, 40);
        servo.move(6, 0x6F, 40);
        servo.move(7, 0x62, 40);
        servo.move(8, 0x57, 40);
        servo.move(9, 0x6C, 40);
        servo.move(10, 0x64,40);
        servo.move(11, 0x4F, 40);
        servo.move(12, 0x68, 40);
        servo.move(13, 0x72, 40);
        servo.move(14, 0x48, 40);
        servo.move(15, 0x69, 40);
        servo.move(16, 0x50, 40);
        delay(2000);
      break;
      
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