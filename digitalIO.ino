int ledPin = 7;
int ledPinTwo = 1;
int switchPin = 12;
int buttonPin = 13;
int state = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(ledPinTwo, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(buttonPin) == HIGH){
    state = state + 1;
    if(digitalRead(buttonPin) == LOW){
      state = 0;
    }
  }
  if(digitalRead(switchPin) == HIGH){
    state = state + 2;
    if(digitalRead(switchPin) == LOW){
      state = 0;
    }
  }

  switch(state){
    case 0: // no buttons 
      break;
    case 1: 
      digitalWrite(ledPin, HIGH); // button 1
      digitalWrite(ledPinTwo, LOW);
      break;
    case 2: 
      digitalWrite(ledPinTwo, HIGH); // button 2
      digitalWrite(ledPin, LOW);
      break;
    case 3: 
      digitalWrite(ledPin, HIGH);
      digitalWrite(ledPinTwo, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      digitalWrite(ledPinTwo, LOW);
      delay(500);
      break;

   
  }

}
