#ifndef AIRGEAD_BANKING_INVESTMENT_H_
#define AIRGEAD_BANKING_INVESTMENT_H_

// Declaration of the Investment class
class Investment {
private:
    // Member variables for investment details
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterestRate;
    int m_numYears;

public:
    // Constructor to initialize values
    Investment(double initial, double monthly, double interest, int years);

    // Calculates and displays results without monthly deposits
    void calculateWithoutMonthlyDeposit();

    // Calculates and displays results with monthly deposits
    void calculateWithMonthlyDeposit();
};

#endif // AIRGEAD_BANKING_INVESTMENT_H_
