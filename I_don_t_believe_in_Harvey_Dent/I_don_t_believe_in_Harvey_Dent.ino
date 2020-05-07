/*
 * KNOWN ISSUES:  I think I am still missing something in my loop but I am not able to rememeber or identify it.
 * 
 * This line should be inside your if statement. You only want it to count down IF it has been a full 1 second since last checked. 
 *  The way you have it now would countdown almost instantly and then only every 1 second perform all other actions
 *    countDown--; // ideally this counts down 
 * The other thing that is close but still off is that your button press is inside of your time IF loop. You want the button to happen any time its pressed not only when its been a full second.
 *  Just as a learning opporutnity dont be afraid to separate things that are unrelated.
 *    Create a function for the button press that is separate from your loop. Then ONLY when you want to check for button presses call that function. (EVEN IF YOU WANT IT TO CHECK ALL THE TIME)!
 *    
 * Try those few updates and reupload.
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
  Serial.println(countDown); // I thnk this will count down to 
  countDown--; // ideally this counts down 
  if (currentMillis - previousMillis >= interval) {
  previousMillis = currentMillis;
  randNumber = random(0-1000); // gets a random number and you are looking to get a prime number
  buttonState = digitalRead(BUTTON_KILL); // this tells the CPU to check if button is pressed
  }
   { if (buttonState == HIGH) 
      gameOver = true;
 
}
}
/* the entire game is putting the username in in 60 seconds and then getting a prime number from the RNG
 *  
 */
