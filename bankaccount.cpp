#include "bankaccount.h"

BankAccount::BankAccount()
{
    this->accountNumber = uint32_t(0U);
    this->customerName = std::string("");
    this->money = uint64_t(0UL);
    this->stateVVIP = false;
    this->password = uint32_t(0U);
}
uint32_t BankAccount::getAccountNumber() const
{
    return this->accountNumber;
}

void BankAccount::setAccountNumber(uint32_t accountNumber)
{
    this->accountNumber = accountNumber;
}

std::string BankAccount::getCustomerName() const
{
    return this->customerName;
}

void BankAccount::setCustomerName(std::string customerName)
{
    this->customerName = customerName;

}

uint64_t BankAccount::getMoney() const
{
    return this->money;
}

void BankAccount::setMoney(uint64_t money)
{
    this->money = money;
}

bool BankAccount::getStateVVIP() const
{
    return this->stateVVIP;
}

void BankAccount::setStateVVIP(bool stateVVIP)
{
    this->stateVVIP = stateVVIP;
}

uint32_t BankAccount::getPassWord() const
{
    return this->password;
}

void BankAccount::setPassWord(uint32_t password)
{
    this->password = password;
}

void BankAccount::winthdraw()
{
    if (this->money < 0)
    {
        std::cout << "잔액이 부족합니다" << std::endl;
        return;
    }
    else
    {
        uint64_t balance{ 0UL };
        std::cout << "찾을 금액을 입력해주세요   _";
        std::cin >> balance;
        this->money -= balance;
    }
}

void BankAccount::deposit()
{
    uint64_t balance{ 0UL };
    std::cout << "입금할 금액을 입력해주세요   _";
    std::cin >> balance;
    this->money += balance;
}

void BankAccount::showBankAccount()
{
    std::cout << "고객이름:  " << this->customerName << std::endl;
    std::cout << "계좌번호:  " << this->accountNumber << std::endl;
    std::cout << "계좌잔금:  " << this->money << std::endl;
    if (this->stateVVIP) std::cout << this->customerName << "고객님께서는 저희 은행의 VVIP" << std::endl;
    else std::cout << this->customerName << "님 좋은 상품이 있습니다" << std::endl;
}
