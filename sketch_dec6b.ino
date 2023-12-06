const int bop = 10
const int mtr11 = 7;
const int mtr12 = 6;
const int mtr21 = 11;
const int mtr22 = 12;
long duration;
long inches;
const int strt = 4;
const int trig = 3;
const int echo = 2;

int buttonState = 0;
int onOffState = 2;

void setup()
{
  Serial.begin(9600);
pinMode(ledY, OUTPUT);
pinMode(ledG, OUTPUT);
pinMode(ledR, OUTPUT);
pinMode(mtr11, OUTPUT);
pinMode(mtr21, OUTPUT);
pinMode(mtr12, OUTPUT);
pinMode(mtr22, OUTPUT);
pinMode(strt, INPUT);
pinMode(echo, INPUT);
pinMode(trig, OUTPUT);
pinMode(bop, OUTPUT);
}

void distance() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration= pulseIn(echo, HIGH);
  inches = duration/74/2;
  
}


void run(){
digitalWrite(mtr11, HIGH);
digitalWrite(mtr12, LOW);
digitalWrite(mtr21, HIGH);
digitalWrite(mtr22, LOW);
}

    
void wall(){
   digitalWrite(mtr11, LOW);
   digitalWrite(mtr12, HIGH);
   digitalWrite(mtr21, LOW);
   digitalWrite(mtr22, HIGH);
   digitalWrite(bop, HIGH);
   delay(1500);
   digitalWrite(bop, LOW);
   delay(1500);
   digitalWrite(bop, HIGH):
   digitalWrite(mtr11, HIGH);
   digitalWrite(mtr12, LOW);
   delay(1500);
   digitalWrite(bop, LOW)
   delay(1500);
   onOffState = 2;
}


void loop(){
 distance();
Serial.println(inches);

  

  

  if(onOffState == 2){
    run();
  }

  if(onOffState == 2){
   if(inches<=5){
    wall();
   }
  }
}
  

