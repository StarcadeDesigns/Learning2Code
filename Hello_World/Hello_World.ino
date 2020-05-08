#define START_TEXT "SYN Snugglez" // this is the start up text to appear 
#define PLAYER_USERNAME "Spongebob" // for the player to use to put in a username

/*
 *  Constant name = #define UPPER_CASE
 *  Variable name = (int,char,bool,unsigned long) chadIsDope 
 *  Function = myNameIsMatthew ()
 * ; is needed after all variables
 * You don't have to give a varibale a value but its reccomnended 
 * "" is needed for strings of text
 * '' for single letter 
 * numbers dont need ticks
 * 
 */

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(START_TEXT);
Serial.println(PLAYER_USERNAME);
/*
 * have () agaisnts the funtion/whatever
 */
}

void loop() {
  // put your main code here, to run repeatedly:

}
