#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

int S=255;
int H=255;
int V=255;
int STR[64] ={
    1,1,1,1,2,2,2,2,
    1,1,1,1,2,2,2,2,
    1,1,1,1,2,2,2,2,
    1,1,1,1,2,2,2,2,
    3,3,3,3,4,4,4,4,
    3,3,3,3,4,4,4,4,
    3,3,3,3,4,4,4,4,
    3,3,3,3,4,4,4,4};


Adafruit_NeoPixel strip = Adafruit_NeoPixel(64, 2, NEO_GRB + NEO_KHZ800);



//Спосоности игроков
//нажатие кнопки для начала игры
void debug(long a){
    Serial.println(a);
}

int k[8]={0,0,0,0,0,0,0,0};
//------------------4-11------

void knop(int a){
  debug(digitalRead(a+3));
  if (digitalRead(a+3)==0){
    k[a]=1;
    //debug(k[a]);
    while (digitalRead(a+3)==0){

    }
    delay(50);
  }
}


void matrix(int zasvet, int zona){
  for (int a=0;a>64;a++) {
    if (zasvet == 1){
      if (STR[a] == zona){
         if (zona==1){
          strip.setPixelColor(a, strip.Color(255, 255, 255));
         }
         if (zona==1){
          strip.setPixelColor(a, strip.Color(0, 0, 255));
         }
         if (zona==1){
          strip.setPixelColor(a, strip.Color(255, 0, 0));
         }
         if (zona==1){
          strip.setPixelColor(a, strip.Color(0, 255, 0));
         }
      }
    }
  }  
}
void setup() {
   strip.begin();
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  knop(1);
delay(100);
matrix(1,1);
strip.show();
 
}
