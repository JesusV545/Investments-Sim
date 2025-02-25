/*
    Author: Jesus Vazquez
    Assignment: Airgead Banking Investment Calculator
    Purpose: This program calculates and displays the growth of an investment
             over a specified number of years with and without monthly deposits.
*/

#ifndef AIRGEAD_BANKING_APP_H_
#define AIRGEAD_BANKING_APP_H_

#include <iostream>
#include <iomanip>
#include <limits>  // For input validation

using namespace std;

class BankingApp {
private:
    double initialInvestment; // The initial amount of money invested
    double monthlyDeposit;    // The monthly contribution to the investment
    double annualInterestRate; // The annual interest rate in percentage
    int numYears;             // The number of years the investment will grow

    static const int MONTHS_IN_YEAR = 12; // Constant for months in a year

public:
    // Constructor
    BankingApp();

    // Gets user input with validation
    void getUserInput();

    // Displays investment details entered by the user
    void displayInvestmentDetails() const;

    // Calculates and displays yearly balances without additional monthly deposits
    void calculateYearlyBalanceWithoutDeposits() const;

    // Calculates and displays yearly balances with additional monthly deposits
    void calculateYearlyBalanceWithDeposits() const;
};

#endif // AIRGEAD_BANKING_APP_H_
