/*
 * KNOWN ISSUES:  I think I am still missing something in my loop but I am not able to rememeber or identify it.
 * 
 * Try adding something that prints to serail the random number that was generated so we can see what number it picked.
 * 
 * Still not quite right on your other placement of items. Remember everything runs in order from top to bottom.
 * That means that "IF" something is not true it will SKIP the whole section inside of the {}
 * You had the line that checks if the button is pressed inside the IF. so... IF the time was not counting down it would never check the btn
 *  Except 1x per second. by moving this outside of the if {} it can run on every loop.
 *  
 *  I added a ton of my own comments below for you to read through and follow along with to see if it makes more sense.
 */


#define WELCOME_SCREEN "Don't Believe in Harvey Dent" // Game Name
#define BUTTON_KILL A5 // this button gives up the game and makes you forfit 
#define playerUsername "Two Face" // Default Usernam feel free to change it


int countDown = 60; // you have 60 seconds to put in your username before you die. 
const long interval =1000;
unsigned long previousMillis = 0;
unsigned long startMillis;
unsigned long currentMillis;

long randNumber; 
int buttonState = 0;
bool gameOver = false;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(WELCOME_SCREEN);
  Serial.println(playerUsername);
  pinMode(BUTTON_KILL, INPUT); // tells arduino to end loop

}

void loop() {
  // put your main code here, to run repeatedly:
  currentMillis = millis(); // sets the variable for currentMillis = current time
  if (currentMillis - previousMillis >= interval) { // is the current time minus the previous time >= interval
    Serial.println(countDown); // if yes ^ this displays the current time left in serial.
    countDown--; // if yes ^^ this reduces your count down by 1
    previousMillis = currentMillis; // if it has been more than the interval (1 second) then set the new previous time = current time
    randNumber = random(0-1000); // gets a random number and you are looking to get a prime number
  }
  // anything beyond this point will run no matter what the time is or will be or wants to be in the future.
  // it will run no matter what because its not wrapped inside your if statement.
  // part of the issue is you didnt indent any of the above to make it clear what was included in the if vs outside of it.
  buttonState = digitalRead(BUTTON_KILL); // this sets the variable to high or low so we know if it is pressed or not.
  if (buttonState == HIGH) // then we check the value we just set for that varialbe to see if it equals high or pressed
      gameOver = true; // if ^ true then game over
}
/* the entire game is putting the username in in 60 seconds and then getting a prime number from the RNG
 *  
 */
