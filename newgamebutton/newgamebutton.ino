#include "Button.h"



Button S1(A0);
Button B2(A1);
Button B3(A2);
Button B4(A3);


int level, i;
int sequence[120]={13,12,11,10,10,13,10,12,10,11,11,12,10,12,11,10,13,13,11,
10,12,12,11,13,11,12,11,10,13,12,11,10,13,12,11,10,10,13,10,12,10,11,11,12,10,
12,11,10,13,13,11,10,12,12,10,13,11,12,13,11,13,12,12,11,13,11,13,10,10,12,11,12,
10,12,11,10,13,13,11,10,12,12,11,13,11,12,11,10,13,12,11,10,13,12,11,10,10,13,10,12,
10,11,11,12,10,12,11,10,13,13,11,10,12,12,11,13,11};

//int score = p;

void setup() {
  


Serial.begin(9600);

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

}

void level_start()                                      
{

  int i = level;
 

  for(level=0;level<=5;level++)
  {
    
   int i = level; 
  digitalWrite(sequence[i],HIGH);
  delay(700);

  digitalWrite(sequence[i],LOW);
  delay(700);
  
  Serial.println(level); 
  
}
 for(level>5;level<=10;level++)
  {
    int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(670);
  digitalWrite(sequence[i],LOW);
  delay(670);
  Serial.println(level);
 }
 for(level>10;level<=15;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(670);
  digitalWrite(sequence[i],LOW);
  delay(670);
  Serial.println(level);
 }
 for(level>15;level<=20;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(640);
  digitalWrite(sequence[i],LOW);
  delay(640);
  Serial.println(level);
 }
for(level>20;level<=25;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(610);
  digitalWrite(sequence[i],LOW);
  delay(610);
  Serial.println(level);
 }
 for(level>25;level<=30;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(580);
  digitalWrite(sequence[i],LOW);
  delay(580);
  Serial.println(level);
 }
 for(level>30;level<=35;level++)
 {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(550);
  digitalWrite(sequence[i],LOW);
  delay(550);
  Serial.println(level);
}
for(level>35;level<=40;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(520);
  digitalWrite(sequence[i],LOW);
  delay(520);
  Serial.println(level);
 }
 for(level>40;level<=45;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(490);
  digitalWrite(sequence[i],LOW);
  delay(490);
  Serial.println(level);
 }
 for(level>45;level<=50;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(460);
  digitalWrite(sequence[i],LOW);
  delay(460);
  Serial.println(level);
 }
 for(level>50;level<=55;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(430);
  digitalWrite(sequence[i],LOW);
  delay(430);
  Serial.println(level);
 }
 for(level>55;level<=60;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(400);
  digitalWrite(sequence[i],LOW);
  delay(400);
  Serial.println(level);
 }
 for(level>60;level<=65;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(370);
  digitalWrite(sequence[i],LOW);
  delay(370);
  Serial.println(level);
 }for(level>65;level<=70;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(340);
  digitalWrite(sequence[i],LOW);
  delay(340);
  Serial.println(level);
 }for(level>70;level<=75;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(310);
  digitalWrite(sequence[i],LOW);
  delay(310);
  Serial.println(level);
 }for(level>75;level<=80;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(280);
  digitalWrite(sequence[i],LOW);
  delay(280);
  Serial.println(level);
 }for(level>80;level<=85;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(250);
  digitalWrite(sequence[i],LOW);
  delay(250);
  Serial.println(level);
 }for(level>85;level<=90;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(220);
  digitalWrite(sequence[i],LOW);
  delay(220);
  Serial.println(level);
 }for(level>90;level<=95;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(180);
  digitalWrite(sequence[i],LOW);
  delay(180);
  Serial.println(level);
 }for(level>95;level<=100;level++)
  {int i = level;
  digitalWrite(sequence[i],HIGH);
  delay(150);
  digitalWrite(sequence[i],LOW);
  delay(150);
  Serial.println(level);
  }
 }
 
 




void loop() {


level_start();

  

     

}
