#define GREEN_LED_PIN A5 // LED will turn on if the button is pressed 
#define BUTTON_PIN A0 // The button will turn the LED light on while it is pressed

int buttonState = 0;

void setup() {
pinMode(GREEN_LED_PIN), OUTPUT); // making the light an output i think however there is an error of too few arguements to funtion
pinMode(BUTTON_PIN, INPUT);  // making the button an input on the board???


}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(BUTTON_PIN);

if (buttonState == HIGH) {
  digitalWrite(GREEN_LED_PIN, HIGH);
} else {
  digitalWrite(GREEN_LED_PIN, LOW);
}
}
