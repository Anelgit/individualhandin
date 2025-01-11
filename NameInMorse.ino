// letters in morse using an array. 1 represents a dot and 2 a dash.
int A[] = {1,2}; 
int N[] = {2,1};
int E[] = {1};
int L[] = {1,2,1,1};

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

// function to write out my name "Anel" in morse
void anelmorse(){
  // letter 'A' in morse
  for (int i = 0; i < 2; i++) {
    if (A[i] == 1) dot();
    else if (A[i] == 2) dash();
  }
  delay(360); // Gap between letters

  // letter 'N' in morse
  for (int i = 0; i < 2; i++) {
    if (N[i] == 1) dot();
    else if (N[i] == 2) dash();
  }
  delay(360); // Gap between letters

  // letter 'E' in morse although for loop is a bit redundent
  for (int i = 0; i < 1; i++) {
    if (E[i] == 1) dot();
  }
  delay(360); // Gap between letters

  for (int i = 0; i < 4; i++) {
    if (L[i] == 1) dot();
    else if (L[i] == 2) dash();
  }
  delay(840); // Gap between words (end of name)

}

void loop() {

  delay(1000);
  anelmorse();

  }
