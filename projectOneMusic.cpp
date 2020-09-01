int lightPIN = 12;
int soundPIN = 7;

int buttonPIN = 2;
int buttonTwoPIN = 5;

int servoPIN = 8;

#include <Servo.h>
Servo myservo; 


int LowC = 261;
int noteD = 294;
int noteE = 329;
int noteF = 349;
int noteG = 392;
int noteA = 440;
int noteB = 493;
int HighC = 523;

int startSpeed = 250;
int playSpeed = 250;

void setup() {

pinMode(lightPIN,OUTPUT);
pinMode(soundPIN,OUTPUT);
pinMode(servoPIN,OUTPUT);

pinMode(buttonPIN,INPUT);

Serial.begin(9600);

 myservo.attach(servoPIN);
}

void loop() {

int readValue = digitalRead(buttonPIN);
int readSecondValue = digitalRead(buttonTwoPIN);

if ( readValue == HIGH && readSecondValue == HIGH) {
  myservo.write(68);
  }

if (readValue == LOW) {
  myservo.write(0);
  bumblebee();
  }

if (readSecondValue == LOW) {
  myservo.write(135);
  Lamb();
  }
}


void Lamb() {

  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, LowC, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);






  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);
delay(playSpeed);





  tone( soundPIN, noteD, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

  tone( soundPIN, noteD, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

  tone( soundPIN, noteD, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);
delay(playSpeed);





  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteG, playSpeed);
delay(playSpeed);

  tone( soundPIN, noteG, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);
delay(playSpeed);





// second rep

 tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, LowC, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);






  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

  tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);



  tone( soundPIN, noteD, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);





  tone( soundPIN, LowC, playSpeed*4);
digitalWrite( lightPIN, HIGH);
delay(playSpeed*4);
digitalWrite( lightPIN, LOW);
}






void bumblebee() {
     
tone( soundPIN, noteG, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed*2);



   
tone( soundPIN, noteF, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed*2);




   
tone( soundPIN, LowC, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteF, playSpeed);
delay(playSpeed);





tone( soundPIN, noteG, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteG, playSpeed);
delay(playSpeed);

tone( soundPIN, noteG, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);
delay(playSpeed);



tone( soundPIN, noteG, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);






tone( soundPIN, noteF, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed*2);






tone( soundPIN, LowC, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteG, playSpeed);
delay(playSpeed);

tone( soundPIN, noteG, playSpeed);
delay(playSpeed);




tone( soundPIN, noteE, playSpeed*2);
digitalWrite( lightPIN, HIGH);
delay(playSpeed*4);
digitalWrite( lightPIN, LOW);




tone( soundPIN, noteD, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);




tone( soundPIN, noteD, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteF, playSpeed);
delay(playSpeed*2);





tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);
tone( soundPIN, noteE, playSpeed);
delay(playSpeed);
tone( soundPIN, noteE, playSpeed);
delay(playSpeed);
tone( soundPIN, noteE, playSpeed);
delay(playSpeed);





tone( soundPIN, noteE, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);
tone( soundPIN, noteF, playSpeed);
delay(playSpeed);
tone( soundPIN, noteG, playSpeed);
delay(playSpeed*2);






tone( soundPIN, noteG, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);






tone( soundPIN, noteF, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed);

tone( soundPIN, noteD, playSpeed);
delay(playSpeed*2);






tone( soundPIN, LowC, playSpeed);
digitalWrite( lightPIN, HIGH);
delay(playSpeed);
digitalWrite( lightPIN, LOW);

tone( soundPIN, noteE, playSpeed);
delay(playSpeed);

tone( soundPIN, noteG, playSpeed);
delay(playSpeed);

tone( soundPIN, noteG, playSpeed);
delay(playSpeed);


tone( soundPIN, LowC, playSpeed*4);
delay(playSpeed*4);

  }
