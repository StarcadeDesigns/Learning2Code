/*
 * KNOWN ISSUES
 * 
 */

#define PURPLE_LED_PIN 13 // The LED is Purple it will go on and off with a delay of .5 seconds
<<<<<<< HEAD
#define LED_DELAY 500
=======
#define LED_DELAY 500 // .5 second delay
>>>>>>> de109d77152f75ceaae6cb3627bfc06b32b21741

void setup() {
  // put your setup code here, to run once:
pinMode (PURPLE_LED_PIN, OUTPUT); // set the LED as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(PURPLE_LED_PIN,HIGH); // on
<<<<<<< HEAD
delay(LED_DELAY);
digitalWrite(PURPLE_LED_PIN,LOW); // off
delay(LED_DELAY);
=======
delay(LED_DELAY); 
digitalWrite(PURPLE_LED_PIN,LOW); // off
delay(LED_DELAY); 
>>>>>>> de109d77152f75ceaae6cb3627bfc06b32b21741
/* assuming I did this correctly this will repated for all eternity
 *  I mostly ran this code so that I could check to see an error in a differnent code but this one runs fine whcih makes the other code that much more confusing
 */
}
