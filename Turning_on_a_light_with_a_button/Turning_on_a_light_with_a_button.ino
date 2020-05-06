/*
 * KNOWN ISSUES:
 * pinMode(GREEN_LED_PIN), OUTPUT); there is an error of too few arguements to funtion
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
buttonState = digitalRead(BUTTON_PIN); // WHAT DOES THIS DO, WHAT DO YOU THINK IT DOES :)

if (buttonState == HIGH) { // NO COMMENTS HERE. I KNOW WHAT IT DOES BUT NOT WHAT YOU WANT IT TO DO.
  digitalWrite(GREEN_LED_PIN, HIGH);
} else {
  digitalWrite(GREEN_LED_PIN, LOW);
}
}
