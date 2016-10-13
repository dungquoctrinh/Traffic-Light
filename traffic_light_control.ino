//initial setup value 
int red = 13;
int yellow = 12;
int green = 11;

// put your setup code here, to run once:
void setup() {
  //set up the pin output 
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

// put your main code here, to run repeatedly:
void loop() {
  changeLights();
  delay(15000);
}

void changeLights(){
  // green off, yellow for 3 seconds
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  delay(3000);
  
  // turn off yellow, then turn red on for 5 seconds
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  delay(5000);
  
  // red and yellow on for 2 seconds (red is already on though)
  digitalWrite(yellow,HIGH);
  delay(2000);
  
  // turn off red and yellow, then turn on green
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
}
