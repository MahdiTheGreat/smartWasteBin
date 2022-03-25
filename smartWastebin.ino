#include <Wire.h>
#include <SoftwareSerial.h>

const int triggerOutput = 22; // Trigger Pin of Ultrasonic Sensor
const int echoInput = 23; // Echo Pin of Ultrasonic Sensor
SoftwareSerial mySerial(18,19);

void setup()
{
mySerial.begin(9600);
Serial1.begin(9600);
Wire.begin();
}

void loop()
{
long duration, inches, cm;
pinMode(triggerOutput, OUTPUT);
digitalWrite(triggerOutput, LOW);
delayMicroseconds(2);
digitalWrite(triggerOutput, HIGH);
delayMicroseconds(10);
digitalWrite(triggerOutput, LOW);

pinMode(echoInput, INPUT);
duration = pulseIn(echoInput, HIGH);
inches = microsecondsToInches(duration);
cm = microsecondsToCentimeters(duration);

mySerial.print(inches);
mySerial.print("in, ");
mySerial.print(cm);
mySerial.print("cm");
mySerial.println();

delay(100);
}

long microsecondsToInches(long microseconds)
{
return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}
