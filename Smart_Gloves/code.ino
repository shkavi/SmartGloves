#include <Wire.h>
char temp = '0';
String tempo = "";

// initialize the flex sensors on the gloves
int thumbSensor = A0;
int indexSensor = A1;
int middleSensor = A2;
int ringSensor = A3;
int pinkySensor = A4;
int xpin = A5;
int ypin = A6;

// threshold values for each flex sensor
int thumbThreshold = 200;
int indexThreshold = 200;
int middleThreshold = 200;
int ringThreshold = 200;
// threshold values for Accelerometer
int yThreshold = 290;
int pinkyThreshold = 200;

// initialize the variables to store the sensor readings
int thumbValue = 0;
int indexValue = 0;
int middleValue = 0;
int ringValue = 0;
int pinkyValue = 0;

void setup() {
  Serial.begin(9600);
}

void printfun(char cp) //to avoid printing repeating symbols
{
if(cp!=temp)
{
Serial.println(cp);
temp=cp;
}
}
void printfun1(String cp) //to avoid printing repeating symbols
{
if(cp!=tempo)
{
Serial.println(cp);
tempo=cp;
}
}
void loop() {
  // read the sensor values
  thumbValue = analogRead(thumbSensor);
  indexValue = analogRead(indexSensor);
  middleValue = analogRead(middleSensor);
  ringValue = analogRead(ringSensor);
  pinkyValue = analogRead(pinkySensor);
  int xadc = analogRead(xpin);
  int yadc = analogRead(ypin);
  // compare the sensor values to the threshold values
  if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('A');
  } else if (thumbValue < thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue > ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('B');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('C');
  } else if (thumbValue < thumbThreshold && indexValue > indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('D');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('E');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue > middleThreshold && ringValue > ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('F');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold && yadc > 290) {
    printfun('G');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold && yadc > 290) {
    printfun('H');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue > pinkyThreshold && yadc < 290){
    printfun('I');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue > pinkyThreshold && yadc > 290) {
    printfun('J');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold && yadc < 290) {
    printfun('K');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold && yadc < 290) {
    printfun('L');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue > ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('M');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue > ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('N');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('O');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue > middleThreshold && ringValue > ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('P');
  } else if (thumbValue < thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('Q');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('R');
  } else if (thumbValue < thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue > ringThreshold && pinkyValue > pinkyThreshold) {
    printfun('S');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('T');
  } else if (thumbValue < thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('U');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue < middleThreshold && ringValue > ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('V');
  } else if (thumbValue < thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue > ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('W');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('X');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue < middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('Y');
  } else if (thumbValue > thumbThreshold && indexValue < indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue < pinkyThreshold) {
    printfun('Z');
  } else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue < ringThreshold && pinkyValue > pinkyThreshold) {
    printfun1("Thank you");
  }else if (thumbValue > thumbThreshold && indexValue > indexThreshold && middleValue > middleThreshold && ringValue > ringThreshold && pinkyValue < pinkyThreshold ) {
    printfun1("Hello"); 
  }else {
    printfun(' ');
  }

  // Serial.print("X:");
  // Serial.println(xadc);
  // Serial.print("Y:");
  // Serial.println(yadc);
  // Serial.print("Sensor:");
  // Serial.println(thumbValue);
  // Serial.print("Sensor:");
  // Serial.println(indexValue);
  // Serial.print("Sensor:");
  // Serial.println(middleValue);
  // Serial.print("Sensor:");
  // Serial.println(ringValue);
  // Serial.print("Sensor:");
  // Serial.println(pinkyValue);
  // Serial.println();
  
  delay(1000);
}
