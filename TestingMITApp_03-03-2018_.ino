const int trigPin=10;
const int echoPin=11;
const int photodiodePin=A0;
int photoSensorValue=0;
int cue=0;
int result1=0;
int result2=0;
void setup()
{
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
int PhotoDiode()
{
  photoSensorValue = analogRead(photodiodePin);
  photoSensorValue=(int)photoSensorValue;
  return photoSensorValue; 
}
int UltrasonicDistanceSensor()
{
  float distance,duration;
  digitalWrite(trigPin,LOW);
  delay(10);
  digitalWrite(trigPin,HIGH);
  delay(1000);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/29.1;
  distance = (int)distance;
  return distance;
}

void loop()
{
  while(Serial.available() > 0)
  {
    cue=Serial.read();
    if(cue == 1)
    {
      result1=PhotoDiode();
      result2=UltrasonicDistanceSensor();
      Serial.print(result1);
      Serial.print("|");
      Serial.print(result2);
      //Serial.print("|");
      Serial.println();
      delay(1000);
    }
  }
}

