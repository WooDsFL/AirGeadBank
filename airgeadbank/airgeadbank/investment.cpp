#include <iostream>
#include <iomanip> // for std::setprecision
#include "Investment.h"

// Constructor initializes the object with user inputs
Investment::Investment(double initial, double monthly, double interest, int years) {
    m_initialInvestment = initial;
    m_monthlyDeposit = monthly;
    m_annualInterestRate = interest;
    m_numYears = years;
}

// Calculate compound interest without monthly deposits
void Investment::calculateWithoutMonthlyDeposit() {
    double yearEndBalance = m_initialInvestment;

    // Display report header
    std::cout << "\n   Balance and Interest Without Additional Monthly Deposits\n";
    std::cout << "===========================================================\n";
    std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    std::cout << "-----------------------------------------------------------\n";

    // Loop through each year
    for (int year = 1; year <= m_numYears; ++year) {
        // Annual interest = balance * rate
        double interest = yearEndBalance * (m_annualInterestRate / 100);

        // Update balance with interest
        yearEndBalance += interest;

        // Print results
        std::cout << std::fixed << std::setprecision(2);
        std::cout << year << "\t$" << yearEndBalance << "\t\t$" << interest << "\n";
    }
}

// Calculate compound interest with monthly deposits
void Investment::calculateWithMonthlyDeposit() {
    double currentBalance = m_initialInvestment;

    // Display report header
    std::cout << "\n   Balance and Interest With Additional Monthly Deposits\n";
    std::cout << "========================================================\n";
    std::cout << "Year\tYear End Balance\tYear End Earned Interest\n";
    std::cout << "--------------------------------------------------------\n";

    // Loop through each year
    for (int year = 1; year <= m_numYears; ++year) {
        double yearlyInterest = 0.0;

        // Loop through each month in the year
        for (int month = 1; month <= 12; ++month) {
            // Add monthly deposit to balance
            currentBalance += m_monthlyDeposit;

            // Calculate monthly interest
            double interest = currentBalance * ((m_annualInterestRate / 100) / 12);

            // Add interest to totals
            yearlyInterest += interest;
            currentBalance += interest;
        }

        // Print results
        std::cout << std::fixed << std::setprecision(2);
        std::cout << year << "\t$" << currentBalance << "\t\t$" << yearlyInterest << "\n";
    }
}
