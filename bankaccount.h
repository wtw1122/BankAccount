#pragma once
#include <iostream>
class BankAccount
{

private:
    uint32_t accountNumber;
    std::string customerName;
    uint64_t money;
    bool stateVVIP;
    uint32_t password;

public:
    BankAccount();
    uint32_t getAccountNumber() const;
    void setAccountNumber(uint32_t accountNumber);
    std::string getCustomerName() const;
    void setCustomerName(std::string customerName);
    uint64_t getMoney() const;
    void setMoney(uint64_t money);
    bool getStateVVIP() const;
    void setStateVVIP(bool stateVVIP);
    uint32_t getPassWord() const;
    void setPassWord(uint32_t password);
    void winthdraw();
    void deposit();
    void showBankAccount();
};

