#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(std::string accNum, std::string name, double initialDeposit)
    : accountNumber(accNum), ownerName(name) { // Використання списку ініціалізації

    if (initialDeposit > 0) {
        balance = initialDeposit;
    } else {
        balance = 0.0;
    }
}

double BankAccount::getBalance() const {
    return balance;
}

std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "Рахунок поповнено на: " << amount << " грн.\n";
    } else {
        std::cout << "Помилка: Сума поповнення має бути більшою за нуль.\n";
    }
}
bool BankAccount::withdraw(double amount) {
    if (amount <= 0) {
        std::cout << "Помилка: Сума зняття має бути більшою за нуль.\n";
        return false;
    }

    if (amount > balance) {
        std::cout << "Помилка: Недостатньо коштів на рахунку.\n";
        return false;
    }

    balance -= amount;
    std::cout << "Знято: " << amount << " грн. Залишок: " << balance << " грн.\n";
    return true;
}