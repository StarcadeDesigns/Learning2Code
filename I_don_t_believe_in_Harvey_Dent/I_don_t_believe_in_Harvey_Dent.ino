#define WELCOME_SCREEN "Don't Believe in Harvey Dent" // Game Name
char playerUsername = "Two Face"; // Default Usernam feel free to change it
int countDown = 60; // you have 60 seconds to put in your username before you die. 
long randNumber; 
#define BUTTON_KILL A5 // this button gives up the game and makes you forfit 
int buttonState = 0;

/*
 * need:
 * bool
 * delayTime
 * 
 */


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(WELCOME_SCREEN);
Serial.println(playerUsername);
pinMode(BUTTON_KILL, INPUT); // tells arduino to end loop

}

void loop() {
  // put your main code here, to run repeatedly:
countDown--; // ideally this counts down 
Serial.println(countDown); // I thnk this will count down to 0 
delay(1000); // goes down by 1 second
randNumber = random(0-1000); // gets a random number and you are looking to get a prime number
buttonState = digitalRead(BUTTON_KILL); // this tells the CPU to check if button is pressed

if (buttonState == HIGH) {
  digitalWrite(BUTTON_KILL, HIGH); // if button is pressed the output should be high meaning the player has forfited 
  } else {
  digitalWrite(BUTTON_KILL, LOW); // if the button is not pressed the ouput should be low meaning the player hasn't forfited 
}
}


/* the entire game is putting the username in in 60 seconds and then getting a prime number from the RNG
 *  
 */
