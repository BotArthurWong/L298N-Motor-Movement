// Robot Car Movement by Arthur Wong


#define pwm_1 4 //PIN DEFINE FOR PWM OR MOTOR SPEED
#define dir_1 5 //DIRECTION OF THE MOTOR
#define pwm_2 3
#define dir_2 2
#define pwm_3 7
#define dir_3 6



void setup() 
{


  pinMode(pwm_1, OUTPUT);
  pinMode(dir_1, OUTPUT);
  pinMode(pwm_2, OUTPUT);
  pinMode(dir_2, OUTPUT);
  pinMode(pwm_3, OUTPUT);
  pinMode(dir_3, OUTPUT);
  Serial.begin(9600);
  //declare pins as INPUT/OUTPUT


  }

void loop() 

{
gerakdepan();
delay(2000);
berhenti();
delay(1000);
kanan();
delay(1000);
kiri();
delay(1000);
putarkanan();
delay(1000);
putarkiri();
delay(1000);
belakang();
delay(1000);


}
 void gerakdepan()
{
  digitalWrite( dir_1,HIGH);
  digitalWrite( dir_2,HIGH);
  digitalWrite( dir_3,LOW);  
  analogWrite(pwm_1,100);
  analogWrite(pwm_2,0);
  analogWrite(pwm_3,100);  
 }
 void berhenti()
{
  digitalWrite( dir_1,HIGH);
  digitalWrite( dir_2,HIGH);
  digitalWrite( dir_3,HIGH);  
  analogWrite(pwm_1,0);
  analogWrite(pwm_2,0);
  analogWrite(pwm_3,0);  
 }
  void kanan()
{
  digitalWrite( dir_1,HIGH);
  digitalWrite( dir_2,HIGH);
  digitalWrite( dir_3,LOW);  
  analogWrite(pwm_1,0);
  analogWrite(pwm_2,80);
  analogWrite(pwm_3,100);  
 }
  void kiri()
{
  digitalWrite( dir_1,HIGH);
  digitalWrite( dir_2,LOW);
  digitalWrite( dir_3,HIGH);  
  analogWrite(pwm_1,100);
  analogWrite(pwm_2,80);
  analogWrite(pwm_3,0);  
 }
  void putarkanan()
{
  digitalWrite( dir_1,LOW);
  digitalWrite( dir_2,LOW);
  digitalWrite( dir_3,LOW);  
  analogWrite(pwm_1,100);
  analogWrite(pwm_2,100);
  analogWrite(pwm_3,100);  
 }
  void putarkiri()
{
  digitalWrite( dir_1,HIGH);
  digitalWrite( dir_2,HIGH);
  digitalWrite( dir_3,HIGH);  
  analogWrite(pwm_1,100);
  analogWrite(pwm_2,100);
  analogWrite(pwm_3,100);  
 }
  void belakang()
{
  digitalWrite( dir_1,LOW);
  digitalWrite( dir_2,HIGH);
  digitalWrite( dir_3,HIGH);  
  analogWrite(pwm_1,100);
  analogWrite(pwm_2,0);
  analogWrite(pwm_3,100);  
 }
    
    
   
