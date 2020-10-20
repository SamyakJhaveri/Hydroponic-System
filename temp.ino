#include <OneWire.h>
#include <DallasTemperature.h>
int cue;

#define ONE_WIRE_BUS 5

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

 float Celcius=0;

void setup(void)
{
  
  Serial.begin(9600);
  sensors.begin();
}

void loop(void)
{ 
  
  while(Serial.available())
  {
    cue=Serial.read();
    if(cue == 1)
    {
      sensors.requestTemperatures(); 
      Celcius=sensors.getTempCByIndex(0);

      Serial.print(" C  ");
      Serial.print(Celcius);
      Serial.print("  ");
 
      delay(1000);
    }
  }
}
