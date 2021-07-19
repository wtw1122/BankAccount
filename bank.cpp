#include <iostream>
#include "bankaccount.h"

int main()
{   
    uint32_t customer{ 0U };
    std::cout << "저장할 데이터 고객의 숫자를 입력하시오 >  ";
    std::cin >> customer;
    BankAccount* customers{ new BankAccount[customer] };
    uint32_t index{ 0U };

    for (;;)
    {
        while (index < customer)
        {   

            std::cout << "계좌번호를 입력하시오 _  ";
            uint32_t account_Number;
            std::cin >> account_Number;
            customers[index].setAccountNumber(account_Number);
            
            std::cout << "고객이름을 입력하시오 _  ";
            std::string customer_name{ "" };
            std::cin >> customer_name;
            customers[index].setCustomerName(customer_name);

            std::cout << "비밀번호릏 입력하시오 _  ";
            uint32_t customer_password{ 0U };
            std::cin >> customer_password;
            customers[index].setPassWord(customer_password);

            std::cout << "초기금액을 입력하시오 _  ";
            uint64_t initial_money{ 0UL }; //고객이름
            std::cin >> initial_money;
            customers[index].setMoney(initial_money);

            std::cout << "VVIP 회원인가요? [1: VVIP , 0:SILVER]  ";
            bool isVVIP{ false };
            std::cin >> isVVIP;
            customers[index].setStateVVIP(isVVIP);

            ++index;
        }
        std::cout << "1.입금  2.출금  3.통장정리  4.종료 " << std::endl;
        uint32_t selection_menu{ 0U };
        std::cin >> selection_menu;
        uint32_t account_Number{ 0U };
        uint32_t account_PW{ 0U };
        switch (selection_menu)
        {
        case 1:
            std::cout << "입금할 계좌번호를 입력하시오 _  ";
            std::cin >> account_Number;
           
            for (int i = 0; i < customer; i++)
            {
                if (customers[i].getAccountNumber() == account_Number)
                {
                    customers[i].deposit();
                    customers[i].showBankAccount();
               
                }
            }
            break;

        case 2:
            std::cout << "출금할 계좌번호를 입력하시오 _  ";
            std::cin >> account_Number;
            for (int i = 0; i < customer; i++)
            {
                if (customers[i].getAccountNumber() == account_Number)
                {
                    std::cout << "비밀번호를 입력하세요 _  ";
                    std::cin >> account_PW;

                    if (customers[i].getPassWord() == account_PW)
                    {
                        customers[i].winthdraw();
                        customers[i].showBankAccount();
                        customers[i].getPassWord();
                    }
                }
            }
            
            break;

        case 3:
            std::cout << "통장 정리할 계좌번호를 입력하시오 _  ";
            std::cin >> account_Number;
            for (int i = 0; i < customer; i++)
            {
                if (customers[i].getAccountNumber() == account_Number)
                {
                    customers[i].showBankAccount();
                }
            }
            break;

        case 4:
            goto EXIT;
            break;

        default:
        std::cout << "잘못 입력하셨습니다" << std::endl;
        }
    }
    EXIT:
    delete[] customers;
}

