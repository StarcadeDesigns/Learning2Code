#define PLAYER_NAME "Sir Maplebottom"
#define ROLL_BUTTON A5 // Button will start the RNG 

long d20Roll;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println(PLAYER_NAME);
  pinMode(ROLL_BUTTON, INPUT); // tells ardunio that the button is an input
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(ROLL_BUTTON); // The RNG shouldn't happen if button isn't pressed
  Serial.print(buttonState);
  if (buttonState == HIGH) {
    d20Roll = random(1,21);
    //Serial.print(d20Roll);
  }
}
