#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
//#include<dos.h>
#include <unistd.h>
using namespace std;

double rate_USD_to_UZS = 10756;
double rate_USD_to_RUB = 74.32;
double rate_RUB_to_UZS = 145.24;

const int size_of_data_base = 100;

string data_login[size_of_data_base];
string data_password[size_of_data_base];
double data_balance_usd[size_of_data_base] = {};
double data_balance_rub[size_of_data_base] = {};
double data_balance_uzs[size_of_data_base] = {};

string history[size_of_data_base][size_of_data_base];
int history_place_used[size_of_data_base] = {};

string current_login = "";
string current_password = "";

int size_used = 0;

void Clear_screen();
void Log_in();
void Register();
void Bank_menu();
void Wait_for_second();
void Balance(int i);
void Top_up(int i);
void Exchange(int i);
void Withdraw(int i);
void History(int i);
void Loading();
void Credit(int i);
//---------------------------
// START MENU (LOG_IN OR REGISTER)
//---------------------------

void Start_menu()
{
    int cases;

    while (true)
    {
        printf("\x1b[43;30m---BANK---\x1b[0m\n");
        printf("Before starting \x1b[42;30mCREATE AN ACCOUNT\x1b[0m or \x1b[42;30mLOG IN\x1b[0m into existing one.\x1b[0m\n");
        printf("1. Log In \n2. Register \nEnter: ");
        cin >> cases;

        switch (cases)
        {
        case 1:
            Log_in();
            break;
        case 2:
            Register();
            break;
        default:
            Clear_screen();
            printf("\x1b[41;30mYou entered wrong number. Enter only 1 or 2!\x1b[0m\n");
            break;
        }
    }
}

//---------------------------
// LOG IN FUNCTION
//---------------------------

void Log_in()
{

    string login, password;

    Clear_screen();

    while (true)
    {
        printf("\x1b[43;30m---LOG IN MENU---\x1b[0m\n");
        cout << "Login: ";
        cin >> login;
        cout << "Password: ";
        cin >> password;

        bool is_entered = false;
        for (int i = 0; i < size_used; i++)
        {
            if (data_login[i] == login)
            {
                if (data_password[i] == password)
                {
                    is_entered = true;
                    current_login = login;
                    current_password = password;
                    Clear_screen();
                    printf("\x1b[42;30mSuccesfully logged in\x1b[0m\n");
                    Bank_menu();
                }
            }
        }
        if (!is_entered)
        {
            Clear_screen();
            printf("\x1b[41;30mThe password or login is wrong. Try again!\x1b[0m\n");
            break;
        }
    }
}

//---------------------------
// REGISTRATION FUNCTION
//---------------------------

void Register()
{
    string login, password1, password2;
    bool is_login_used = false;
    Clear_screen();

    while (true)
    {
        printf("\x1b[43;30m---REGISTRATION MENU---\x1b[0m\n");
        cout << "Login: ";
        cin >> login;
        for (int i = 0; i < size_of_data_base; i++)
        {
            if (data_login[i] == login)
            {
                is_login_used = true;
            }
        }

        if (is_login_used)
        {
            Clear_screen();
            printf("\x1b[41;30mThis Login is already used. Try again with another one! \x1b[0m\n");
            is_login_used = false;
            continue;
        }

        while (true)
        {
            cout << "Password: ";
            cin >> password1;
            cout << "Re-Enter Password: ";
            cin >> password2;
            if (password1 == password2)
            {
                Clear_screen();
                printf("\x1b[42;30mSuccesfully registered\x1b[0m\n");
                current_login = login;
                current_password = password1;
                data_login[size_used] = login;
                data_password[size_used] = password1;
                size_used++;
                Bank_menu();
            }
            else
            {
                Clear_screen();
                printf("\x1b[41;30mTwo passwords are not identical. Try again!\x1b[0m\nLogin: ");
                cout << login << endl;
            }
        }
    }
}

//---------------------------
// BALANCE
//---------------------------

