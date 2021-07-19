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
        std::cout << "�ܾ��� �����մϴ�" << std::endl;
        return;
    }
    else
    {
        uint64_t balance{ 0UL };
        std::cout << "ã�� �ݾ��� �Է����ּ���   _";
        std::cin >> balance;
        this->money -= balance;
    }
}

void BankAccount::deposit()
{
    uint64_t balance{ 0UL };
    std::cout << "�Ա��� �ݾ��� �Է����ּ���   _";
    std::cin >> balance;
    this->money += balance;
}

void BankAccount::showBankAccount()
{
    std::cout << "���̸�:  " << this->customerName << std::endl;
    std::cout << "���¹�ȣ:  " << this->accountNumber << std::endl;
    std::cout << "�����ܱ�:  " << this->money << std::endl;
    if (this->stateVVIP) std::cout << this->customerName << "���Բ����� ���� ������ VVIP" << std::endl;
    else std::cout << this->customerName << "�� ���� ��ǰ�� �ֽ��ϴ�" << std::endl;
}
