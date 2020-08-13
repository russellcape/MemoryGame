/* Creation Crate Memory Game
 *  Match the pattern of the LEDs!
 *  Each time you get the patern right, it gets longer and faster.
 *  The game resets when you make a mistake.
 *  
 *  Step 1: Create Constant Variables
 *  Constant variables have static values. Once you set their values, you cant change them
 */

// These values are the pins on the UNO R3 (Arduino-compatible) that the buttons connect to.

const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;

// These vakues are the pins on the UNO R3 (Arduino-compatible) that the LEDs connect to.

const int led1 = 7; /*Yellow LED.*/
const int led2 = 8; /*Green LED.*/
const int led3 = 9; /*Red LED.*/
const int led4 = 10; /*Blue LED.*/

// This is the buzzer to UNO R3 (Arduino-compatible) connection.
const int buzzer = 12;

// These are the tones used for the buzzer using Hertz (Hz).
const int tones[] = {1900, 1600, 1300, 1000, 3200};

// Step 2: Create User Defined Variables

int buttonState[] = {0,0,0,0}; /*Current state of button.*/

int lastButtonState[] = {0,0,0,0}; /*Previous state of button.*/

int buttonCounter[] = {0,0,0,0}; /*These arrays hold 4 values that can either be 1 (button pressed) or 0 (button not pressed).*/

int gameOn = 0; /*A new game or level starts when game on is 0.*/

int wait = 0; /*This is used to tell the game to wait until the user inputs a pattern.*/

int currentLevel = 1; /*This is the current game level and the number of button presses to make it to the next level*/

int dlay = 500; /*This is the amount of time to wait for the next button press (0.5 seconds)*/

int ledTime = 500; /*This is the amount of time each LED will flash when the corresponding button is pressed (0.5 seconds)*/

int n_levels = 10; /*This is the number of levels until the game is won - at which point, the game will get faster.*/

int pinAndTone = 0; /*This variable will be used to determine which LED to turn and its corresponding buzzer tone.*/

int correct = 0; /*This value must become 1 to go to the next level.*/

int speedFactor = 5; /*This is the speed of the game. It increases every time a level is beaten.*/

int ledDelay = 200; /*This is the amount of time taken before the next LED in the pattern lights up (0.2 seconds). This will decrease every time a level is beaten.*/

// Step 3: Creat a function to play tones on the buzzer

void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2)
  {
    digitalWrite(buzzer, HIGH); /*Turns the buzzer on.*/
    delayMicroseconds(tone); /*Creates the tone of the buzzer.*/
    digitalWrite(buzzer, LOW); /*Turns the buzzer off.*/
    delayMicroseconds(tone);
  }
} /*End of void playTone().*/

// Step 4: Initialize the inputs and outputs
// Here, we're telling the UNO R3 (Arduino-compatible) that buttons are inputs and LEDs and the buzzer are outputs.

void setup() {
  randomSeed(analogRead(0)); /*Used to generate random numbers.*/

// Initialize Inputs.
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
  pinMode(button4, INPUT);

// Initialize Outputs.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(Buzzer, OUTPUT);
} /*End of void setup()*/

// Step 5: Create the game loop
// This is where the game starts!

void loop() {
  int n_array[n_levels]; /*n_array will store the randomized game pattern.*/
  int u_array[n_levels]: /*u_array will store the pattern input by the user.*/

  int i;
  if (gameOn == 0) { /*Only triggers if it's a new game or level.*/
    for(i = 0; i < n_levels; i = i + 1) {
    /*Saves the number in n_array to generate a random pattern.*/
      n_array[i] = 0;
      u_array[i] = 0;
      n_array[i] = random(0,4);
  }
  gameOn = 1; /*This tells the game to run!*/
}