void Balance(int i)
{
    Loading();
    printf("\x1b[42;30mBalance:\x1b[0m \n");
    cout << fixed << setprecision(2) << data_balance_usd[i] << " USD" << endl;
    cout << fixed << setprecision(2) << data_balance_rub[i] << " RUB" << endl;
    cout << fixed << setprecision(2) << data_balance_uzs[i] << " UZS" << endl;
}

//---------------------------
// TOP UP
//---------------------------

void Top_up(int i)
{
    double amount_of_money_depositted;
    int currency;
    int options;
    string card_number;


    bool is_option_entered_correctly = false;
    printf("\x1b[43;30m---TOP UP MENU--- \x1b[0m \n");
    while (!is_option_entered_correctly)
    {
        cout << "Choose what do you want to do: " << endl
             << "1. Top Up with cash " << endl
             << "2. Top Up with card " << endl
             << "\x1b[42;30mEnter:\x1b[0m ";
        cin >> options;

        if (options == 1 || options == 2)
        {
            is_option_entered_correctly = true;
        }
        else
        {
            Clear_screen();
            cout << "\x1b[41;30m"
                 << "You entered wrong option. Enter only 1 or 2!!!"
                 << "\x1b[0m" << endl;
        }
    }

    Clear_screen();
    if (options == 2)
    {

        bool is_entered_correctly = false;
        Clear_screen();
        while (!is_entered_correctly)
        {
            cout << "\x1b[46;30mEnter the card number:\x1b[0m ";
            cin >> card_number;
            Loading();
            if (card_number.length() == 16)
            {
                is_entered_correctly = true;
            }
            else
            {
                Clear_screen();
                cout << "\x1b[41;30mYou Entered wrong card number. It should consist of 16 numbers. Try again!\x1b[0m" << endl;
            }
        }
    }

    //Introducing the name of the menu

    cout << "\x1b[46;30mChoose currency:\x1b[0m \n1. USD \n2. RUB \n3. UZS \nEnter: ";
    cin >> currency;
    if (currency > 3 || currency < 1)
    {
        Clear_screen();
        printf("\x1b[41;30mYou entered wrong currency. Try Again! \x1b[0m\n");
        return;
    }
    cout << "\x1b[43;30m" << "Amount of money:" << "\x1b[0m ";
    cin >> amount_of_money_depositted;
    amount_of_money_depositted = round(100 * amount_of_money_depositted) / 100;
    if (currency == 1)
    {

        data_balance_usd[i] += amount_of_money_depositted;
        if (options == 1)
        {
            history[i][history_place_used[i]] = string("\x1b[46;30mTop Up(cash):\x1b[0m ") + to_string((int)amount_of_money_depositted) + string(".") + to_string((int)((amount_of_money_depositted-(int)amount_of_money_depositted)*100)) + " USD";
            history_place_used[i]++;
        }
        else
        {
            history[i][history_place_used[i]] = string("\x1b[46;30mTop Up(card):\x1b[0m ") + to_string((int)amount_of_money_depositted) + string(".") + to_string((int)((amount_of_money_depositted-(int)amount_of_money_depositted)*100)) + " USD " + card_number;
            history_place_used[i]++;
        }
    }
    else if (currency == 2)
    {
        data_balance_rub[i] += amount_of_money_depositted;
        if (options == 1)
        {
            history[i][history_place_used[i]] = string("\x1b[46;30mTop Up(cash):\x1b[0m ") + to_string((int)amount_of_money_depositted) + string(".") + to_string((int)((amount_of_money_depositted-(int)amount_of_money_depositted)*100)) + " RUB";
            history_place_used[i]++;
        }
        else
        {
            history[i][history_place_used[i]] = string("\x1b[46;30mTop Up(card):\x1b[0m ") + to_string((int)amount_of_money_depositted) + string(".") + to_string((int)((amount_of_money_depositted-(int)amount_of_money_depositted)*100)) + " RUB " + card_number;
            history_place_used[i]++;
        }
    }
    else
    {
        data_balance_uzs[i] += amount_of_money_depositted;
        if (options == 1)
        {
            history[i][history_place_used[i]] = string("\x1b[46;30mTop Up(cash):\x1b[0m ") + to_string((int)amount_of_money_depositted) + string(".") + to_string((int)((amount_of_money_depositted-(int)amount_of_money_depositted)*100)) + " UZS";
            history_place_used[i]++;
        }
        else
        {
            history[i][history_place_used[i]] = string("\x1b[46;30mTop Up(card):\x1b[0m ") + to_string((int)amount_of_money_depositted) + string(".") + to_string((int)((amount_of_money_depositted-(int)amount_of_money_depositted)*100)) + " UZS " + card_number;
            history_place_used[i]++;
        }
    }
    Clear_screen();
    Loading();
    printf("\x1b[42;30mSuccesful TOP UP \x1b[0m \n");
}

