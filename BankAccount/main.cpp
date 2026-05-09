#include <iostream>
#include "BankAccount.h"

int main() {
    BankAccount myAccount("UA1234567890", "Тарас Шевченко", 1500.50);

    std::cout << "Власник рахунку: " << myAccount.getAccountNumber() << "\n";
    std::cout << "Початковий баланс: " << myAccount.getBalance() << " грн.\n\n";

    myAccount.deposit(500.0);
    myAccount.deposit(-100.0);

    myAccount.withdraw(200.0);
    myAccount.withdraw(5000.0);

    std::cout << "\nФінальний баланс: " << myAccount.getBalance() << " грн.\n";

    return 0;
}