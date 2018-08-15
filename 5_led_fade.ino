int led1=5;
int led2=6;
int led3=9;
int led4=10;
int led5=11;
int b1 = 0,b2=0,b3=0,b4=0,b5=0;
int f1=5,f2=5,f3=5,f4=5,f5=5;






void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  //pinMode(LED_BUILTIN,OUTPUT);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  
    analogWrite(led1, b1);
    b1=b1+f1;
    if (b1<=0 || b1>=255){
      f1=-f1;
    }

    analogWrite(led2, b2);
    b2=b2+f2;
    if (b2<=0 || b2>=255){
      f2=-f2;
     }

    analogWrite(led3, b3);
    b3=b3+f3;
    if (b2<=0 || b2>=255){
      f2=-f2;
     }

    analogWrite(led4, b4);
    b4=b4+f4;
    if (b2<=0 || b2>=255){
      f2=-f2;
     }

    analogWrite(led5, b5);
    b5=b5+f5;
    if (b2<=0 || b2>=255){
      f2=-f2;
     }

     delay(30);
                  
  
}