//---------------------------
// EXCHANGE
//---------------------------

void Exchange(int i)
{
    int currency_from, currency_to;
    double amount_of_money_to_exchange;

    printf("\x1b[43;30m---EXCHANGE MENU---\x1b[0m \n");
    cout << "Currencies: 1. USD 2. RUB 3. UZS\n";
    cout << "Shoose exchange currencies: \n";
    cout << "From: ";

    /// -------  INPUT THE CURRENCY TO EXCHANGE FROM   --------- //
    cin >> currency_from;

    /// -------  CHECK IF CURRENCY FROM IS WHETHER 1 OR 2 OR 3 OTHERWISE TELL ERROR  --------- //

    if (currency_from != 1 && currency_from != 2 && currency_from != 3)
    {
        Clear_screen();
        printf("\x1b[41;30mYou Entered wrong number. Enter only 1 or 2 or 3!!!\x1b[0m\n");
        return;
    }

    /// -------  INPUT THE CURRENCY TO EXCHANGE TO  --------- //

    cout << "To: ";
    cin >> currency_to;
    /// -------  CHECK IF CURRENCY FROM IS WHETHER 1 OR 2 OR 3 OTHERWISE TELL ERROR  --------- //
    if (currency_to != 1 && currency_to != 2 && currency_to != 3)
    {
        Clear_screen();
        printf("\x1b[41;30mYou Entered wrong number. Enter only 1 or 2 or 3!!!\x1b[0m\n");
        return;
    }

    /// -------  PRINT AVAILABLE AMOUNT OF MONEY FROM CURRENCY_FROM   --------- //

    if (currency_from == 1)
    {
        printf("\x1b[42;30mAvailable amount to exchange:\x1b[0m ");
        cout << data_balance_usd[i] << " USD";
    }
    else if (currency_from == 2)
    {
        printf("\x1b[42;30mAvailable amount to exchange:\x1b[0m ");
        cout << data_balance_rub[i] << " RUB";
    }
    else if (currency_from == 3)
    {
        printf("\x1b[42;30mAvailable amount to exchange:\x1b[0m ");
        cout << data_balance_uzs[i] << " UZS";
    }

    /// -------   INPUT AMOUNT TO EXCHANGE  --------- //

    cout << endl;
    cout << "Amount: ";
    cin >> amount_of_money_to_exchange;
    amount_of_money_to_exchange = round(100 * amount_of_money_to_exchange) / 100;
    /// -------   EXCHANGE PROCESS  --------- //
    /// ------- 1. USD       2. RUB        3. UZS  --------- //

    Loading();

    if (currency_from == 1)
    {
        if (data_balance_usd[i] >= amount_of_money_to_exchange)
        {

            if (currency_to == 1)
            {
                printf("\x1b[41;30mError exchange from identical currencies!!!\x1b[0m\n");
                return;
            }
            else if (currency_to == 2)
            {
                history[i][history_place_used[i]] = string("\x1b[45;30mExchange:\x1b[0m ") + to_string((int)amount_of_money_to_exchange) + string(".") + to_string((int)((amount_of_money_to_exchange-(int)amount_of_money_to_exchange)*100)) + string(" USD to RUB");
                history_place_used[i]++;
                data_balance_usd[i] -= amount_of_money_to_exchange;
                data_balance_rub[i] += amount_of_money_to_exchange * rate_USD_to_RUB;
            }
            else if (currency_to == 3)
            {
                history[i][history_place_used[i]] = string("\x1b[45;30mExchange:\x1b[0m ") + to_string((int)amount_of_money_to_exchange) + string(".") + to_string((int)((amount_of_money_to_exchange-(int)amount_of_money_to_exchange)*100)) + string(" USD to UZS");
                history_place_used[i]++;
                data_balance_usd[i] -= amount_of_money_to_exchange;
                data_balance_uzs[i] += amount_of_money_to_exchange * rate_USD_to_UZS;
            }
        }
        else
        {
            Clear_screen();
            printf("\x1b[41;30mEntered amount of money is more than you have. Try again!!!\x1b[0m\n");
            return;
        }
    }

    else if (currency_from == 2)
    {
        if (data_balance_rub[i] >= amount_of_money_to_exchange)
        {
            if (currency_to == 2)
            {
                printf("\x1b[41;30mError exchange from identical currencies!!!\x1b[0m\n");
                return;
            }
            else if (currency_to == 1)
            {
                history[i][history_place_used[i]] = string("\x1b[45;30mExchange:\x1b[0m ") + to_string((int)amount_of_money_to_exchange) + string(".") + to_string((int)((amount_of_money_to_exchange-(int)amount_of_money_to_exchange)*100)) + string(" RUB to USD");
                history_place_used[i]++;
                data_balance_rub[i] -= amount_of_money_to_exchange;
                data_balance_usd[i] += amount_of_money_to_exchange / rate_USD_to_RUB;
            }
            else if (currency_to == 3)
            {
                history[i][history_place_used[i]] = string("\x1b[45;30mExchange:\x1b[0m ") + to_string((int)amount_of_money_to_exchange) + string(".") + to_string((int)((amount_of_money_to_exchange-(int)amount_of_money_to_exchange)*100)) + string(" RUB to UZS");
                history_place_used[i]++;
                data_balance_rub[i] -= amount_of_money_to_exchange;
                data_balance_uzs[i] += amount_of_money_to_exchange * rate_RUB_to_UZS;
            }
        }
        else
        {
            Clear_screen();
            printf("\x1b[41;30mEntered amount of money is more than you have. Try again!!!\x1b[0m\n");
            return;
        }
    }

    else if (currency_from == 3)
    {
        if (data_balance_uzs[i] >= amount_of_money_to_exchange)
        {
            if (currency_to == 3)
            {
                printf("\x1b[41;30mError exchange from identical currencies!!!\x1b[0m\n");
                return;
            }
            else if (currency_to == 2)
            {
                history[i][history_place_used[i]] = string("\x1b[45;30mExchange:\x1b[0m ") + to_string((int)amount_of_money_to_exchange) + string(".") + to_string((int)((amount_of_money_to_exchange-(int)amount_of_money_to_exchange)*100)) + string(" UZS to RUB");
                history_place_used[i]++;
                data_balance_uzs[i] -= amount_of_money_to_exchange;
                data_balance_rub[i] += amount_of_money_to_exchange / rate_RUB_to_UZS;
            }
            else if (currency_to == 1)
            {
                history[i][history_place_used[i]] = string("\x1b[45;30mExchange:\x1b[0m ") + to_string((int)amount_of_money_to_exchange) + string(".") + to_string((int)((amount_of_money_to_exchange-(int)amount_of_money_to_exchange)*100)) + string(" UZS to USD");
                history_place_used[i]++;
                data_balance_uzs[i] -= amount_of_money_to_exchange;
                data_balance_usd[i] += amount_of_money_to_exchange / rate_USD_to_UZS;
            }
        }
        else
        {
            Clear_screen();
            printf("\x1b[41;30mEntered amount of money is more than you have. Try again!!!\x1b[0m\n");
            return;
        }
    }

    Clear_screen();
    printf("\x1b[42;30mSuccesfull exchanged!!!\x1b[0m\n");
    /// -------   END OF EXCHANGE PROCCESS   ------ ///
}

