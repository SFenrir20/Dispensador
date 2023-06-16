int b1a = 2;
int b1b = 3;
int b2a = 4;
int b2b = 5;
int aux=0;

void setup(){
  pinMode(b1a, OUTPUT);
  pinMode(b1b, OUTPUT);
  pinMode(b2a, OUTPUT);
  pinMode(b2b, OUTPUT);
  Serial.begin(960000);
  delay(1000);
  Serial.print("Bombas Activadas");
  delay(1000);
}

void loop(){
  if (aux==0)
  {
    Bmotor1(2000);
    delay(4000);
    Bmotor2(3000); 
  aux=1;
  }
}

void Bmotor1(int tiempo){
  digitalWrite(b1a,HIGH);
  digitalWrite(b1b,LOW);
  delay(tiempo);
  digitalWrite(b1a, LOW);
  digitalWrite(b1b, LOW);
}
void Bmotor2(int tiempo){
  digitalWrite(b2a,HIGH);
  digitalWrite(b2b,LOW);
  delay(tiempo);
  digitalWrite(b2a, LOW);
  digitalWrite(b2b, LOW);
}

