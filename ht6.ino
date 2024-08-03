#include <math.h>

const int trigPin = 2;
const int echoPin = 4;
const int pirPin = 16;

float duration, distance;
double averageUltraReading;
int count = 0;
int counterTimeout = 0;
int garbageCount = 0;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration * .0343)/2;

  if(count <= 10){
    averageUltraReading = ((averageUltraReading * count) + distance)/(count+1);
    count++;
    counterTimeout++;
  }else if(count > 10){
    if(fabs(averageUltraReading - distance) < 5){
      averageUltraReading = ((averageUltraReading * count) + distance)/(count+1);
      if(count < 20){
        count++;        
      }
      counterTimeout++;
    }else{
      if(counterTimeout > 10){
        garbageCount++;
        counterTimeout = 0;
      }
      Serial.print("Detected Garbage, Garbage count: ");
      Serial.println(garbageCount);
    }
  }
  
  Serial.print(distance);
  Serial.println(averageUltraReading);

  delay(100);
}