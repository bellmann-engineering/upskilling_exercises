#include <iostream>

// Define constants for menu choices in order to not have magic numbers in the code, easier to read and to refactor
const int CHECK_BALANCE = 1;
const int WITHDRAW = 2;
const int DEPOSIT = 3;
const int REPAYMENT = 4;
const int EXIT = 5;

class BankAccount {
private:
    double balance;
    double credit_limit;
    double interest_rate;

public:
    // Constructor to initialize the balance, credit limit, and interest rate
    BankAccount(double initialBalance = 1000.00, double initialCreditLimit = 500.00, double initialInterestRate = 0.05) {
        balance = initialBalance;
        credit_limit = initialCreditLimit;
        interest_rate = initialInterestRate;
    }

    // Method to check the account balance
    void check_balance() {
        std::cout << "Current balance: " << balance << " €" << std::endl;
    }

    // Method to get the available credit limit
    double get_credit_limit() {
        return credit_limit;
    }

    // Method to make a withdrawal with credit
    void make_withdrawal_with_credit(double amount) {
        if (amount <= (balance + credit_limit)) {
            if (amount > balance) {
                // Calculate interest on the negative balance
                double interest = (amount - balance) * interest_rate;
                balance = 0;
                credit_limit -= (amount - interest);
                std::cout << "Withdrawal of " << amount << " € (including interest) successful." << std::endl;
            } else {
                balance -= amount;
                std::cout << "Withdrawal of " << amount << " € successful." << std::endl;
            }
        } else {
            std::cout << "Invalid withdrawal amount or exceeding credit limit." << std::endl;
        }
    }

    // Method to make a deposit
    void make_deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit of " << amount << " € successful." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Method to make a repayment to reduce the negative balance
    void make_repayment(double amount) {
        if (amount > 0 && amount <= credit_limit) {
            balance += amount;
            credit_limit -= amount;
            std::cout << "Repayment of " << amount << " € successful." << std::endl;
        } else {
            std::cout << "Invalid repayment amount." << std::endl;
        }
    }
};

int main() {
    BankAccount account;

    while (true) {
        int choice;
        double amount;

        std::cout << "Bank Account Menu:" << std::endl;
        std::cout << CHECK_BALANCE << ". Check account balance" << std::endl;
        std::cout << WITHDRAW << ". Make a withdrawal (including credit line)" << std::endl;
        std::cout << DEPOSIT << ". Make a deposit" << std::endl;
        std::cout << REPAYMENT << ". Make a repayment" << std::endl;
        std::cout << EXIT << ". Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case CHECK_BALANCE:
                account.check_balance();
                break;
            case WITHDRAW:
                std::cout << "Enter withdrawal amount: ";
                std::cin >> amount;
                account.make_withdrawal_with_credit(amount);
                break;
            case DEPOSIT:
                std::cout << "Enter deposit amount: ";
                std::cin >> amount;
                account.make_deposit(amount);
                break;
            case REPAYMENT:
                std::cout << "Enter repayment amount: ";
                std::cin >> amount;
                account.make_repayment(amount);
                break;
            case EXIT:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