//---------------------------
// WITHDRAW
//---------------------------

void Withdraw(int i)
{
    double amount_of_money_to_withdraw;

    printf("\x1b[43;30m---WITHDRAWAL MENU---\x1b[0m\n");

    int options, currency;
    bool is_option_entered_correctly;
    is_option_entered_correctly = false;
    string card_number;
    card_number = " ";
    while (!is_option_entered_correctly)
    {
        cout << "Choose what do you want to do: " << endl
             << "1. Get Cash " << endl
             << "2. Transfer to the card " << endl
             << "\x1b[42;30mEnter:\x1b[0m ";
        cin >> options;

        if (options == 1 || options == 2)
        {
            is_option_entered_correctly = true;
        }
        else
        {
            Clear_screen();
            cout << "\x1b[41;30m"
                 << "You entered wrong option. Enter only 1 or 2!!!"
                 << "\x1b[0m" << endl;
        }
    }

    Clear_screen();
    if (options == 2)
    {

        bool is_entered_correctly = false;
        Clear_screen();
        while (!is_entered_correctly)
        {
            cout << "\x1b[46;30mEnter the card number:\x1b[0m ";
            cin >> card_number;
            Loading();
            if (card_number.length() == 16)
            {
                is_entered_correctly = true;
            }
            else
            {
                Clear_screen();
                cout << "\x1b[41;30mYou Entered wrong card number. It should consist of 16 numbers. Try again!\x1b[0m" << endl;
            }
        }
    }

    cout << "\x1b[43;30mCurrensies:\x1b[0m 1. USD 2. RUB 3. UZS" << endl
         << "\x1b[42;30mCurrency:\x1b[0m ";

    cin >> currency;

    if (currency == 1)
    {
        printf("\x1b[43;30mAvailable amount of money:\x1b[0m ");
        cout << data_balance_usd[i] << endl;
        cout << "\x1b[42;30mAmount:\x1b[0m ";
        cin >> amount_of_money_to_withdraw;

        if (data_balance_usd[i] >= amount_of_money_to_withdraw)
        {
            data_balance_usd[i] -= amount_of_money_to_withdraw;
            if (options == 1)
            {
                history[i][history_place_used[i]] = string("\x1b[43;30mWithdraw(cash)\x1b[0m ") + to_string((int)amount_of_money_to_withdraw) + string(".") + to_string((int)((amount_of_money_to_withdraw-(int)amount_of_money_to_withdraw)*100)) + " USD";
                history_place_used[i]++;
            }
            else
            {
                history[i][history_place_used[i]] = string("\x1b[43;30mWithdraw(card)\x1b[0m ") + to_string((int)amount_of_money_to_withdraw) + string(".") + to_string((int)((amount_of_money_to_withdraw-(int)amount_of_money_to_withdraw)*100)) + " USD " + card_number;
                history_place_used[i]++;
            }
        }
        else
        {
            Clear_screen();
            printf("\x1b[41;30mEntered amount is bigger than you have. Try again!\x1b[0m\n");
            return;
        }
    }
    else if (currency == 2)
    {
        printf("\x1b[43;30mAvailable amount of money:\x1b[0m ");
        cout << data_balance_rub[i] << endl;

        cout << "Amount: ";
        cin >> amount_of_money_to_withdraw;

        if (data_balance_rub[i] >= amount_of_money_to_withdraw)
        {
            data_balance_rub[i] -= amount_of_money_to_withdraw;
            if (options == 1)
            {
                history[i][history_place_used[i]] = string("\x1b[43;30mWithdraw(cash)\x1b[0m ") + to_string((int)amount_of_money_to_withdraw) + string(".") + to_string((int)((amount_of_money_to_withdraw-(int)amount_of_money_to_withdraw)*100)) + " RUB";
                history_place_used[i]++;
            }
            else
            {
                history[i][history_place_used[i]] = string("\x1b[43;30mWithdraw(card)\x1b[0m ") + to_string((int)amount_of_money_to_withdraw) + string(".") + to_string((int)((amount_of_money_to_withdraw-(int)amount_of_money_to_withdraw)*100)) + " RUB " + card_number;
                history_place_used[i]++;
            }
        }
        else
        {
            Clear_screen();
            printf("\x1b[41;30mEntered amount is bigger than you have. Try again!\x1b[0m\n");
            return;
        }
    }
    else if (currency == 3)
    {
        printf("\x1b[43;30mAvailable amount of money:\x1b[0m ");
        cout << data_balance_uzs[i] << endl;

        cout << "Amount: ";
        cin >> amount_of_money_to_withdraw;

        if (data_balance_uzs[i] >= amount_of_money_to_withdraw)
        {
            data_balance_uzs[i] -= amount_of_money_to_withdraw;
            if (options == 1)
            {
                history[i][history_place_used[i]] = string("\x1b[43;30mWithdraw(cash)\x1b[0m ") + to_string((int)amount_of_money_to_withdraw) + string(".") + to_string((int)((amount_of_money_to_withdraw-(int)amount_of_money_to_withdraw)*100)) + " UZS";
                history_place_used[i]++;
            }
            else
            {
                history[i][history_place_used[i]] = string("\x1b[43;30mWithdraw(card)\x1b[0m ") + to_string((int)amount_of_money_to_withdraw) + string(".") + to_string((int)((amount_of_money_to_withdraw-(int)amount_of_money_to_withdraw)*100)) + " UZS " + card_number;
                history_place_used[i]++;
            }
        }
        else
        {
            Clear_screen();
            printf("\x1b[41;30mEntered amount is bigger than you have. Try again!\x1b[0m\n");
            return;
        }
    }

    else
    {
        Clear_screen();
        printf("\x1b[41;30mYou entered wrong currency. Enter only 1 or 2 or 3\x1b[0m\n");
        return;
    }
    Loading();
    Clear_screen();
    printf("\x1b[42;30mSuccesfully Withdrawed\x1b[0m\n");
}

