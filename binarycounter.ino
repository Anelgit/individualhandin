int counter = 0;

void setup() {
 // initialize digital pins for LED's used to form a trafic light
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
Serial.begin(115200);
}


void loop() {

  // start count at 0 where all LEDs are off
  if(counter == 0){
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(100);
  }

  // continue counter where first LED is on
  if(counter == 1){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(100);
  }

  // continue counter where second LED is on 
  if(counter == 2){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    delay(100);
  }

  // continue counter where first and second LED is on
  if(counter == 3){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    delay(100);
  }

  // continue counter where third LED is on
  if(counter == 4){
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(100);
  }

  // continue counter where third and first LED is on
  if(counter == 5){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(100);
  }

  // continue counter where third and second LED is on
  if(counter == 6){
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
  }

  // continue counter where all LEDs are on
  if(counter == 7){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(100);
  }

  // print counter to serial monitor
  Serial.print(counter);
  // count one up for each step through the loop 
  counter++;
   // delay for 100 ms
  delay(100);

  // reset the counter to 0 when 8 is reached
  if(counter == 8){
    counter = 0;
  }
   // delay for 1 second to reset 
  delay(1000);

  }


