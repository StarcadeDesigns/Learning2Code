/*
 * KNOWN ISSUES:
 * 
 */

#define GREEN_LED_PIN A5 // LED will turn on if the button is pressed 
#define BUTTON_PIN A0 // The button will turn the LED light on while it is pressed

int buttonState = 0;

void setup() {
pinMode(GREEN_LED_PIN, OUTPUT); // telling the board this pin should be an ouput for power/signal
pinMode(BUTTON_PIN, INPUT);  // telling the board that this pin should be an input for power/signal
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(BUTTON_PIN); // this tells the CPU to check if button is pressed

if (buttonState == HIGH) {
  digitalWrite(GREEN_LED_PIN, HIGH); // if button is pressed the output should be high meaning the light is on
} else {
  digitalWrite(GREEN_LED_PIN, LOW); // if the button is not pressed the ouput should be low meaning the light is off
}
}