//---------------------------
// CREDIT
//---------------------------
void Credit(int i)
{
    int currency;
    double amount_of_money_to_take_credit;
    cout << "\x1b[43;30m" << "--- CREDIT MENU ---" << "\x1b[0m" << endl <<
            "Here you can take credit" << endl <<
            "Choose Currency: 1. USD 2. RUB 3. UZS" << endl <<
            "\x1b[42;30m" << "Enter:" << "\x1b[0m ";
    cin >> currency;
    if (currency > 3 || currency < 1)
    {
        Clear_screen();
        cout << "\x1b[41;30m" << "You entered wrong currency. Enter only 1-3 !!!" << "\x1b[0m" << endl;
        Credit(i);
    }

    cout << "\x1b[46;30m" << "Enter amount:" << "\x1b[0m ";
    cin >> amount_of_money_to_take_credit;
    amount_of_money_to_take_credit = round(100 * amount_of_money_to_take_credit) / 100;
    int year, month;
    cout << "\x1b[45;30m" << "Enter the period (year and month):" << "\x1b[0m ";
    cout << "Year: ";
    cin >> year;
    cout << "Month: ";
    cin >> month;

    if (currency == 1)
    {
        data_balance_usd[i] += amount_of_money_to_take_credit;
        history[i][history_place_used[i]] = string("\x1b[42;30mCredit:\x1b[0m ") + to_string((int)amount_of_money_to_take_credit) + string(".") + to_string((int)((amount_of_money_to_take_credit-(int)amount_of_money_to_take_credit)*100))+ string(" USD for ") + to_string(year) + string(" year(s) ") + to_string(month) + string(" month(s)");
        history_place_used[i]++;
    }
    else if (currency == 2)
    {
        data_balance_rub[i] += amount_of_money_to_take_credit;
        history[i][history_place_used[i]] = string("\x1b[42;30mCredit:\x1b[0m ") + to_string((int)amount_of_money_to_take_credit) + string(".") + to_string((int)((amount_of_money_to_take_credit-(int)amount_of_money_to_take_credit)*100))+ string(" RUB for ") + to_string(year) + string(" year(s) ") + to_string(month) + string(" month(s)");
        history_place_used[i]++;
    }
    else if (currency == 3)
    {
        data_balance_uzs[i] += amount_of_money_to_take_credit;
        history[i][history_place_used[i]] = string("\x1b[42;30mCredit:\x1b[0m ") + to_string((int)amount_of_money_to_take_credit) + string(".") + to_string((int)((amount_of_money_to_take_credit-(int)amount_of_money_to_take_credit)*100))+ string(" UZS for ") + to_string(year) + string(" year(s) ") + to_string(month) + string(" month(s)");
        history_place_used[i]++;
    }

}


