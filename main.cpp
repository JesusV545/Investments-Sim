/*
    Author: Jesus Vazquez
    Assignment: Airgead Banking Investment Calculator
    Purpose: This program allows the user to simulate investment growth with
             and without monthly deposits over a set number of years.
*/

#include "BankingApp.h"

int main() {
    char userChoice = 'y'; // Stores user's choice to rerun the simulation

    do {
        BankingApp app;

        app.getUserInput();
        app.displayInvestmentDetails();

        // Display investment growth reports
        app.calculateYearlyBalanceWithoutDeposits();
        app.calculateYearlyBalanceWithDeposits();

        // Ask user if they want to run another simulation
        cout << "Would you like to run another investment simulation? (Y/N): ";
        cin >> userChoice;
        userChoice = tolower(userChoice); // Convert to lowercase for consistency

    } while (userChoice == 'y');

    cout << "Thank you for using the Airgead Banking Investment Calculator!" << endl;
    return 0;
}
