void setup() {
 // initialize digital pins for LED's used to form a trafic light
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
Serial.begin(115200);
}


void loop() {

digitalWrite(13, HIGH); // turn the green LED on for one second
Serial.println("DRIVE");
delay(1000); // wait for a second
digitalWrite(13, LOW); // turn the green LED off 

delay(500); // wait for half a second
digitalWrite(12, HIGH); // turn the yellow LED on for 300 ms to make driver ready to drive 
Serial.println("PREPARE YOURSELF");
delay(300); // wait for 300 ms
digitalWrite(12, LOW); // turn the yellow LED off 
delay(500); // wait for half a second

digitalWrite(11, HIGH); // turn the red LED on indicating a stop
Serial.println("STOP");
delay(1000); // wait for a second
digitalWrite(11, LOW); // turn the red LED off
delay(500); // wait for half a second

}
