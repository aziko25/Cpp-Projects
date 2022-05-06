#ifndef CLIENT_H
#include <iostream>
#include <list>
#include <vector>
#include <numbers>
using namespace std;


struct node
{
    int num = 1;
    int fill = 0;
    char name[3][10];
    node* next;
    node* prev;
};

class hostel
{
    node* header[3];
    node* cn;

public:
    hostel()
    {
        for (int i = 0; i < 3; i++)
            header[i] = NULL;
    }

    void create()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                node* nn = new node;
                nn->next = NULL;
                nn->prev = NULL;
                if (header[i] == NULL)
                {
                    header[i] = nn;
                    nn->num = 1;
                }
                else
                {
                    node* cn = header[i];
                    while (cn->next != NULL)
                    {
                        cn = cn->next;
                    }
                    if (j == 3 || j == 5 || j == 7 || j == 8)
                    {
                        cn->num = 3;
                    }
                    if (j == 2 || j == 4 || j == 6)
                    {
                        cn->num = 2;
                    }
                    cn->next = nn;
                    nn->prev = cn;
                }
            }
        }
    }

    void tax()
    {
    tax:
        string choice;
        cout << "\n\tChoose type of tax." << endl;
        cout << "\t1.Water" << endl;
        cout << "\t2.Gas" << endl;
        cout << "\t3.Eletricity" << endl;
        cout << "\tChoice: ";
        cin >> choice;
        if (choice == "1") {
            int amount;
            cout << "\tCost of water per cubic meter is $1" << endl;
            cout << "\tHow much you want to purchase: ";
            cin >> amount;
            cout << "\tTotal cost of your water " << amount << "m^3 is: $" << amount * 1 << endl;
        }
        else if (choice == "2") {
            int amount;
            cout << "\tCost of gas per cubic meter is $2" << endl;
            cout << "\tHow much you want to purchase: ";
            cin >> amount;
            cout << "\tTotal cost of your gas " << amount << "m^3 is: $" << amount * 2 << endl;
        }
        else if (choice == "3") {
            int amount;
            cout << "\tCost of eletricity per kilowatt is $4" << endl;
            cout << "\tHow much you want to purchase: ";
            cin >> amount;
            cout << "\tTotal cost of your electricity " << amount << "KW is: $" << amount * 4 << endl;
        }
        else {
            goto tax;
        }
            
    }

    void service() {
    service:
        string choice;
        cout << "\n\tChoose the service." << endl;
        cout << "\t1.Phones of staff." << endl;
        cout << "\t2.Order food." << endl;
        cout << "\t3.Write feedback." << endl;
        cout << "\t4.Call the staff." << endl;
        cout << "\tChoice: ";
        cin >> choice;
        if (choice == "1") {
            list<string> staff = { "\t001 Reception", "\t002 Kitchen", "\t003 Laundry", "\t004 Manager","\t005 Accountant","\t006 Cleaning"};
            for (auto v : staff) {
                cout << v << "\n";
            }
        }
        else if (choice == "2") {
            cout << "\n\tWrite the food you want to order. To finish your order input . (symbol dot)" << endl;
            char str[256];
            cin.getline(str, 256, '.');
            cout << "\tYour order is reacived wait your order after 45 minutes, otherwise your order will be free." << endl;
            cout << "\tYour order: " << endl;
            cout << str;
        }
        else if (choice == "3") {
            string letter;
            string name;
            cout << "\n\tPlease write your letter to our managers." << endl;
            cout << "\tEnter your name: ";
            cin >> name;
            cout << "\tEnter your letter: ";
            cin >> letter;
            cout << "\tThank you "<< name  << " for writing feedback :) you letter is below." << endl;
            cout << letter;
        }
        else if (choice == "4") {
            string coment;
            string name;
            int phone;
            int number;
            cout << "\n\tPlease enter the staff phone:" << endl;
            cin >> phone;
            cout << "\tEnter your name: ";
            cin >> name;
            cout << "\tEnter your room number: ";
            cin >> number;
            cout << "\tPlease write coment to staff : " << endl;
            cin >> coment;
            cout << "\tStaff called to room number : " << number << "they will be there as soon as posible." << endl;
            cout << "\tThank you" << name << "for your coment" << coment << "we will take into account ." << endl;
            
        }   
        else
            goto service;
    }
   
    void display()
    {
        int j = 0, k = 0, l = 0;
        for (int i = 0; i < 48; i++)
        {
            cout << "--";
        }
        cout << "\n "
            ;
        for (int i = 1; i < 4; i++)
        {
            cout << "| Floor number : " << i << " \t\t";
        }
        cout << "|\n";
        for (int i = 0; i < 48; i++)
        {
            cout << "--";
        }
        cn = header[j];
        node* sn = header[j + 1];
        node* tn = header[j + 2];
        cout << "\n ";
        while (cn != NULL)
        {
            if (cn->fill != cn->num && cn->num != 0)
            {
                j++;
                cout << "| Room number: " << j;
                cout <<"->Vacant cots->" << cn->num;
            }
            else
            {
                j++;
                cout << "| Room number: " << j;
                cout << "->Present ";
            }
            if (sn->fill != sn->num && sn->num != 0)
            {
                k++;
                cout << " | Room number: " << j;
                cout << "->Vacant cots->" << sn->num;
            }
            else
            {
                k++;
                cout << "  | Room number: " << j;
                cout << "->Present ";
            }
            if (tn->fill != tn->num && tn->num != 0)
            {
                l++;
                cout << " | Room number: " << j;
                cout << "->Vacant cots->" << tn->num << "| ";
            }
            else
            {
                l++;
                cout << " | Room number: " << j;
                cout << "->Present " << " | ";
            }
            cout << " \n ";
            for (int i = 0; i < 48; i++)
            {
                cout << "--";
            }
            cout << "\n";
            cn = cn->next;
            sn = sn->next;
            tn = tn->next;
        }
    }

    void book(int people)
    {
        int floor, room;
        cout << "\n\tEnter the floor number : ";
        cin >> floor;
        try
        {
            if (floor < 0 || floor > 4)

            {
                throw(floor);
            }
            cn = header[floor - 1];

            cout << "\n\tEnter the room number : ";
            cin >> room;
            try
            {

                if (room < 0 || room > 10)
                {
                    throw(room);
                }
                else
                {
                    int i = 1;
                    while (i < room)
                    {
                        cn = cn->next;
                        i++;
                    }
                    if (cn->num >= people)
                    {
                        cout << "\n\tRoom is vacant you can book the room";

                        int count = 0;
                        while (cn->fill - 1 <= cn->num)
                        {

                            cout << "\n\tEnter name " << cn->fill + 1 << " : ";                            
                            cin >> cn->name[cn->fill];
                            count++;
                            cn->fill++;

                            string n;
                            n = cn->name[cn->fill];

                            ofstream myfile;
                            myfile.open("Clients.txt", ios::app);
                            myfile << "\n\tCLIENT: " << n;

                            if (count >= people)
                            {
                                break;
                            }
                        }
                        cn->num = cn->num - people;
                    }

                    else
                    {
                        cout << "\n\tRoom is not vacant... SORRY !!!";
                    }
                }
            }
            catch (int r)
            {
                cout << "\n\tInvalid room number.Try again! : " << r;
            }
        }
        catch (int r)
        {
            cout << " \n\tInvalid floor number.Try again! : " << r;
        }
    }

    void cancle(int check)
    {
        char namecheck[10];
        int flag = 0;
        int room, i = 1;
        try
        {
            if (check < 0 || check > 4)

            {
                throw(check);
            }
            else
            {
                cout << "\n\tEnter the room number: ";
                cin >> room;
                try
                {
                    if (room < 0 || room > 10)
                    {
                        throw(room);
                    }
                    else
                    {
                        cout << "\tEnter a name to delete :";

                        cin >> namecheck;
                        cn = header[check - 1];
                        while (i < room)
                        {
                            cn = cn->next;
                            i++;
                        }
                        i = 0;
                        while (i < 3)
                        {

                            if (!strcmp(namecheck, cn->name[i]))

                            {
                                flag = 1;
                                break;
                                i = 0;
                            }
                            else
                                i++;
                        }
                        if (flag == 1 && cn->fill != 0)
                        {
                            cout << "\n\tRecord deleted : " << cn->name[i];

                            cn->name[i][0] = 'A';
                            cn->name[i][1] = '\0';
                            cn->fill--;
                            cn->num++;
                        }
                        else

                            cout << "\n\tRecord not present ";
                    }
                }
                catch (int r)
                {
                    cout << "\n\tInvalid room number.Try again! : " << r;
                }
            }
        }

        catch (int r)

        {
            cout << "\n\tFloor dosn't exist :(: " << r;
        }
    }

    void upgrade(int check)
    {
        char namecheck[10];
        int room, i = 1;
        try
        {
            if (check < 0 || check > 4)

            {
                throw(check);
            }
            else
            {
                cout << "\n\tEnter the room number: ";
                cin >> room;
                try
                {
                    if (room < 0 || room > 10)

                    {
                        throw(room);
                    }
                    else
                    {
                        cout << "\tEnter a name to update: ";

                        cin >> namecheck;
                        cn = header[check - 1];
                        while (i < room)
                        {
                            cn = cn->next;
                            i++;
                        }
                        i = 0;
                        while (i < 3)
                        {
                            if (!strcmp(namecheck, cn->name[i]))

                            {
                                cout << "\n\tEnter updated name: ";

                                cin >> cn->name[i];
                                break;
                            }
                            else
                                i++;
                        }
                        if (i >= 3)
                            cout << "\tRecord not found :( ";
                        else
                        {
                            cout << "\n\tRecord updated\n\tPrevious name: " << namecheck << "\n\tupdated name: " << cn->name[i];
                        }
                    }
                }
                catch (int r)
                {
                    cout << "\n\tInvalid room number.Try again! : " << r;
                }
            }
        }

        catch (int r)

        {
            cout << "\n\tFloor doesn't exist :( : " << r;
        }
    }
};

#endif