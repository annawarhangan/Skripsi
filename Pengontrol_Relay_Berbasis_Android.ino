#include <SoftwareSerial.h>
SoftwareSerial BTSerial(11, 10); //TX,RX
char val;
int LAMPU1 = 3;

void setup()
{
 pinMode(3,OUTPUT);
 Serial.begin(9600);
 BTSerial.begin(9600);
}

void loop() 
{
  if(BTSerial.available())
  {
    val=BTSerial.read();
    Serial.print(val);
  }
if(val=='A') // ON
    {
digitalWrite (3,HIGH);
    }
if(val=='a') // OFF
    {
digitalWrite (3, LOW);
    }

}
