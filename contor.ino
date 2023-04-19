
const int button= 5;
int buttonstate = 0;
int i= 0;
void setup() {
 pinMode(5, INPUT_PULLUP);  
 Serial.begin (9600);
 Serial.println(0);
}

void loop(){
if (digitalRead(button)> buttonstate){
  buttonstate = 1; 
  i++;
  Serial.println(i);
  }
if (digitalRead(button)==0){
  buttonstate = 0;
  } 
  
}
  
