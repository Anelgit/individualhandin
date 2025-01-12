int BTN = 0;

void setup() {

  pinMode(13, OUTPUT); // set pin for LED
  pinMode(8, INPUT_PULLUP); // set pin for button with pullup resistor
  
  Serial.begin(115200); 

}

void loop() {

  BTN = !digitalRead(8); // sets btn variable when button is pushed 
    if(BTN == 1){ 
      digitalWrite(13,HIGH); // if button is pushed turn LED on
    }
      else{
        digitalWrite(13,LOW); // if there's no push leave LED off
      }
}
