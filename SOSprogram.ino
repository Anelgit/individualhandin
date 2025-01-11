void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Set the built-in LED pin as an output
}

// Function to flash the LED for a dot
void dot() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED
  delay(120);         // Wait for dot duration
  digitalWrite(LED_BUILTIN, LOW);  // Turn off the LED
  delay(120);         // Wait for spacing
}

// Function to flash the LED for a dash
void dash() {
  digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED
  delay(360);        // Wait for dash duration
  digitalWrite(LED_BUILTIN, LOW);  // Turn off the LED
  delay(360);         // Wait for spacing
}

void loop() {
//sos in morse code, delay between letters is considered to be 360 ms for a 20 WPM reading speed. 
// a single dot duration is considered to be 120 ms and a single dash duration is considered to be 360 ms

// 'S'
  dot();
  delay(120);
  dot();
  delay(120);
  dot();
  delay(360);
// '0'
  dash();
  delay(120);
  dash();
  delay(120);
  dash();
  delay(360);
// 'S'
  dot();
  delay(120);
  dot();
  delay(120);
  dot();
  delay(360);
  }
