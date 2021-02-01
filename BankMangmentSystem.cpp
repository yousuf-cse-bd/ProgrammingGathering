/****
 * @Author: Muhammad Yousuf Ali
 * @Since: Sunday, 12 July 2020
 * ***Bank Management System**** 
 */

#include <iostream>
using namespace std;

class BankManagement
{
    private:
    char name[20];
    int accountNumber;
    double balance, tmp;

    public:
    BankManagement()
    {
        cout<<"******************** WELCOME ********************"<<endl;
    }
    void open(void);
    void deposite(int);
    void withdro(void);
    void searchs(void);
    void display(void);

    ~BankManagement()
    {
        cout<<"\n******************** TANKS **********************"<<endl;
    }
    
};

void BankManagement :: open(void)
{
    cout<<"Enter Your Name Here: ";
    cin>>name;
    cout<<"Enter Account Number Here: ";
    cin>>accountNumber;
    cout<<"Enter The Ammount of Money Here: ";
    cin>>balance;
}

void BankManagement :: deposite(int j)
{
    int tmp;
    if(accountNumber == j)
    {
        cout<<"Enter The Ammount of Money: ";
        cin>>tmp;
        balance = balance + tmp;
        cout<<"\n\n\tJob Has Done Well..."<<endl;
    }
}

int main(void)
{
    BankManagement bankManagement = BankManagement();

    bankManagement.open();
    bankManagement.deposite(333);
    return 0;
}