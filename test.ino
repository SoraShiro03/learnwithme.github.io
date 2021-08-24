int ledFront = 10;
int ledLeft = 11;
int ledRight = 12;
int ledBack = 13;

int pRfront = A2;
int pRleft =A3 ;
int pRright = A0;
int pRback = A1;

int valueF; 
int valueL;
int valueR;
int valueB;

String myString(int value){
  String newString = String(value);
  return newString;
}

 void setup () 
 {
  pinMode(ledFront, OUTPUT);
  pinMode(ledLeft, OUTPUT);
  pinMode(ledRight, OUTPUT);
  pinMode(ledBack, OUTPUT); 
  pinMode(pRfront, INPUT);
  pinMode(pRleft, INPUT);
  pinMode(pRright, INPUT);
  pinMode(pRback, INPUT);
Serial.begin(9600);
 }

void loop()
{

valueF = analogRead(pRfront);
valueL = analogRead(pRleft);
valueR = analogRead(pRright);
valueB = analogRead(pRback);

digitalWrite(ledFront, LOW );
digitalWrite(ledLeft, LOW );
digitalWrite(ledRight, LOW );
digitalWrite(ledBack, LOW );
//if (valueF > 500){
//  digitalWrite(ledFront, HIGH);
//}
Serial.println("F: "+ myString(valueF));
Serial.println("L: "+ myString(valueF));
Serial.println("R: "+ myString(valueF));
Serial.println("B: "+ myString(valueF));
delay(500);


if (valueF > valueL && valueF >  valueR &&  valueF > valueB){
digitalWrite(ledFront, HIGH );
}
if(valueL > valueF && valueL >valueR &&valueL > valueB){
digitalWrite(ledLeft,HIGH  );
}
if (valueR > valueL && valueR >valueF &&  valueR > valueB){
digitalWrite(ledRight , HIGH );
}
else{
digitalWrite(ledBack, HIGH  );
}


}
