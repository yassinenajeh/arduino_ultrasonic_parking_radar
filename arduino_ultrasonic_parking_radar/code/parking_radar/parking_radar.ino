#include <Ultrasonic.h>
#include <Adafruit_NeoPixel.h>
#define PIN 13
#define Trigger A2
#define Echo A1

Adafruit_NeoPixel strip = Adafruit_NeoPixel(40, PIN, NEO_GRB + NEO_KHZ800);
long Distance;
int n,r;
Ultrasonic ultrasonic(7);

void setup(){
 
  Serial.begin(9600);
  strip.begin();
  strip.show();
}

void loop(){
 
  Distance = ultrasonic.MeasureInCentimeters();
  r = Distance

  if(Distance>255){
    for(n=0;n<24;n++) {
        strip.setPixelColor(n,0,255,0);
        }
    }
    
    else{
      for(n=0;n<24;n++){
          strip.setPixelColor(n,255-r,r,0);
          strip.show();
     }
      }
    Serial.println("The distance to obstacles in front is: ");
    Serial.print(Distance);
    Serial.println(" cm");
    delay(1000);
}
