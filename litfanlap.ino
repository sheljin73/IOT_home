#define light 2
#define fan 3
#define lap 4
char data;

void setup()
{
  Serial.begin(9600);
  pinMode(light,OUTPUT);
  pinMode(fan,OUTPUT);
  pinMode(lap,OUTPUT);
}

void loop()
{
  while(Serial.available() > 0){
    data = Serial.read();
    if(data=='A'){
      digitalWrite(light,HIGH);
    }
    if(data=='B'){
      digitalWrite(fan,HIGH);
    }
    if(data=='C'){
      digitalWrite(lap,HIGH);
      delay(1000);
    }
    if(data=='D'){
      digitalWrite(light,LOW);
    }
    if(data=='E'){
      digitalWrite(fan,LOW);
    }
    if(data=='F'){
      digitalWrite(lap,LOW);
    }
  }
}

