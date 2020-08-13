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
