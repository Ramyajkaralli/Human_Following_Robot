#define MLa 6 //left motor 1st pin
#define MLb 9 //left motor 2nd pin
#define MRa 10 //right motor 1st pin
#define MRb 11 //right motor 2nd pin

int IR_Left= 3;
int IR_Right= 4;

void setup()
{
  pinMode(IR_Left, INPUT); // IR1 DO pin
  pinMode(IR_Right, INPUT); // IR2 DO pin
  pinMode(MLa, OUTPUT); // Motors pins
  pinMode(MLb, OUTPUT);
  pinMode(MRa, OUTPUT);
  pinMode(MRb, OUTPUT);
}

void loop()
{
  if (digitalRead(IR_Left) == HIGH && digitalRead(IR_Right) == HIGH)
  {
    // Stop
    digitalWrite(MLa, LOW);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, LOW);
  }
  if (digitalRead(IR_Left) == LOW && digitalRead(IR_Right) == HIGH)
  {
    // will move in the left direction
    digitalWrite(MLa, LOW);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
  }
  if (digitalRead(IR_Left) == HIGH && digitalRead(IR_Right) == LOW)
  {
    // will move in the right direction
    digitalWrite(MLa, HIGH);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, LOW);
    digitalWrite(MRb, LOW);
  }
  if (digitalRead(IR_Left) == LOW && digitalRead(IR_Right) == LOW)
  {
    // move in the forward direction
    digitalWrite(MLa, HIGH);
    digitalWrite(MLb, LOW);
    digitalWrite(MRa, HIGH);
    digitalWrite(MRb, LOW);
  }
}
