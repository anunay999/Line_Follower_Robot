void setup() {
  // put your setup code here, to run once:
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hi!");
  int v1=digitalRead(A5),v2=digitalRead(A3),v=digitalRead(A4);
  if(v1==1 && v2==1 && v==0)
  {
    digitalWrite(5,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(9,LOW);    
  }
  else 
  {
    if(v1==0)
    {
      digitalWrite(5,LOW);
      digitalWrite(3,LOW);
      digitalWrite(6,HIGH);
      digitalWrite(9,LOW);0
    }
    else if(v2==0)
    {
      digitalWrite(5,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(6,LOW);
      digitalWrite(9,LOW);
      
      }
       
  }
  
  //Serial.println(v1);
}

