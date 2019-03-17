
//motor 1
int enA = 10;
int in1 = 9;
int in2 = 8;

//motor 2
int enB = 4;
int in3 = 6;
int in4 = 5;


void setup() {
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() 
{

Forward;
delay(2000);
Reverse;
delay(2000);
Left;
delay(2000);
Right;
delay(2000);

 }



void Left() {

// turn on motor A
digitalWrite(in1,1);
digitalWrite(in2,0);
analogWrite(enA,200);

//turn on motor B
digitalWrite(in3,1);
digitalWrite(in4,0);
analogWrite(enB,200);


}

void Stop()
{

analogWrite(enA,0);
analogWrite(enB,0);

}

void Forward()
{
// turn on motor A
digitalWrite(in1,0);
digitalWrite(in2,0);
analogWrite(enA,250);

//turn on motor B
digitalWrite(in3,0);
digitalWrite(in4,0);
analogWrite(enB,250);

}

void Reverse()
{
// turn on motor A
digitalWrite(in1,1);
digitalWrite(in2,1);
analogWrite(enA,210);

//turn on motor B
digitalWrite(in3,1);
digitalWrite(in4,1);
analogWrite(enB,210);

}

void Right() {

// turn on motor A
digitalWrite(in1,0);
digitalWrite(in2,0);
analogWrite(enA,200);

//turn on motor B
digitalWrite(in3,0);
digitalWrite(in4,0);
analogWrite(enB,200);


}




