#include "BankingApp.h"

// Constructor initializes variables to zero
BankingApp::BankingApp() {
    initialInvestment = 0.0;
    monthlyDeposit = 0.0;
    annualInterestRate = 0.0;
    numYears = 0;
}

/*
    Function: getValidDouble
    Purpose: Ensures that the user inputs a valid positive double value.
*/
double getValidDouble(const string& prompt) {
    double value = 0.0;

    cout << prompt;
    cin >> value;

    while (cin.fail() || value < 0) {
        cout << "Invalid input! Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        cin >> value;
    }

    return value;
}

/*
    Function: getValidInt
    Purpose: Ensures that the user inputs a valid positive integer.
*/
int getValidInt(const string& prompt) {
    int value = 0;

    cout << prompt;
    cin >> value;

    while (cin.fail() || value <= 0) {
        cout << "Invalid input! Please enter a positive whole number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
        cin >> value;
    }

    return value;
}

// Gets user input for investment details
void BankingApp::getUserInput() {
    initialInvestment = getValidDouble("Enter Initial Investment Amount: $");
    monthlyDeposit = getValidDouble("Enter Monthly Deposit Amount: $");
    annualInterestRate = getValidDouble("Enter Annual Interest Rate (in %): ");
    numYears = getValidInt("Enter Number of Years: ");
}

// Displays the entered investment details
void BankingApp::displayInvestmentDetails() const {
    cout << "\nInvestment Details:" << endl;
    cout << "----------------------------------" << endl;
    cout << "Initial Investment: $" << fixed << setprecision(2) << initialInvestment << endl;
    cout << "Monthly Deposit: $" << fixed << setprecision(2) << monthlyDeposit << endl;
    cout << "Annual Interest Rate: " << fixed << setprecision(2) << annualInterestRate << "%" << endl;
    cout << "Investment Duration: " << numYears << " years" << endl;
    cout << "----------------------------------" << endl << endl;
}

// Calculates and displays yearly balances without monthly deposits
void BankingApp::calculateYearlyBalanceWithoutDeposits() const {
    double balance = initialInvestment; // The balance at the start of the year

    cout << "Yearly Balance Without Additional Monthly Deposits:" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Year   Year-End Balance   Earned Interest" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int year = 1; year <= numYears; year++) {
        double interestEarned = balance * (annualInterestRate / 100);
        balance += interestEarned;

        cout << setw(4) << year << "    $" << setw(10) << fixed << setprecision(2) << balance
            << "        $" << setw(10) << interestEarned << endl;
    }
    cout << "------------------------------------------------------" << endl << endl;
}

// Calculates and displays yearly balances with monthly deposits
void BankingApp::calculateYearlyBalanceWithDeposits() const {
    double balance = initialInvestment; // The balance at the start of the year

    cout << "Yearly Balance With Additional Monthly Deposits:" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Year   Year-End Balance   Earned Interest" << endl;
    cout << "------------------------------------------------------" << endl;

    for (int year = 1; year <= numYears; year++) {
        double yearlyInterest = 0.0; // Total interest earned in a year

        for (int month = 0; month < MONTHS_IN_YEAR; month++) {
            balance += monthlyDeposit;
            double monthlyInterest = balance * ((annualInterestRate / 100) / MONTHS_IN_YEAR);
            yearlyInterest += monthlyInterest;
            balance += monthlyInterest;
        }

        cout << setw(4) << year << "    $" << setw(10) << fixed << setprecision(2) << balance
            << "        $" << setw(10) << yearlyInterest << endl;
    }
    cout << "------------------------------------------------------" << endl << endl;
}
