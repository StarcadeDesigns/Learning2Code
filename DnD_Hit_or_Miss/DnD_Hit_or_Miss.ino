/*
 * KNOWN ISSUES:
 * RANDOM # IS GENERAGED AROUND 5 TIMES INSTEAD OF ONCE BECAUSE OF WHEN WE TELL IT TO RUN. 
 *  CAN FIX BY ONLY LOOKING FOR A CHANGE IN BUTTON INSTEAD OF CURRENT VALUE OF BUTTON
 * 
 * ADD ENEMY & ENEMY ROLL
 * 
 * CHECK IF PLAYER ROLL >= ENEMY ROLL
 */

#define PLAYER_NAME "Sir Maplebottom"
#define ROLL_BUTTON 3 // Button will start the RNG 

long d20Roll;
int buttonState = 0;
int incomingByte = 0;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  Serial.println(PLAYER_NAME);
  pinMode(ROLL_BUTTON, INPUT); // tells ardunio that the button is an input
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(ROLL_BUTTON); // The RNG shouldn't happen if button isn't pressed
 // Serial.print(buttonState);
 if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
  if (buttonState == HIGH) {
    d20Roll = random(1,21);
    Serial.print(d20Roll);
  }
}
