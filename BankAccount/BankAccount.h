#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string ownerName;
    double balance;

public:
    BankAccount(std::string accNum, std::string name, double initialDeposit);

    double getBalance() const;
    std::string getAccountNumber() const;

    void deposit(double amount);
    bool withdraw(double amount);
};

#endif