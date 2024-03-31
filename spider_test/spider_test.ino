#include <Servo.h>
Servo joint2;  
Servo joint3;  
Servo joint4;  
Servo joint5;  
Servo joint6;  
Servo joint7;  
Servo joint8;  
Servo joint9;
void setup() {
  joint2.attach(2);
  joint3.attach(3);
  joint4.attach(4);
  joint5.attach(5);
  joint6.attach(6);
  joint7.attach(7);
  joint8.attach(8);
  joint9.attach(9);
}

void loop() {
  stand();
  forward(5);
  sit();
}
void wink(unsigned int steps){
  for(int i = 165; i >= 135; i--){
    joint9.write(i);
    delay(15);
  }
  for(int i = 165; i >= 30; i--){
      joint5.write(i);
      delay(15);
    }
  while(steps--){
    for(int i = 10; i <= 120; i++){
      joint4.write(i);
      delay(15);
    }
    delay(150);
    for(int i = 120; i >= 10; i--){
      joint4.write(i);
      delay(15);
    }
    delay(150);
  }
  for(int i = 135; i <= 165; i++){
    joint9.write(i);
    delay(15);
  }
  for(int i = 30; i <= 165; i++){
      joint5.write(i);
      delay(15);
    }
}
void twist(){
    for(int right=90;right<170;right++){
      joint2.write(right);
      joint6.write(right);
      joint4.write(right-90);
      joint8.write(right-90);
      delay(10);
  }

   for(int right=170;right>90;right--){
      joint2.write(right);
      joint6.write(right);
      joint4.write(right-90);
      joint8.write(right-90);
      delay(10);
  }

}
void sit(){
    for(int i = 165; i >= 90; i--){
    joint5.write(i);
    joint9.write(i);
    joint3.write(180 - i);
    joint7.write(180 - i);
    delay(15);
  }
}
void stand(){
  for(int i = 90; i <= 165; i++){
    joint5.write(i);
    joint9.write(i);
    joint3.write(180 - i);
    joint7.write(180 - i);
    delay(15);
  }
}
  void forward(unsigned int steps){
    while(steps--){
      for(int i = 15; i <= 45; i++){
        joint3.write(i);
        joint7.write(i);
        delay(15);
      }
      delay(50);
      for(int i = 120; i <= 150; i++){
        joint2.write(i);
        joint8.write(70 - abs(120 - i));
        delay(15);
      }
      joint4.write(60);
      joint6.write(100);
      delay(50);
      for(int i = 45; i >= 15; i--){
        joint3.write(i);
        joint7.write(i);
        delay(15);
      }
      delay(50);
      for(int i = 165; i >= 135; i--){
        joint5.write(i);
        joint9.write(i);
        delay(15);
      }
      delay(50);
      for(int i = 150; i >= 120; i--){
        joint2.write(i);
        joint8.write(70 - abs(120 - i));
        delay(15);
      }
      for(int i = 100; i <= 130; i++){
        joint6.write(i);
        joint4.write(160 - i);
        delay(15);
      }
      delay(50);
      for(int i = 135; i <= 165; i++){
        joint5.write(i);
        joint9.write(i);
        delay(15);
      }
      delay(50);
    }
  }