//---------------------------
// HISTORY
//---------------------------

void History(int i)
{
    Loading();
    printf("\x1b[44;30m---HISTORY MENU---\x1b[0m\n");

    for (int m = 0; m < history_place_used[i]; m++)
    {
        cout << history[i][m] << endl;
    }
    cout << endl;
}

//---------------------------
// BANK MENU
//---------------------------

void Bank_menu()
{
    int i;

    //---------------------------
    // FINDING THE CURRENT PLACE IN THE DATA BASE BY USING CURRENT_LOGIN AND CURRENT_PASSWORD
    //---------------------------

    for (i = 0; i < size_used; i++)
    {
        if (data_login[i] == current_login)
        {
            if (data_password[i] == current_password)
            {
                break;
            }
        }
    }

    //---------------------------
    // ENTERING THE WHILE LOOP WHERE YOU CHOOSE SEVERAL OPTIONS TO DO
    //---------------------------
    while (true)
    {

        int cases;

        printf("\x1b[43;30m---BANK MENU--- \x1b[0m\n");
        printf("1. Balance \n2. Top up \n3. Exchange \n4. Withdraw \n5. Credit \n6. History \n7. Log out \nEnter: ");

        //---------------------------
        // INPUTTING WHICH CASE
        //---------------------------

        cin >> cases;

        switch (cases)
        {

            //---------------------------
            // CASE 1 BALANCE CHECK
            //---------------------------

        case 1:
            Clear_screen();
            Balance(i);
            break;

            //---------------------------
            // CASE 2 DEPOSIT MONEY MENU
            //---------------------------

        case 2:
            Clear_screen();
            Top_up(i);
            break;

            //---------------------------
            // CASE 3 EXCHANGE BETWEEN CURRENCIES
            //---------------------------

        case 3:
            Clear_screen();
            Exchange(i);
            break;

            //---------------------------
            // CASE 4 WITHDRAWAL PROCCESS
            //---------------------------

        case 4:
        {
            Clear_screen();

            Withdraw(i);
            break;
        }
        case 5:
            Clear_screen();
            Credit(i);
            break;
            //---------------------------
            // CASE 6 HISTORY PRINT
            //---------------------------
        case 6:
            Clear_screen();
            History(i);
            break;

            //---------------------------
            // CASE 7 EXITING FROM THE ACCOUNT
            //---------------------------

        case 7:
            Clear_screen();
            Start_menu();
            break;

        default:
            Clear_screen();
            printf("\x1b[41;30mError. Enter only 1 - 7!!!\x1b[0m\n");
            break;
        }
    }
}

