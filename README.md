# Special_Lights

Special Lights is an Arduino project that functions as a simple calculator, performing addition and multiplication based on user input. This project also includes an LED that blinks to indicate that the program is running.

## Features

- Choose between addition or multiplication.
- Input two integers and receive the result.
- Visual feedback via an LED that blinks every second.

## Requirements

- Arduino board (e.g., Arduino Uno)
- VS Code with the Arduino extension

## Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/special-lights.git
   cd special-lights

2. **Open the project in VS Code:**

Open the special_lights.ino file in VS Code.

3. **Upload the code:**
Ensure you have the Arduino extension installed.
Select your board type and port from the VS Code Arduino interface.
Click on the upload button.

4. **Usage**
Open the Serial Monitor (Ctrl + Shift + M).
Set the baud rate to 9600.
Input 1 for addition or 2 for multiplication.
Enter the first number.
Enter the second number.
The result will be displayed in the Serial Monitor.

**EXAMPLE**
Do you want addition (1) or multiplication (2)? Input the number (1 or 2):
1
Number 1:
5
Number 2:
10
Result: 15

**Code Overview**
The program defines two functions: Addition(int x, int y) and Multiplication(int x, int y).
It initializes the built-in LED to blink while waiting for user input.

**Contributors**
1. Kamyab rayganshirazinejad
2. Mark Neszmelyi
3. 

**link**
https://github.com/neszm/Special-Lights.git
