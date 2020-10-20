//All Codes written,debugged and compiled by Samyak Jhaveri
#include<OneWire.h>
#include<DallasTemperature.h>
int cue=0;
float calibration = 23.40;
const int analogInPin = 0;
int sensorValue = 0;
unsigned long int avgValue;
float b;
int buf[10],temp;
#define ONE_WIRE_BUS 5
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
float Celsius=0;

void setup()
{
  Serial.begin(9600);
  sensors.begin();
}

void TemperatureFunction()
{
  sensors.requestTemperatures(); 
      Celsius=sensors.getTempCByIndex(0);

      Serial.print(" C  ");
      Serial.print(Celsius);
      Serial.print("  ");
}

void pHFunction()
{
  for(int i=0;i<10;i++) 
  
  { 
    buf[i]=analogRead(analogInPin);
    delay(30);
  }
  for(int i=0;i<9;i++)
 {
  for(int j=i+1;j<10;j++)
  {
    if(buf[i]>buf[j])
  {
    temp=buf[i];
    buf[i]=buf[j];
    buf[j]=temp;
  }
 }
 }
 avgValue=0;
 for(int i=2;i<8;i++)
 avgValue+=buf[i];
 float pHVol=(float)avgValue*5.0/1024/6;
 float phValue = -5.70 * pHVol + calibration;
 Serial.print("sensor = ");
 Serial.println(phValue);
}

void loop()
{
  while(Serial.available())
  {
    cue=Serial.read();
    if(cue == 1)
    {
      //Serial.print("cue =");
      //Serial.print(cue);
      TemperatureFunction();
    }
    else if(cue == 2)
    {
      //Serial.print("cue = ");
      //Serial.print(cue);
      pHFunction();
    }
    cue=0;
  }
  delay(3000);
}

