#define PLAYER_NAME "Sir Maplebottom"
#define ROLL_BUTTON A5 // Button will start the RNG 

long d20Roll;
int buttonState = 0;
bool stopRng = true;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println(PLAYER_NAME);
  d20Roll = random(0-21);
  Serial.print(d20Roll);
  pinMode(ROLL_BUTTON, INPUT); // tells ardunio that the button is an input
}

void loop() {
  // put your main code here, to run repeatedly:
 buttonState = digitalRead(ROLL_BUTTON); // The RNG shouldn't happen if button isn't pressed
if (buttonState == LOW)
    stopRng = false;  
  
  d20Roll = random(0,21);
  Serial.print(d20Roll);
}
