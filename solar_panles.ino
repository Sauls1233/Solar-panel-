// define pins 
int rev_swit = 2;
int driver_Pull = 7;
int Driver_Drive= 6;
int sped =A0; // potentiomter

// variables
int Pulse_delay = 500;
boolean set_direct = LOW;
char rx_byte = 0;
int sun_angle;

//functions

void rev_motor(){
  set_direct = !set_direct;
  }

void setup() {
  pinMode(driver_Pull, OUTPUT);
  pinMode(Driver_Drive, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(rev_swit),rev_motor,FALLING);
  Serial.begin(9600);
}
void get_hour(void) {
  if (Serial.available() > 0) { 
    rx_byte = Serial.read();  
  
  }
    if ((rx_byte >= '0') && (rx_byte <= '9')) {
      Serial.print("The hour is : ");
      Serial.println(rx_byte);
      if (rx_byte = "1"){
        sun_angle= 22;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
         }
      if (rx_byte = "2"){
        sun_angle= 36;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
        }
      if (rx_byte = "3"){
        sun_angle= 51;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
      }
      if (rx_byte = "4"){
        sun_angle= 66;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
      }
      if (rx_byte = "5"){
        sun_angle= 81;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
      }
      if (rx_byte = "6"){
        sun_angle= 96;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
      }
      if (rx_byte = "6"){
        sun_angle= 111;
        Pulse_delay =map((analogRead(sped)),0,1023,200,50);
        digitalWrite(Driver_Drive,set_direct);
        digitalWrite(driver_Pull,HIGH);
        delayMicroseconds(Pulse_delay);
        digitalWrite(driver_Pull,LOW);
        delayMicroseconds(Pulse_delay);
      }
    }
}
void Antartica_sun(void){
  Serial.begin(9600);
  get_hour;
}
void loop() {
  char Letter_entered;
  
  if (Serial.available()>0){
    Letter_entered= Serial.read();
    Serial.print("You entered: =");
    Serial.print(Letter_entered);
    if (Letter_entered == "A") {
      Antartica_sun;
    } 
}
}
