const int left = 2;
const int right = 3;
 

int mot1 = 5;
int mot1a = 6;
int mot2 = 7;
int mot2a = 8;
 

int p = 2;
void setup()
{
pinMode(left, INPUT);
pinMode(right, INPUT);
pinMode(p, OUTPUT);
pinMode(mot1, OUTPUT);
pinMode(mot1a, OUTPUT);
pinMode(mot2, OUTPUT);
pinMode(mot2a, OUTPUT);
pinMode(p, HIGH);
Serial.begin(9600);
}
 

void LEFT(void);
void RIGHT(void);
void STOP(void);
int Left, Right;
void loop()
{
digitalWrite(mot1, HIGH);
digitalWrite(mot2, HIGH);
digitalWrite(mot1a, LOW);
digitalWrite(mot2a, LOW);
 

 

while(1)
{
Left = digitalRead(left);
Right = digitalRead(right);
if(Left == 0 && Right == 1)
LEFT();
if(Left == 1 && Right == 0)
RIGHT();
Serial.println("Straight");
}
}
 

void LEFT()
{
digitalWrite(mot1, LOW);
digitalWrite(mot1a, HIGH);
Serial.println("Left");
while(Left == 0)
{
Left = digitalRead(left);
Right = digitalRead(right);
if(Right == 0)
{
int lprev = Left;
int rprev = Right;
STOP();
while((lprev == Left) && (rprev == Right))
{
Left = digitalRead(left);
Right = digitalRead(right);
}
}
digitalWrite(mot1, HIGH);
digitalWrite(mot1a, LOW);
}
digitalWrite(mot2, HIGH);
digitalWrite(mot2a, LOW);
}
 

void RIGHT()
{
digitalWrite(mot2, LOW);
digitalWrite(mot2a, HIGH);
Serial.println("Right");
while(Right == 0)
{
Left = digitalRead(left);
Right = digitalRead(right);
if(Left == 0)
{
int lprev = Left;
int rprev = Right;
STOP();
while((lprev == Left) && (rprev == Right))
{
Left = digitalRead(left);
Right = digitalRead(right);
}
}
digitalWrite(mot2, HIGH);
digitalWrite(mot2a, LOW);
}
digitalWrite(mot1, HIGH);
digitalWrite(mot1a, LOW);
}
 

void STOP()
{
digitalWrite(mot1, LOW);
digitalWrite(mot1a, LOW);
digitalWrite(mot2, LOW);
digitalWrite(mot2a, LOW);
}
