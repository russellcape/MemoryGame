# MemoryGame

Project: MemoryGame

This is a game where the user must match the pattern of the LEDs to level up. 
The pattern gets longer each time the user gets it correct. 
Get it right 10 times, and the games levels up with faster patterns!

## Step 1: Installation

1. Download or fork the MemoryGame Folder
2. Edit MemoryGame.ino to your preferences
3. Release to the World!

## Step 2: Assemble the circuit

Assemble the circuit following the diagram wireDiagram.png attached to the sketch

![Wire diagram](/images/wireDiagram.png)
![Circuit overview](/images/circuit00.jpg)

## Step 3: Load the code

Upload the code contained in this sketch on to your board using Arduino IDE

## Finished Game

![Circuit side view](/images/circuit01.jpg)
![Circuit front view](/images/circuit02.jpg)

### Folder structure

```
 MemoryGamme                    => Arduino sketch folder
  ├── images                    => Folder to store images
  |     ├── wireDiagram.png     => an image of the diagram
  |     ├── circuit00.jpg       => an image of the layout from an top view
  |     ├── circuit01.jpg       => an image of the finished product from the side
  |     └── circuit02.jpg       => an image of the finished product from infront
  ├── MemoryGame.ino            => main Arduino file
  └── ReadMe.md                 => this file
```

### License

This project is a Creation Crate project

### BOM (Bill Of Materials)

```
| #  | Part name      | Quantity    | Additional Info
| 1  | Red LED        | 1           |
| 2  | Green LED      | 1           |
| 3  | Blue LED       | 1           |
| 4  | Button         | 4           |
| 5  | Button Cap     | 4           |
| 6  | Piezo Buzzer   | 1           |
| 7  | 2W Resistor    | 5           | (2W, 220 Ohm)
| 8  | 1/4W Resistor  | 4           | (1/4W, 220 Ohm)
| 9  | Breadboard     | 1           |
| 10 | UNO R3         | 1           | (Arduino Compatible)
| 11 | USB Data Cable | 1           |
| 12 | Jumper Wires   | 16 + 4      | (Male-Male + 4 extra wires)
```

#### Extra Exercises

1. Try to change the starting speed of the game. Find the variable that controls it and double it!
2. Change the tones of the buzzer. Create low pitch tones and high pitch tones.
3. Make the LEDs and buzzer blink 3 times when the user loses the game.
4. Use the extra 002 (2W) resistor to lower the volume of the piezo buzzer.


##### Completed by Russell Cape