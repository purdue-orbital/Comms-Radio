const int ledpin = 13;
int incomingByte;

void setup() {
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    incomingByte = Serial.read();

    if (incomingByte == 'H'){
      digitalWrite(ledpin,HIGH);
    }

    if (incomingByte == 'L'){
      digitalWrite(ledpin,LOW);
    }
  }

}
