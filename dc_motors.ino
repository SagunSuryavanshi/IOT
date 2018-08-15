char val;
const int a=7;
const int b=8;
void setup()
{ pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
Serial.begin(9600); } 
void loop()
{
  /* Serial.availabe is used to check if anything is streaming As there is nothing streaming !Serial.available returns 0 untill the value changes to 1*/ 
while(!Serial.available());
val = Serial.read();
if (val == 'C'){
  //for clockwise 
  digitalWrite(a,HIGH); 
  digitalWrite(b,LOW); 
  } else if(val == 'A') {
 // for anticlockwise
 digitalWrite(a,LOW);
 digitalWrite(b,HIGH); }
  //for brake
  else if(val == 'B') 
  { digitalWrite(a,LOW);
  digitalWrite(b,LOW); } }
}
}



