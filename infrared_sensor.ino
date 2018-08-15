int s=9; 

void setup() 
{ pinMode(s, INPUT); 
Serial.begin(9600); }

void loop()
{ if(digitalRead(s)==HIGH) 
Serial.println("1"); 
else Serial.println("0");
delay(3); }
