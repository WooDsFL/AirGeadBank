#include <iostream>
#include "Investment.h" // Include the Investment class

int main() {
    double initialInvestment, monthlyDeposit, annualInterestRate;
    int numYears;
    char recalculate = 'y'; // user option to run the program again

    while (recalculate == 'y' || recalculate == 'Y') {
        // Display user prompt for input
        std::cout << "==============================================\n";
        std::cout << " Welcome to the Airgead Banking Calculator\n";
        std::cout << "==============================================\n";
        std::cout << "Enter Initial Investment Amount: $";
        std::cin >> initialInvestment;
        std::cout << "Enter Monthly Deposit: $";
        std::cin >> monthlyDeposit;
        std::cout << "Enter Annual Interest (%): ";
        std::cin >> annualInterestRate;
        std::cout << "Enter Number of Years: ";
        std::cin >> numYears;

        // Create Investment object using user inputs
        Investment invest(initialInvestment, monthlyDeposit, annualInterestRate, numYears);

        // Pause before showing report
        std::cout << "\nPress Enter to continue...";
        std::cin.ignore(); // clear newline character
        std::cin.get();    // wait for user to press Enter

        // Show investment reports
        invest.calculateWithoutMonthlyDeposit();
        invest.calculateWithMonthlyDeposit();

        // Ask if user wants to try again with different inputs
        std::cout << "\nWould you like to recalculate? (y/n): ";
        std::cin >> recalculate;
    }

    // Exit message
    std::cout << "\nThank you for using Airgead Banking Calculator!\n";
    return 0;
}
