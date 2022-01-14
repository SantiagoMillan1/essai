#include <iostream>
// #include <math.h>
using namespace std;

bool checknip(int nip);
void show_menu();
void check_balance(int balance);
int deposit(int balance);
int withdraw(int balance);

int main()
{
    system("cls");
    int nip;
    cout << "**** ATM App ****" << endl;
    cout << "Enter your nip : ";
    cin >> nip;
    for (int i = 1; i <= 3; i++)
    {
        if (checknip(nip))
        {
            system("cls");
            show_menu();
            return 0;
        }
        else
            cout << "Your nip is not right, try again!" << endl;
        if (i == 3)
        {
            cout << "You have try your nip more than 3 times. Your account is blocked." << endl;
            return 0;
        }
        cout << "Enter your nip : ";
        cin >> nip;
    }

    // system("pause>0");
}

bool checknip(int nip)
{
    int usernip = 1234;
    if (usernip == nip)
        return true;
    else
        return false;
}

void show_menu()
{
    cout << " **** Menu **** " << endl;
    cout << "1: Deposit \n2: WIthdraw\n3: Check balance\n4: Quit\nChoose your option :";
    int option;
    cin >> option;
    bool go = true;
    int balance = 10000;

    while (go)
    {
        switch (option)
        {

        case 4:
            return;

        default:
            cout << "This is not a valid option. Please choose an option of 1 to 4";
        }
        cout << " **** Menu **** " << endl;
        cout << "1: Deposit \n2: WIthdraw\n3: Check balance\n4: Quit\nChoose your option : ";
        cin >> option;
    }
}

void check_balance(int balance)
{
    cout << "Your balance is : " << balance << "\nPress any keyboard key to return to menu ";
    system("pause>0");
    system("cls");
}

int deposit(int balance)
{
    int deposit_money;
    cout << "How much do you want to deposit? : ";
    cin >> deposit_money;
    balance += deposit_money;
    check_balance(balance);
    return balance;
}

int withdraw(int balance)
{
    int withdraw_money;
    cout << "How much do you want to withdraw? : ";
    cin >> withdraw_money;
    balance -= withdraw_money;
    check_balance(balance);
    return balance;
}
