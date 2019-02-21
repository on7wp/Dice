/*
  Electronic dice

  Simulates a rolling dice every second 
  
  Built 24 Feb 2018
  by Pedro M.J. Wyns

  This example code is in the public domain.

*/

// the setup function runs once when you press reset or power the board

void setup() {
  
  pinMode(0, OUTPUT);// six
  pinMode(1, OUTPUT);// two
  pinMode(2, OUTPUT);// four
  pinMode(3, INPUT_PULLUP); // switch
  pinMode(4, OUTPUT);// one
  pinMode(5, INPUT_PULLUP); // reset

  
}

// the loop function runs over and over again forever
void loop() {
 int buttonState = 1000;
  // read the state of the pushbutton value:
  buttonState = digitalRead(3);  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:


  if (buttonState == LOW) {
  

  int  randNumber=0;
  randNumber=random(1,7);
  if (randNumber==1){
    digitalWrite(4, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(0, LOW);
  }
  if (randNumber==2){
    digitalWrite(4, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(0, LOW);
  }
  if (randNumber==3){
    digitalWrite(4, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(0, LOW);
  }
  if (randNumber==4){
    digitalWrite(4, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(0, LOW);
  }
  if (randNumber==5){
    digitalWrite(4, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(0, LOW);
  }
  if (randNumber==6){
    digitalWrite(4, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(0, HIGH);
  }
  delay (500);
  }
  else { 
   buttonState = digitalRead(3);
 }
 }
