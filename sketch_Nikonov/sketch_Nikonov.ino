#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
int b;
int a;
int S=255;
int H=255;
int V=255
int STR [64] ={
    1,1,1,1,2,2,2,2,
    1,1,1,1,2,2,2,2,
    1,1,1,1,2,2,2,2,
    1,1,1,1,2,2,2,2,
    3,3,3,3,4,4,4,4,
    3,3,3,3,4,4,4,4,
    3,3,3,3,4,4,4,4,
    3,3,3,3,4,4,4,4};



Adafruit_NeoPixel pixels_2 = Adafruit_NeoPixel(64, 8, NEO_GRB + NEO_KHZ800);


//Спосоности игроков
//нажатие кнопки для начала игры
void knop1(){
  if (digital.read(4)==0){

    while (digital.read(4)==0){

    }
    delay(50);
  }
}
void knop2(){
  if (digital.read(5)==0){

    while (digital.read(5)==0){

    }
    delay(50);
  }
}
void knop1(){
  if (digital.read(3)==0){

    while (digital.read(3)==0){

    }
    delay(50);
  }
}
void knop3(){
  if (digital.read(2)==0){

    while (digital.read(2)==0){

    }
    delay(50);
  }
}
void knop4(){
  if (digital.read(6)==0){

    while (digital.read(6)==0){

    }
    delay(50);
  }
}
void knop5(){
  if (digital.read(8)==0){

    while (digital.read(8)==0){

    }
    delay(50);
  }
}
void knop6(){
  if (digital.read(11)==0){

    while (digital.read(11)==0){

    }
    delay(50);
  }
}
void knop7(){
  if (digital.read(10)==0){

    while (digital.read(10)==0){

    }
    delay(50);
  }
}
void knop8(){
  if (digital.read(9)==0){

    while (digital.read(9)==0){

    }
    delay(50);
  }
}
нажатие кнопки игроком для повторения комбинации

способности игры
запомнить и вывести пиксель на матрицу
запомнить и вывести комбинацию пикселей на матрицу
издать звук

void matrix(zasvet){
  for (a=0;a>64;a++) {
    if (zasvet == 1){
      if (STR[a] == 1){

      }
    }
    if (zasvet == 2){
      if (STR[a] == 2){

      }
    }
    if (zasvet == 2){
      if (STR[a] == 2){

      }
    }
    if (zasvet == 4){
      if (STR[a] == 4){

      }
    }

  }
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
