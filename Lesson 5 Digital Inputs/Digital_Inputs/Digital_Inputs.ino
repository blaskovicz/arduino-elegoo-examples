//www.elegoo.com
//2016.12.08

int ledPin = 5;
int leftButton = 9;
int buttonBpin = 8;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(leftButton, INPUT_PULLUP);
  //pinMode(buttonBpin, INPUT_PULLUP);
}

void loop()
{
  int currentState = digitalRead(leftButton);
  int nextState = LOW;
  if (currentState == LOW)
  {
    nextState = HIGH;
  }
  digitalWrite(ledPin, nextState);
  // if (digitalRead(leftButton) == LOW)
  // {
  //   digitalWrite(ledPin, HIGH);
  // }
  // if (digitalRead(buttonBpin) == LOW)
  // {
  //   digitalWrite(ledPin, LOW);
  // }
}
