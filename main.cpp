#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>

#include "Owner.h"
#include "Client.h"

using namespace std;

void CLIENT() {
client:
    hostel obj;
    int key;
    char ch;
    int floorcheck;
    obj.create();
    do
    {
        system("CLS");
        cout << "\n\t1. Book a room for 1 person\n\t2. Book a room for 2 person\n\t3. Book a room for 3 person\n\t4. Display the current status of rooms\n\t5. Tax pricelist\n\t6. Cancel a cot\n\t7. Update Clients Info\n\t8. Services\n\t9. GO TO OWNER PART" << endl;
        cout << "\tEnter your choice: ";
        cin >> key;
        switch (key)
        {
        case 1:
        {
            system("CLS");
            obj.book(1);
            break;
        }
        case 2:
        {
            system("CLS");
            obj.book(2);
            break;
        }
        case 3:
        {
            system("CLS");
            obj.book(3);
            break;
        }
        case 4:
        {
            system("CLS");
            obj.display();
            break;
        }
        case 5:
        {
            system("CLS");
            obj.tax();
            break;
        }
        case 6:
        {
            system("CLS");
            cout << "\n\tEnter floor number: ";
            cin >> floorcheck;
            obj.cancle(floorcheck);
            break;
        }
        case 7:
        {
            system("CLS");
            cout << "\n\tEnter floor number: ";
            cin >> floorcheck;
            obj.upgrade(floorcheck);
            break;
        }
        case 8:
        {
            system("CLS");
            obj.service();
            break;
        }
        case 9:
        {
            break;
        }
        default:
            cout << "\n\tInvalid choice ";
        }

        cout << "\n\tDo you want to continue (Y/N): ";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
}


void OWNER() {
    system("CLS");
    Owner owner1;


    cout << "\n\n\n\n\t\t\tWELCOME TO OWNER PART!\n";

    owner1.Input();
    owner1.Display();
    Sleep(3000);

menu:
        system("CLS");

        cout << "\n\tCHOOSE ONE OF THE FOLLOWING:";
        cout << "\n\n\t0 - INSTRUCTIONS";
        cout << "\n\t1 - CHECK YOUR BALANCE";
        cout << "\n\t2 - TAKE A CREDIT";
        cout << "\n\t3 - BUY A HOSTEL";
        cout << "\n\t4 - CHECK YOUR INCOME";
        cout << "\n\t5 - SEE YOUR HOSTELS";
        cout << "\n\t6 - COLLECT MONTHLY RENT MONEY";
        cout << "\n\t7 - ORDER AN ADVERTISMENT";
        cout << "\n\t8 - SCALE OF CLIENT HAPPINESS";
        cout << "\n\t9 - HIRE EMPLOYEES";
        cout << "\n\t10 - SEE YOUR EMPLOYEES";
        cout << "\n\t11 - OPEN A NEW REGION";
        cout << "\n\t12 - GO TO CLIENT PART";
        
        owner1.Game_Over();

        int ch;
        cout << "\n\t";
        cin >> ch;

        if (ch == 0) {
            system("CLS");
            cout << "\n\t\t\t\t\tINSTRUCTIONS";
            cout << "\n\n\tYou Are The Owner Of Your Future Hostels And Hotels.";
            cout << "\n\tYou Should Buy Hostels, Rent Them And Collect Your Money.";
            cout << "\n\tYou Can Also Borrow Some Money From The Bank Which Is Calculated In This Way = Your Income * 4. Credit Interest Is 10%.";
            cout << "\n\tTo Open A New Region, You Should Pay 100.000$ And Have All Of The Hostels.";
            cout << "\n\tAfter You Open A New Region, Hotels Would Be Available. After You Buy All Of The Hotels, You Can Upgrade Them.";
            cout << "\n\tAlso, You Can Order An Advertisment, So Your Income Will Grow, Because The Amount Of Clients Would Increase!";
            cout << "\n\tBesides, There Is A Scale Called 'Client Happines' That Will Show Their Satisfaction With Hotel.";
            cout << "\n\tIf Client Satisfaction Will Fail To -1 Or Balance Would Be Negative GAME WILL END!";
            cout << "\n\tHave A Nice Time In Our Project!";

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 1) {
            owner1.Balance1();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 2) {
            owner1.Credit();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 3) {
            owner1.Buy_Hostel();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 4) {
            owner1.Incomes1();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 5) {
            owner1.Hostels_You_Own();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 6) {
            owner1.Take_Money();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 7) {
            owner1.Order_Advertisment();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 8) {
            owner1.Client_Happiness();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 9) {
            owner1.Hire_Employees();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 10) {
            owner1.Employees();

            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu;
            }
        }
        else if (ch == 11) {
    menu1:

            owner1.Game_Complete();
            owner1.Game_Over();
            owner1.Open_New_Locations();
            cout << "\n\n\t";
            int choice1;
            cin >> choice1;
            if (choice1 == 0) {
                goto menu;
            }
            else if (choice1 == 1) {
                owner1.Balance1();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 2) {
                owner1.Credit();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 3) {
                owner1.Buy_Hostel();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 4) {
                owner1.Incomes1();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 5) {
                owner1.Hostels_You_Own();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 6) {
                owner1.Take_Money();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 7) {
                owner1.Order_Advertisment();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 8) {
                owner1.Client_Happiness();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 9) {
                owner1.Hire_Employees();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 10) {
                owner1.Employees();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 11) {
                owner1.Buy_Region1_Hotels();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 12) {
                owner1.Hotels_You_Own();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 13) {
                owner1.Upgrade_Hotels();

                cout << "\n\tWant To Return To Menu? (Y/N): ";
                char choice;
                cin >> choice;
                if (choice == 'Y' || choice == 'y') {
                    goto menu1;
                }
            }
            else if (choice1 == 14) {
            system("CLS");
        client1:
            hostel obj;
            int key;
            char ch;
            int floorcheck;
            obj.create();
            do
            {
                system("CLS");
                cout << "\n\t1. Book a room for 1 person\n\t2. Book a room for 2 person\n\t3. Book a room for 3 person\n\t4. Display the current status of rooms\n\t5. Tax pricelist\n\t6. Cancel a cot\n\t7. Update Clients Info\n\t8. Services\n\t9. GO TO OWNER PART" << endl;
                cout << "\tEnter your choice: ";
                cin >> key;
                switch (key)
                {
                case 1:
                {
                    system("CLS");
                    obj.book(1);
                    break;
                }
                case 2:
                {
                    system("CLS");
                    obj.book(2);
                    break;
                }
                case 3:
                {
                    system("CLS");
                    obj.book(3);
                    break;
                }
                case 4:
                {
                    system("CLS");
                    obj.display();
                    break;
                }
                case 5:
                {
                    system("CLS");
                    obj.tax();
                    break;
                }
                case 6:
                {
                    system("CLS");
                    cout << "\n\tEnter floor number: ";
                    cin >> floorcheck;
                    obj.cancle(floorcheck);
                    break;
                }
                case 7:
                {
                    system("CLS");
                    cout << "\n\tEnter floor number: ";
                    cin >> floorcheck;
                    obj.upgrade(floorcheck);
                    break;
                }
                case 8:
                {
                    system("CLS");
                    obj.service();
                    break;
                }
                case 9:
                {
                    break;
                }
                default:
                    cout << "\n\tInvalid choice ";
                }

                cout << "\n\tDo you want to continue (Y/N): ";
                cin >> ch;
            } while (ch == 'Y' || ch == 'y');
            }
            cout << "\n\tWant To Return To Menu? (Y/N): ";
            char choice;
            cin >> choice;
            if (choice == 'Y' || choice == 'y') {
                goto menu1;
            }
        }
        else if (ch == 12) {
        system("CLS");
    client:
        hostel obj;
        int key;
        char ch;
        int floorcheck;
        obj.create();
        do
        {
            system("CLS");
            cout << "\n\t1. Book a room for 1 person\n\t2. Book a room for 2 person\n\t3. Book a room for 3 person\n\t4. Display the current status of rooms\n\t5. Tax pricelist\n\t6. Cancel a cot\n\t7. Update Clients Info\n\t8. Services\n\t9. GO TO OWNER PART" << endl;
            cout << "\tEnter your choice: ";
            cin >> key;
            switch (key)
            {
            case 1:
            {
                system("CLS");
                obj.book(1);
                break;
            }
            case 2:
            {
                system("CLS");
                obj.book(2);
                break;
            }
            case 3:
            {
                system("CLS");
                obj.book(3);
                break;
            }
            case 4:
            {
                system("CLS");
                obj.display();
                break;
            }
            case 5:
            {
                system("CLS");
                obj.tax();
                break;
            }
            case 6:
            {
                system("CLS");
                cout << "\n\tEnter floor number: ";
                cin >> floorcheck;
                obj.cancle(floorcheck);
                break;
            }
            case 7:
            {
                system("CLS");
                cout << "\n\tEnter floor number: ";
                cin >> floorcheck;
                obj.upgrade(floorcheck);
                break;
            }
            case 8:
            {
                system("CLS");
                obj.service();
                break;
            }
            case 9:
            {
                break;
            }
            default:
                cout << "\n\tInvalid choice ";
            }

            cout << "\n\tDo you want to continue (Y/N): ";
            cin >> ch;
        } while (ch == 'Y' || ch == 'y');
        }
        else {
            goto menu;
        }
    }


int main() {
    system("color 17");
    ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);

    cout << "\n\n\n\n\t\t\t\tHI AND WELCOME TO A HOSTEL MANAGEMENT PROJECT!\n";
    cout << "\n\t\tYOU HAVE 2 OPTIONS TO CHOOSE:\n";
    cout << "\t\t1 - ENTER THIS PROJECT AS A CLIENT\n";
    cout << "\t\t2 - ENTER THIS PROJECT AS A OWNER OF THE HOSTELS NETWORK\n";
    int choice;
    cout << "\t\t";
    cin >> choice;
    if (choice == 1) {
        goto CLIENT;
    }
    else if (choice == 2) {
        goto OWNER;
    }




CLIENT:
    system("CLS");
    CLIENT();
    

OWNER:
    system("CLS");
    OWNER();
	
	system("pause");
	return 0;
}
