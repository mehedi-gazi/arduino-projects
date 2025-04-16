// Project 1 - Spaceship Interface, Introductory to circuit building and C.
// Author - Mehedi Gazi, based off Starter Kit Book, 16-4-25

// Declare variables
int switchState = 0;

void setup() {
  // Setup Function
  pinMode(3 /*Designates which pin*/, OUTPUT /*Designates whether its an input or output*/);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

void loop() {
  // Main Script, like int main(void) in C but different
  switchState = digitalRead(2); // The digitalRead functions, reads the voltage the chosen pin for voltage, in this case pin.2, as it designates as input, therefore drawing in power.

  if (switchState == LOW) { // Conditional that checks if switchState is equal (==) to Low (Off)
    // In the case if the button isn't pressed


    digitalWrite(3, HIGH); // digitally writes to execute what pin to designate and a boolean type like true and false
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

  } else { // In the case if the button is pressed
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250); // delays by a quarter second - 250 ms

    // Engage the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); // 250ms

  }
} // Returns back to start of Loop
