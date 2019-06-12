#include
SoftwareSerial serial (2,3);

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
serial.begin(9600);
serial.print(“hello world”);
Serial.print(“hello world”);
}
void loop() {
// put your main code here, to run repeatedly:
}
