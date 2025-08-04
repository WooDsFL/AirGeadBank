# Airgead Banking Investment Calculator

This C++ console application calculates investment growth over time using compound interest. It allows users to view how their investment performs both with and without monthly deposits. The application was created to demonstrate basic object-oriented programming principles and good coding practices.

## Features

- Accepts user input for:
  - Initial investment amount
  - Monthly deposit
  - Annual interest rate
  - Number of years
- Generates two reports:
  1. Without monthly deposits
  2. With monthly deposits
- Allows recalculating with different input values
- Follows OOP design principles and clean code standards

## Project Structure

```
AirgeadBanking/
├── Investment.h       // Class declaration
├── Investment.cpp     // Class implementation
├── main.cpp           // Program entry point
├── README.md          // Project documentation
```

## How to Run the Program

### Using Visual Studio

1. Open Visual Studio.
2. Create a new Console App project.
3. Add the three files (main.cpp, Investment.cpp, Investment.h) to the project.
4. Build the solution (Ctrl + Shift + B).
5. Run the program (Ctrl + F5).

## Programming Concepts Used

- Object-oriented programming
- Compound interest calculations
- Loops and user input
- Encapsulation and modular design
- Clean and maintainable code with inline comments

## Example Output

```
==============================================
 Welcome to the Airgead Banking Calculator
==============================================
Enter Initial Investment Amount: $1000
Enter Monthly Deposit: $50
Enter Annual Interest (%): 5
Enter Number of Years: 3

Press Enter to continue...

   Balance and Interest Without Additional Monthly Deposits
===========================================================
Year    Year End Balance    Year End Earned Interest
-----------------------------------------------------------
1       $1050.00            $50.00
2       $1102.50            $52.50
3       $1157.63            $55.13
```

## License

This project is provided for educational purposes and may be reused or modified for academic use.

## Author

Created by Austin for CS-210 at Southern New Hampshire University.
