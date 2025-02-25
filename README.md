# Investments-Sim

## Overview
The **Investments Sim** is a C++ program that simulates the growth of an investment over a specified number of years. It calculates the final balance with and without monthly deposits, taking into account compound interest. The program is designed for users to input their investment details, validate inputs, and receive structured reports on their investment growth over time.

## Features
- **User Input Validation:** Ensures users enter valid numerical values.
- **Investment Growth Calculation:** Calculates balances with and without monthly deposits.
- **Compound Interest Computation:** Accounts for interest accrued over time.
- **Formatted Output Reports:** Displays investment details and yearly growth in a structured format.
- **Loop for Multiple Simulations:** Users can run multiple investment scenarios.

## Files and Their Purpose
### `main.cpp`
- Serves as the entry point of the program.
- Handles user interaction by creating an instance of `BankingApp`.
- Calls methods for input, calculations, and displaying results.
- Uses a loop to allow users to run multiple simulations.

### `BankingApp.h`
- Contains the class definition for `BankingApp`.
- Defines member variables for storing investment data.
- Declares methods for handling input, calculations, and output.
- Uses a `static const` variable for defining the number of months in a year.

### `BankingApp.cpp`
- Implements the `BankingApp` class methods.
- Provides functions for:
  - Input validation (`getValidDouble` and `getValidInt`).
  - Displaying investment details.
  - Computing yearly balances with and without additional deposits.
- Utilizes **loops**, **conditional statements**, and **mathematical calculations** to perform investment analysis.

## Concepts Used
### **Fundamental Concepts**
1. **Variables & Data Types:**
   - `double` for monetary values (e.g., `initialInvestment`, `monthlyDeposit`).
   - `int` for the number of years.
2. **Input/Output Handling:**
   - `cin` and `cout` for user input and formatted output.
   - `iomanip` for precise output formatting (e.g., `setprecision`).
3. **Conditional Statements:**
   - `while` loops for input validation.
   - `if` statements to ensure correct user input.
4. **Functions:**
   - Helper functions for input validation.
   - Methods to separate concerns in the `BankingApp` class.

### **Intermediate Concepts**
5. **Object-Oriented Programming (OOP):**
   - **Encapsulation:** `BankingApp` class stores investment details and operations.
   - **Abstraction:** Public methods provide a clean interface for calculations.
6. **Loops and Iteration:**
   - `for` loops to simulate monthly and yearly growth.
   - `do-while` loop for user input repetition.
7. **Constants:**
   - `static const int MONTHS_IN_YEAR = 12;` to avoid magic numbers.

### **Advanced Concepts**
8. **Dynamic Memory Management (Avoiding Input Failures):**
   - `cin.clear();` and `cin.ignore();` prevent infinite loops on invalid input.
9. **Compound Interest Calculation:**
   - Uses the formula: `A = P(1 + r/n)^(nt)`, adapted for monthly deposits.
10. **Formatted Output Using Streams:**
    - `setw()` ensures column alignment for readability.
11. **Code Reusability & Maintainability:**
    - Separation of concerns between input handling, calculations, and output.
    - Encapsulated logic inside the `BankingApp` class.

## How to Compile and Run
Ensure you have a C++ compiler (e.g., `g++` for GCC). Use the following commands:
```sh
 g++ main.cpp BankingApp.cpp -o BankingApp
 ./BankingApp
```

## Author
**Jesus Vazquez**
