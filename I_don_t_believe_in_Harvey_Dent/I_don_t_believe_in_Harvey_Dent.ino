/*
 * KNOWN ISSUES:  I think I am still missing something in my loop but I am not able to rememeber or identify it.
 * 
 */

#define WELCOME_SCREEN "Don't Believe in Harvey Dent" // Game Name
#define BUTTON_KILL A5 // this button gives up the game and makes you forfit 
#define PLAYER_USERNAME "Two Face" // Default Usernam feel free to change it

int countDown = 60; // you have 60 seconds to put in your username before you die. 
const long interval =1000;
unsigned long previousMillis = 0;
unsigned long startMillis;
unsigned long currentMillis;

int randNumber; 
int correctNumber;
int buttonState = 0;
bool gameOver = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  randomSeed(analogRead(0));
  correctNumber = random(0,100);
  Serial.println(WELCOME_SCREEN);
  Serial.println(PLAYER_USERNAME);
  Serial.println("Correct Number: ");
  Serial.println(correctNumber);
  pinMode(BUTTON_KILL, INPUT); // tells arduino to end loop
}

void loop() {
  // put your main code here, to run repeatedly:
  if (correctNumber==randNumber) {
    Serial.println("YOU WIN!");
    gameOver = true;
  } else if (countDown>0) {
    currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      Serial.println(countDown); // I thnk this will count down to 
      countDown--; // ideally this counts down 
      previousMillis = currentMillis;
      randNumber = random(0-100); // gets a random number and you are looking to get a prime number
      Serial.println(randNumber);
    } 
  } else {
    Serial.println("UNLUCKY BITCH");
    gameOver = true;
  }
  buttonState = digitalRead(BUTTON_KILL); // this tells the CPU to check if button is pressed
  if (buttonState == HIGH) {
    Serial.println("YOU WEAK PILE");
    gameOver = true;
  }
}
/* the entire game is putting the username in in 60 seconds and then getting a prime number from the RNG
 *  
 */
