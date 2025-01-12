int BTN = 0;               // Current button state
int lastBTN = 0;           // Previous button state
bool LEDState = false;     // boolean to set LED either on or off depending on button press

void setup() {
  pinMode(13, OUTPUT);      // Set pin for LED
  pinMode(8, INPUT_PULLUP); // Set pin for button with pullup resistor
  
  Serial.begin(115200); 
}

void loop() {
  BTN = !digitalRead(8); // Read button state (invert due to INPUT_PULLUP)

  // Detect button press transition (from not pressed to pressed)
  if (BTN == 1 && lastBTN == 0) {
    LEDState = !LEDState;         // Toggle LED state
    digitalWrite(13, LEDState);   // Update LED output
  }

  // Update the previous button state so the button press will do the reverse action
  lastBTN = BTN;

  delay(50); 
}
