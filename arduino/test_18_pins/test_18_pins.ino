void setup() {
  Serial.begin(9600);
//  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(13, INPUT);
  

}

void loop() {
  // read the state of the pushbutton value:
  //  buttonState = digitalRead(buttonPin);
//   Serial.print(digitalRead(A0));
Serial.print("A1:");
  Serial.print(digitalRead(A1));
  Serial.print(" A2:");
  Serial.print(digitalRead(A2));
   Serial.print(" A3:");
  Serial.print(digitalRead(A3));
   Serial.print(" A4:");
  Serial.print(digitalRead(A4));
   Serial.print(" A5:");
  Serial.print(digitalRead(A5));
   Serial.print(" A6:");
  Serial.print(digitalRead(A6));
   Serial.print(" 0:");
  Serial.print(digitalRead(0));
  Serial.print(" 1:");
  Serial.print(digitalRead(1));
  Serial.print(" 2:");
  Serial.print(digitalRead(2));
  Serial.print(" 3:");
  Serial.print(digitalRead(3));
  Serial.print(" 4:");
  Serial.print(digitalRead(4));
  Serial.print(" 5:");
  Serial.print(digitalRead(5));
  Serial.print(" 6:");
  Serial.print(digitalRead(6));
  Serial.print(" 7:");
  Serial.print(digitalRead(7));
  Serial.print(" 8:");
  Serial.print(digitalRead(8));
  Serial.print(" 9:");
  Serial.print(digitalRead(9));
  Serial.print(" 10:");
 Serial.print(digitalRead(10));
 Serial.print(" 13:");
  Serial.println(digitalRead(13));

  delay(10);
}