//---------------------------
// CLEARING THE CONSOLE FUNCTION
//---------------------------
void Clear_screen()
{
    //system("clear");
    system("cls");

}

//---------------------------
// LOADING FUNCTION
//---------------------------

void Loading()
{
    Clear_screen();
    string t = "Loading...";
    int i = 0;
    for (int i = 0; i < t.length(); i++)
    {
        cout << "\x1b[46;30m" << t[i] << "\x1b[0m";
        cout << flush;
        usleep(100000); // 100 000 microsecs = 100 millisecs
    }
    Clear_screen();
}

//---------------------------
// MAIN FUNCTION
//---------------------------

int main()
{
    Loading();
    cout << "\x1b[46;30m"
         << "PROJECT THEME:" << endl
         << "\x1b[0m"
         << "    Bank Account" << endl;
    cout << endl;
    cout << "\x1b[43;30m"
         << "MADE BY: "
         << "\x1b[0m" << endl
         << "    Abdujabborov Azizkhuja" << endl;
    cout << endl;
    cout << "\x1b[42;30m"
         << "GROUP: "
         << "\x1b[0m" << endl
         << "    CIE 21-12" << endl;
    cout << endl;
    cout << "\x1b[45;30m"
         << "SECTION: "
         << "\x1b[0m" << endl
         << "    001" << endl;

    Clear_screen();

    Start_menu();

    return 0;
}
