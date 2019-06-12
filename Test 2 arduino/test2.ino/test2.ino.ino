#include <SoftwareSerial.h>
SoftwareSerial serial(D1,D2);
String data;
char c;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
if(serial.available()>0){
delay(10);
c = serial.read();
data+=c;
}
if (data.length()>0){
Serial.println(data);
data="";
}
}
