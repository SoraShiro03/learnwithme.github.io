int leftPhotoResister = A0;
int rightPhotoResister = A1;
int blueLed = 13;
int redLed = 12;

int leftValue;
int rightValue;

void setup(){
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(leftPhotoResister, INPUT);
  pinMode(rightPhotoResister, INPUT);
  Serial.begin(9600);
  
}

void loop(){
  leftValue = analogRead(leftPhotoResister);
  rightValue = analogRead(rightPhotoResister);

  String leftString = String(leftValue);
  String rightString = String(rightValue);
  digitalWrite(blueLed, LOW);
  digitalWrite(redLed, LOW);
  
  if(leftValue > rightValue){
    digitalWrite(blueLed,HIGH);
  }
  else{
    digitalWrite(redLed, HIGH);
  }

//  if (leftValue < 50){
//    digitalWrite(blueLed, LOW);
//  }
//  else{
//    digitalWrite(blueLed, HIGH);
//  }
//
//  
//   if (rightValue < 50){
//    digitalWrite(redLed, LOW);
//  }
//  else{
//    digitalWrite(redLed, HIGH);
//  }


  
  Serial.println("left pResister value: " + leftString);
  Serial.println("right pResister value: " + rightString);
  if (leftValue > rightValue){
    Serial.println("left pResister value > right");
  }
  else{
    Serial.println("right pResister value > left ");
  }
  delay(500);
  
  
}
