#ifndef OWNER_H
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

class Owner {
protected:
	string Name;
	double Balance;
	int Income;
	int Infinity;
	int Income_With_Staff;
	int Warning;
	int Hired_Order;

	int Rent1;
	int Rent2;
	int Rent3;
	int Rent4;
	int Rent5;

	double Borrowed_Money;

	bool Borrowed_Money1;

	bool Bought_Hostel1;
	bool Bought_Hostel2;
	bool Bought_Hostel3;
	bool Bought_Hostel4;
	bool Bought_Hostel5;

	bool Bought_Hotel1;
	bool Bought_Hotel2;
	bool Bought_Hotel3;
	bool Bought_Hotel4;
	bool Bought_Hotel5;

	bool Opened_Region1;

	int Hotel_Star1;
	int Hotel_Star2;
	int Hotel_Star3;
	int Hotel_Star4;
	int Hotel_Star5;

	bool Upgrade_Hotel1;
	bool Upgrade_Hotel2;
	bool Upgrade_Hotel3;
	bool Upgrade_Hotel4;
	bool Upgrade_Hotel5;

	bool Ordered_Advertisment_Meta;
	bool Ordered_Advertisment_Instagram;
	bool Ordered_Advertisment_Google;

	float Clients_Happiness;

	bool Hired_Cooker1;
	bool Hired_Cooker2;
	bool Hired_Cooker3;
	bool Hired_Cooker4;
	bool Hired_Cooker5;

	bool Hired_Maid1;
	bool Hired_Maid2;
	bool Hired_Maid3;
	bool Hired_Maid4;
	bool Hired_Maid5;

	bool Credit_Taken;

public:
	Owner() {

		Balance = 4000000;

		Income = 0;

		Borrowed_Money = 0;

		Infinity = 9999999;

		Clients_Happiness = 0;

		Income_With_Staff = 0;

		Warning = 0;

		Hired_Order = 0;

		Rent1 = 20000;
		Rent2 = 26000;
		Rent3 = 32000;
		Rent4 = 38000;
		Rent5 = 120000;

		Borrowed_Money1 = false;

		Bought_Hostel1 = false;
		Bought_Hostel2 = false;
		Bought_Hostel3 = false;
		Bought_Hostel4 = false;
		Bought_Hostel5 = false;

		Bought_Hotel1 = false;
		Bought_Hotel2 = false;
		Bought_Hotel3 = false;
		Bought_Hotel4 = false;
		Bought_Hotel5 = false;

		Opened_Region1 = false;

		Credit_Taken = false;

		Hotel_Star1 = 2;
		Hotel_Star2 = 3;
		Hotel_Star3 = 4;
		Hotel_Star4 = 5;
		Hotel_Star5 = 7;

		Upgrade_Hotel1 = false;
		Upgrade_Hotel2 = false;
		Upgrade_Hotel3 = false;
		Upgrade_Hotel4 = false;
		Upgrade_Hotel5 = false;

		Ordered_Advertisment_Meta = false;
		Ordered_Advertisment_Instagram = false;
		Ordered_Advertisment_Google = false;

		Hired_Cooker1 = false;
		Hired_Cooker2 = false;
		Hired_Cooker3 = false;
		Hired_Cooker4 = false;
		Hired_Cooker5 = false;

		Hired_Maid1 = false;
		Hired_Maid2 = false;
		Hired_Maid3 = false;
		Hired_Maid4 = false;
		Hired_Maid5 = false;
	}

	void Input() {
		cout << "\n\tEnter Your Name: "; cin >> Name;
	}

	void Display() {
		cout << "\n\tName Of The Hostel Owner: " << Name;
		cout << "\n\tOwner's Balance: " << Balance << "$";
	}

	void Balance1() {
		system("CLS");
		cout << "\n\tYour Current Balance Is: " << Balance << "$" << endl;
	}

	double Credit() {
		system("CLS");
		if (Borrowed_Money1 == false && Income >= 0) {
			int credit_max = Income * 4;
			cout << "\n\tYou Can Take " << credit_max << "$ Right Now!" << endl;
			cout << "\tType The Amount Of Money You Want To Take: ";
			int choice;
			cin >> choice;
			if (choice <= credit_max && choice > 0) {
				Borrowed_Money = Borrowed_Money + choice;
				Balance = Balance + choice;
				Borrowed_Money1 = true;
				cout << "\n\tYou Have Successfully Borrowed " << choice << "$";
				cout << "\n\tYour Current Balance: " << Balance << "$";
				return Balance;
				return Borrowed_Money1;
				return Borrowed_Money;
				return Credit_Taken;
			}
			else {
				cout << "\n\tYou Typed In More Money Than You Can Take Or A Negative Number!" << endl;
			}
		}
		else if (Borrowed_Money1 == true && Income >= 0) {
			system("CLS");
			cout << "\n\tFirst, Return The Borrowed Money!";
			cout << "\n\tAmount Of The Money To Be Returned: " << Borrowed_Money * 1.1 << "$";
			cout << "\n\tWant To Repay A Loan? (PRESS 1): ";
			int c;
			cin >> c;
			if (c == 1 && Balance >= (Borrowed_Money * 1.1)) {
				Balance = Balance - (Borrowed_Money * 1.1);
				Borrowed_Money = 0;
				cout << "\n\tYou Have Successfully Repaid For A Loan!";
				Credit_Taken = false;
				Borrowed_Money1 = false;
				cout << endl;

				return Borrowed_Money1;
				return Credit_Taken;
				return Balance;
				return Borrowed_Money;
			}
			else {
				cout << "\n\tInsufficient Money!" << endl;
			}
		}
		else if (Income < 0) {
			cout << "\n\tYOU CAN'T BORROW ANY MONEY, YOUR INCOME PER MONTH IS 0!";
		}
	}

	void hostel1() {
		int price1;
		price1 = 4000;
		cout << "\n\t1 - HOSTEL IN SERGELI:";
		cout << "\n\tLocation: Street Jahonaro";
		cout << "\n\tFloors: 2";
		cout << "\n\tRooms In Each Floor: 3";
		cout << "\n\tPrice: " << price1 << "$";
	}

	void hostel22() {
		int price22;
		price22 = 6000;
		cout << "\n\t2 - HOSTEL IN SHAYHONTOHUR:";
		cout << "\n\tLocation: Street Navruz";
		cout << "\n\tFloors: 3";
		cout << "\n\tRooms In Each Floor: 5";
		cout << "\n\tPrice: " << price22 << "$";
	}

	void hostel2() {
		int price2;
		price2 = 6000;
		cout << "\t\t\t\t\t2 - HOSTEL IN SHAYHONTOHUR:";
		cout << "\n\t\t\t\t\t\t\tLocation: Street Navruz";
		cout << "\n\t\t\t\t\t\t\tFloors: 3";
		cout << "\n\t\t\t\t\t\t\tRooms In Each Floor: 5";
		cout << "\n\t\t\t\t\t\t\tPrice: " << price2 << "$";
	}

	void hostel3() {
		int price3;
		price3 = 9000;
		cout << "\n\t3 - HOSTEL IN YASHANABAD:";
		cout << "\n\tLocation: Street Amir Temur";
		cout << "\n\tFloors: 4";
		cout << "\n\tRooms In Each Floor: 7";
		cout << "\n\tPrice: " << price3 << "$";
	}

	void hostel44() {
		int price44;
		price44 = 12000;
		cout << "\n\t4 - HOSTEL IN Mirzo-Ulugbek:";
		cout << "\n\tLocation: Street Ziyolilar";
		cout << "\n\tFloors: 5";
		cout << "\n\tRooms In Each Floor: 9";
		cout << "\n\tPrice: " << price44 << "$";
	}

	void hostel4() {
		int price4;
		price4 = 12000;
		cout << "\t\t\t\t\t4 - HOSTEL IN Mirzo-Ulugbek:";
		cout << "\n\t\t\t\t\t\t\tLocation: Street Ziyolilar";
		cout << "\n\t\t\t\t\t\t\tFloors: 5";
		cout << "\n\t\t\t\t\t\t\tRooms In Each Floor: 9";
		cout << "\n\t\t\t\t\t\t\tPrice: " << price4 << "$";
	}

	void hostel5() {
		int price5;
		price5 = 50000;
		cout << "\n\t5 - HOSTEL IN Yunusabad:";
		cout << "\n\tLocation: Street Registan";
		cout << "\n\tFloors: 10";
		cout << "\n\tRooms In Each Floor: 20";
		cout << "\n\tPrice: " << price5 << "$";
	}

	double Buy_Hostel() {
		system("CLS");
	market:

		cout << "\n\tThere Are A Lot Of Various Hostels That You Can Buy For Different Amount Of Money!" << endl;
		cout << "\tHere Are Several Hostels:" << endl;

		int price1, price2, price3, price4, price5;
		price1 = 4000;
		price2 = 6000;
		price3 = 9000;
		price4 = 12000;
		price5 = 50000;

		if (Bought_Hostel1 == true) {
			system("CLS");
			hostel22();
			cout << endl;
			hostel3();
			cout << endl;
			hostel44();
			cout << endl;
			hostel5();

			if (Bought_Hostel2 == true) {
				system("CLS");
				hostel3();
				cout << endl;
				hostel44();
				cout << endl;
				hostel5();

				if (Bought_Hostel3 == true) {
					system("CLS");
					hostel44();
					cout << endl;
					hostel5();

					if (Bought_Hostel4 == true) {
						system("CLS");
						hostel5();

						if (Bought_Hostel5 == true) {
							system("CLS");
							cout << "\n\n\tNO HOSTELS LEFT TO BUY!";
						}
					}
				}
			}
		}
		else if (Bought_Hostel1 == false && Bought_Hostel2 == false && Bought_Hostel3 == false && Bought_Hostel4 == false && Bought_Hostel5 == false) {
			hostel1();
			hostel2();
			hostel3();
			hostel4();
			hostel5();
		}
		else if (Bought_Hostel1 == true && Bought_Hostel2 == true && Bought_Hostel3 == true && Bought_Hostel4 == true && Bought_Hostel5 == true) {
			cout << "\n\n\tNO HOSTELS LEFT TO BUY!";
		}

		cout << endl;

		if (Bought_Hostel1 != true || Bought_Hostel2 != true || Bought_Hostel3 != true || Bought_Hostel4 != true || Bought_Hostel5 != true) {
			cout << "\n\n\n\tYou Have 2 Options:\n\t1 - BUY ALL OF THE HOSTELS WITH ONE CLICK (YOU WILL NEED 81.000$)\n\t2 - BUY A HOSTELS BY YOURSELF\n\t";
			int ch;
			cin >> ch;
			if (ch == 1 && Balance >= 81000 && Bought_Hostel1 == false && Bought_Hostel2 == false && Bought_Hostel3 == false && Bought_Hostel4 == false && Bought_Hostel5 == false) {
				Balance = Balance - price1 - price2 - price3 - price4 - price5;
				system("CLS");
				cout << "\n\tYou Have Successfully Bought All Of The Hostels!";
				cout << "\n\tInformation About Your Hostels: \n";

				hostel1();
				cout << endl;
				hostel22();
				cout << endl;
				hostel3();
				cout << endl;
				hostel44();
				cout << endl;
				hostel5();
				cout << endl;

				cout << "\n\tWant To Rent All Of Them? (Y/N): ";

				char choice11;
				cin >> choice11;
				if (choice11 == 'Y' || choice11 == 'y') {
					Income = Income + 16400;

					Bought_Hostel1 = true;
					Bought_Hostel2 = true;
					Bought_Hostel3 = true;
					Bought_Hostel4 = true;
					Bought_Hostel5 = true;

					cout << "\n\tYour Income Per Month: 16400$";
					return Income;
					return Bought_Hostel1;
					return Balance;
				}
				else if (choice11 == 'N' || choice11 == 'n') {
					cout << "\n\t1 - Return To The Hostel Market";
					int choice;
					cin >> choice;
					if (choice == 1) {
						goto market;
					}
					else {
						cout << "\n\tWrong Input!";
					}
				}
			}
			else if (ch == 2) {
				cout << "\n\tWhich Hostel You Want To Buy?: ";
				int choice;
				cin >> choice;

				if (choice == 1 && Balance >= price1 && Bought_Hostel1 == false) {
					system("CLS");

					Balance = Balance - price1;

					cout << "\n\tYou Have Successfully Bought A Hostel In Sergeli";
					cout << "\n\tInformation About Your Hostel: \n";

					hostel1();
					cout << endl;

					cout << "\n\tWant To Rent It? (Y/N): ";

					char choice10;
					cin >> choice10;
					if (choice10 == 'Y' || choice10 == 'y') {
						Income = Income + 1000;
						Bought_Hostel1 = true;
						cout << "\n\tYour Income Per Month: 1000$";
						return Income;
						return Bought_Hostel1;
						return Balance;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hostel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 2 && Balance >= price2 && Bought_Hostel2 == false) {
					system("CLS");
					Balance = Balance - price2;
					Bought_Hostel2 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Shayhontohur";
					cout << "\n\tInformation About Your Hostel: \n";

					hostel22();
					cout << endl;
					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						Income = Income + 1200;

						cout << "\n\tYour Income Per Month: 1200$";
						return Bought_Hostel2;
						return Balance;
						return Income;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hostel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 3 && Balance >= price3 && Bought_Hostel3 == false) {
					system("CLS");
					Balance = Balance - price3;
					Bought_Hostel3 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Yashnabad";
					cout << "\n\tInformation About Your Hostel: \n";

					hostel3();
					cout << endl;

					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						Income = Income + 1800;

						cout << "\n\tYour Income Per Month: 1800$";
						return Balance;
						return Income;
						return Bought_Hostel3;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hostel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 4 && Balance >= price4 && Bought_Hostel4 == false) {
					system("CLS");
					Balance = Balance - price4;
					Bought_Hostel4 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Mirzo-Ulugbek";
					cout << "\n\tInformation About Your Hostel: \n";

					hostel44();
					cout << endl;

					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						cout << "\n\tYour Income Per Month: 2400$";
						Income = Income + 2400;
						return Income;
						return Balance;
						return Bought_Hostel4;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hostel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 5 && Balance >= price5 && Bought_Hostel5 == false) {
					system("CLS");
					Balance = Balance - price5;
					Bought_Hostel5 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Yunusabad";
					cout << "\n\tInformation About Your Hostel: \n";

					hostel5();
					cout << endl;

					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						cout << "\n\tYour Income Per Month: 10000$";
						Income = Income + 10000;
						return Income;
						return Balance;
						return Bought_Hostel5;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hostel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else {
					cout << "\n\tYou Have Already Bought That Hostel Or Your Money Is Insufficient!" << endl;
				}
			}
			else {
				cout << "\n\tWrong Input!";
			}
		}
	}

	void Incomes1() {
		system("CLS");
		if (Income >= 0) {
			cout << "\n\tYour Income Per Month After Deducting Salaries: " << Income << "$";
			cout << "\n\n\tMonthly Expenses For Employees: " << Income_With_Staff << "$";
		}
		else if (Income < 0) {
			cout << "\n\tYour Expenditure Per Month: " << Income << "$";
			cout << "\n\n\tMonthly Expenses For Employees: " << Income_With_Staff << "$";
		}
	}

	void Hostels_You_Own() {
		system("CLS");
		cout << "\n\tYou Own: ";
		if (Bought_Hostel1 == true) {
			int price1;
			price1 = 4000;
			cout << "\n\t1 - HOSTEL IN SERGELI:";
			cout << "\n\tLocation: Street Jahonaro";
			cout << "\n\tFloors: 2";
			cout << "\n\tRooms In Each Floor: 3";
			cout << "\n\tPrice: " << price1 << "$";
			cout << endl << endl;

			if (Bought_Hostel2 == true) {
				int price2;
				price2 = 6000;
				cout << "\n\t2 - HOSTEL IN SHAYHONTOHUR:";
				cout << "\n\tLocation: Street Navruz";
				cout << "\n\tFloors: 3";
				cout << "\n\tRooms In Each Floor: 5";
				cout << "\n\tPrice: " << price2 << "$";
				cout << endl << endl;

				if (Bought_Hostel3 == true) {
					int price3;
					price3 = 9000;
					cout << "\n\t3 - HOSTEL IN YASHANABAD:";
					cout << "\n\tLocation: Street Amir Temur";
					cout << "\n\tFloors: 4";
					cout << "\n\tRooms In Each Floor: 7";
					cout << "\n\tPrice: " << price3 << "$";
					cout << endl << endl;

					if (Bought_Hostel4 == true) {
						int price4;
						price4 = 12000;
						cout << "\n\t4 - HOSTEL IN Mirzo-Ulugbek:";
						cout << "\n\tLocation: Street Ziyolilar";
						cout << "\n\tFloors: 5";
						cout << "\n\tRooms In Each Floor: 9";
						cout << "\n\tPrice: " << price4 << "$";
						cout << endl << endl;

						if (Bought_Hostel5 == true) {
							int price5;
							price5 = 50000;
							cout << "\n\t5 - HOSTEL IN Yunusabad:";
							cout << "\n\tLocation: Street Registan";
							cout << "\n\tFloors: 10";
							cout << "\n\tRooms In Each Floor: 20";
							cout << "\n\tPrice: " << price5 << "$";
							cout << endl << endl;
						}
					}
				}
			}
		}
		else {
			cout << "\n\tYou Don't Own Any Hostels!";
		}
	}

	double Take_Money() {
		system("CLS");
		cout << "\n\n\tWARNING! IF CLIENT SATISFACTION FAILS TO -1, THE GAME WOULD BE OVER!";
		cout << "\n\tTO INCREASE CLIENT SATISFACTION YOU SHOULD HIRE EMPLOYEES!";
		cout << "\n\tONCE YOU HIRE ALL OF THE EMPLOYEES, LVL OF SATISFACTION WILL BE ALWAYS 10";
		cout << "\n\tIF YOU WILL HAVE 5 WARNINGS, YOUR LVL OF CLIENT SATISFACTION WILL DECREASE TO 1";
		cout << "\n\tEACH TIME YOU COLLECT YOUR MONEY, QUANTITY OF WARNINGS WILL INCREASE TO 1!";
		cout << "\n\n\tWARNINGS: " << Warning;
		cout << "\n\tSATISFACTION LVL: " << Clients_Happiness;

		if (Income < 0) {
			cout << "\n\tPRESS 1 - PAY SALARIES (NO PROFIT THIS MONTH): " << Income << "$";
			int c;
			cout << "\n\t";
			cin >> c;
			if (c == 1) {
				cout << "\n\tYOU HAVE SUCCESSFULLY PAID EMPLOYEES SALARIES!";
				cout << "\n\tYour Balance: " << Balance + Income << "$";
				if (Clients_Happiness == 10) {
					Balance = Balance + Income;
					return Balance;
				}
				else if (Clients_Happiness != 10) {
					Balance = Balance + Income;
					Warning = Warning + 1;
					if (Warning == 5) {
						Clients_Happiness = Clients_Happiness - 1;
						Warning = 0;
						return Warning;
						return Clients_Happiness;
					}
				}
				return Warning;
				return Balance;
			}
			else {
				cout << "\n\tWrong Input!";
			}
		}
		else if (Income >= 0) {
			cout << "\n\n\tPRESS 1 - COLLECT MONEY (" << Income << "$)";
			cout << "\n\t";
			int ch;
			cin >> ch;
			if (Clients_Happiness == 10) {
				if (ch == 1 && Bought_Hostel1 == true) {
					Balance = Balance + Income;
					cout << "\n\tYou Have Successfully Collected Your Money!";
					cout << "\n\tYour Balance: " << Balance << "$";
					return Balance;
				}
				else {
					cout << "\n\tYou Don't Have A Money To Collect!";
				}
			}
			else if (Clients_Happiness != 10) {
				if (ch == 1 && Bought_Hostel1 == true) {
					Balance = Balance + Income;
					cout << "\n\tYou Have Successfully Collected Your Money!";
					cout << "\n\tYour Balance: " << Balance << "$";
					Warning = Warning + 1;
					if (Warning == 5) {
						Clients_Happiness = Clients_Happiness - 1;
						Warning = 0;
						return Warning;
						return Clients_Happiness;
					}
					return Warning;
					return Balance;
				}
				else {
					cout << "\n\tYou Don't Have A Money To Collect!";
				}
			}
		}
	}

	double Order_Advertisment() {
		system("CLS");
		int price1 = 65000;
		int price2 = 80000;
		int price3 = 150000;
		cout << "\n\tHere You Can Order An Advertisment To Increase The Amount Of The Clients!";
		cout << "\n\tREMEMBER, YOU CAN ORDER AN ADVERTISMENT ONLY ONCE FOR EACH COMPANY!";
		cout << "\n\n\tFrom Which Company You Want To Order An Advertisment?";
		if (Ordered_Advertisment_Meta == false && Ordered_Advertisment_Instagram == false && Ordered_Advertisment_Google == false) {
			cout << "\n\t1 - META (ESTIMATED INCOME GROWTH x1.2) - 65.000$";
			cout << "\n\t2 - INSTAGRAM (ESTIMATED INCOME GROWTH x1.3) - 80.000$";
			cout << "\n\t3 - GOOGLE (ESTIMATED INCOME GROWTH x1.5) - 150.000$";
			cout << "\n\t";
		}
		else if (Ordered_Advertisment_Meta == true && Ordered_Advertisment_Instagram == false && Ordered_Advertisment_Google == false) {
			cout << "\n\t2 - INSTAGRAM (ESTIMATED INCOME GROWTH x1.3) - 80.000$";
			cout << "\n\t3 - GOOGLE (ESTIMATED INCOME GROWTH x1.5) - 150.000$";
			cout << "\n\t";
		}
		else if (Ordered_Advertisment_Meta == true && Ordered_Advertisment_Instagram == true && Ordered_Advertisment_Google == false) {
			cout << "\n\t3 - GOOGLE (ESTIMATED INCOME GROWTH x1.5) - 150.000$";
			cout << "\n\t";
		}
		else if (Ordered_Advertisment_Meta == false && Ordered_Advertisment_Instagram == true && Ordered_Advertisment_Google == false) {
			cout << "\n\t1 - META (ESTIMATED INCOME GROWTH x1.2) - 65.000$";
			cout << "\n\t3 - GOOGLE (ESTIMATED INCOME GROWTH x1.5) - 150.000$";
			cout << "\n\t";
		}
		else if (Ordered_Advertisment_Meta == false && Ordered_Advertisment_Instagram == false && Ordered_Advertisment_Google == true) {
			cout << "\n\t1 - META (ESTIMATED INCOME GROWTH x1.2) - 65.000$";
			cout << "\n\t2 - INSTAGRAM (ESTIMATED INCOME GROWTH x1.3) - 80.000$";
			cout << "\n\t";
		}
		else if (Ordered_Advertisment_Meta == false && Ordered_Advertisment_Instagram == true && Ordered_Advertisment_Google == true) {
			cout << "\n\t1 - META (ESTIMATED INCOME GROWTH x1.2) - 65.000$";
			cout << "\n\t";
		}
		else if (Ordered_Advertisment_Meta == true && Ordered_Advertisment_Instagram == true && Ordered_Advertisment_Google == true) {
			cout << "\n\tNO COMPANIES LEFT TO ORDER AN ADVERTISEMENT!";
		}

		if (Ordered_Advertisment_Meta == false || Ordered_Advertisment_Instagram == false || Ordered_Advertisment_Google == false) {
			int choice;
			cin >> choice;
			if (choice == 1 && Balance >= price1 && Ordered_Advertisment_Meta == false) {
				cout << "\n\n\tYOU HAVE SUCCESSFULLY ORDERED AN ADVERTISMENT FROM META. YOUR CURRENT INCOME IS: " << Income * 1.2 << "$";
				Balance = Balance - price1;
				Income = Income * 1.2;
				Ordered_Advertisment_Meta = true;
				return Ordered_Advertisment_Meta;
				return Balance;
				return Income;
			}
			else if (choice == 2 && Balance >= price2 && Ordered_Advertisment_Instagram == false) {
				cout << "\n\n\tYOU HAVE SUCCESSFULLY ORDERED AN ADVERTISMENT FROM INSTAGRAM. YOUR CURRENT INCOME IS: " << Income * 1.3 << "$";
				Balance = Balance - price2;
				Ordered_Advertisment_Instagram = true;
				Income = Income * 1.3;
				return Balance;
				return Ordered_Advertisment_Instagram;
				return Income;
			}
			else if (choice == 3 && Balance >= price3 && Ordered_Advertisment_Google == false) {
				cout << "\n\n\tYOU HAVE SUCCESSFULLY ORDERED AN ADVERTISMENT FROM GOOGLE. YOUR CURRENT INCOME IS: " << Income * 1.5 << "$";
				Balance = Balance - price3;
				Income = Income * 1.5;
				Ordered_Advertisment_Google = true;
				return Ordered_Advertisment_Google;
				return Balance;
				return Income;
			}
			else {
				cout << "\n\tYou Have Already Ordered An Advertisment From This Company Or Your Money Is Insufficient!";
			}
		}
	}

	double Open_New_Locations() {
		system("CLS");
		if (Opened_Region1 == false) {
			cout << "\n\tTo Open A New Location You Must Buy All Hostels In Your Region!";
			cout << "\n\tYou Must Pay 100.000$ To Unlock A New Region";
			cout << "\n\n\n\t\t\tPRESS 1 TO UNLOCK A NEW REGION";
			int ch;
			cout << "\n\t\t\t";
			cin >> ch;
			if (ch == 1 && Bought_Hostel1 == true && Bought_Hostel2 == true && Bought_Hostel3 == true && Bought_Hostel4 == true && Bought_Hostel5 == true && Balance >= 100000) {
				system("CLS");

				cout << "\n\tNOW THERE ARE SOME NEW HOTELS AVAILABLE! ALSO, YOU WOULD BE ABLE TO UPGRADE THEM\n\tEACH OF THE HOTEL WILL HAVE ITS STARS BY HIS FAME\n";
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
				cout << "\n\t11 - BUY HOTELS";
				cout << "\n\t12 - SEE YOUR HOTELS";
				cout << "\n\t13 - UPGRADE YOUR HOTELS";
				cout << "\n\t14 - GO TO CLIENT PART";
				
				Balance = Balance - 100000;
				return Opened_Region1 = true;
				return Balance;
			}
			else {
				cout << "\n\n\tYOU DONT SATISSFY THE REQUIREMENT!" << endl;	
				cout << "\tPRESS 0 - RETURN TO MENU: ";
			}
		}
		else if (Opened_Region1 == true) {
			system("CLS");
			cout << "\n\tNOW THERE ARE SOME NEW HOTELS AVAILABLE! ALSO, YOU WOULD BE ABLE TO UPGRADE THEM\n\tEACH OF THE HOTEL WILL HAVE ITS STARS BY HIS FAME\n";
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
			cout << "\n\t11 - BUY HOTELS";
			cout << "\n\t12 - SEE YOUR HOTELS";
			cout << "\n\t13 - UPGRADE YOUR HOTELS";
		}
	}

	void hotel1() {
		int price1;
		price1 = 120000;
		cout << "\n\t1 - HOTEL IN MANGUMERI";
		cout << "\n\tSTARS: " << Hotel_Star1;
		cout << "\n\tLocation: Street Mangu 5";
		cout << "\n\tFloors: 12";
		cout << "\n\tRooms In Each Floor: 8";
		cout << "\n\tPrice: " << price1 << "$";
		cout << "\n\tRent Income: " << Rent1 << "$";
	}

	void hotel22() {
		int price1;
		price1 = 180000;
		cout << "\t\t\t\t2 - HOTEL IN ESPADA";
		cout << "\n\t\t\t\t\t\t\tSTARS: " << Hotel_Star2;
		cout << "\n\t\t\t\t\t\t\tLocation: Street Espada 7";
		cout << "\n\t\t\t\t\t\t\tFloors: 16";
		cout << "\n\t\t\t\t\t\t\tRooms In Each Floor: 12";
		cout << "\n\t\t\t\t\t\t\tPrice: " << price1 << "$";
		cout << "\n\t\t\t\t\t\t\tRent Income: 26.000$";
	}

	void hotel2() {
		int price1;
		price1 = 180000;
		cout << "\n\t2 - HOTEL IN ESPADA";
		cout << "\n\tSTARS: " << Hotel_Star2;
		cout << "\n\tLocation: Street Espada 7";
		cout << "\n\tFloors: 16";
		cout << "\n\tRooms In Each Floor: 12";
		cout << "\n\tPrice: " << price1 << "$";
		cout << "\n\tRent Income: " << Rent2 << "$";
	}

	void hotel3() {
		int price1;
		price1 = 240000;
		cout << "\n\t3 - HOTEL IN GOTEI";
		cout << "\n\tSTARS: " << Hotel_Star3;
		cout << "\n\tLocation: Street Gotei 13";
		cout << "\n\tFloors: 20";
		cout << "\n\tRooms In Each Floor: 16";
		cout << "\n\tPrice: " << price1 << "$";
		cout << "\n\tRent Income: " << Rent3 << "$";
	}

	void hotel44() {
		int price1;
		price1 = 320000;
		cout << "\t\t\t\t4 - HOTEL IN RIXOS";
		cout << "\n\t\t\t\t\t\t\tSTARS: " << Hotel_Star4;
		cout << "\n\t\t\t\t\t\t\tLocation: Street Rixos 18";
		cout << "\n\t\t\t\t\t\t\tFloors: 26";
		cout << "\n\t\t\t\t\t\t\tRooms In Each Floor: 22";
		cout << "\n\t\t\t\t\t\t\tPrice: " << price1 << "$";
		cout << "\n\t\t\t\t\t\t\tRent Income: 38.000$";
	}

	void hotel4() {
		int price1;
		price1 = 320000;
		cout << "\n\t4 - HOTEL IN RIXOS";
		cout << "\n\tSTARS: " << Hotel_Star4;
		cout << "\n\tLocation: Street Rixos 18";
		cout << "\n\tFloors: 26";
		cout << "\n\tRooms In Each Floor: 22";
		cout << "\n\tPrice: " << price1 << "$";
		cout << "\n\tRent Income: " << Rent4 << "$";
	}

	void hotel5() {
		int price1;
		price1 = 940000;
		cout << "\n\t5 - HOTEL IN RUBLEVKA";
		cout << "\n\tSTARS: " << Hotel_Star5;
		cout << "\n\tLocation: Street Rublevka 777";
		cout << "\n\tFloors: 45";
		cout << "\n\tRooms In Each Floor: 48";
		cout << "\n\tPrice: " << price1 << "$";
		cout << "\n\tRent Income: " << Rent5 << "$";
	}

	double Buy_Region1_Hotels() {
	market:

		system("CLS");

		if (Bought_Hotel1 == true) {
			system("CLS");
			hotel2();
			cout << endl;
			hotel3();
			cout << endl;
			hotel4();
			cout << endl;
			hotel5();

			if (Bought_Hotel2 == true) {
				system("CLS");
				hotel3();
				cout << endl;
				hotel4();
				cout << endl;
				hotel5();

				if (Bought_Hotel3 == true) {
					system("CLS");
					hotel4();
					cout << endl;
					hotel5();

					if (Bought_Hotel4 == true) {
						system("CLS");
						hotel5();

						if (Bought_Hotel5 == true) {
							system("CLS");
							cout << "\n\n\tNO HOSTELS LEFT TO BUY!";
						}
					}
				}
			}
		}
		else if (Bought_Hotel1 == false && Bought_Hotel2 == false && Bought_Hotel3 == false && Bought_Hotel4 == false && Bought_Hotel5 == false) {
			cout << endl;
			hotel1();
			cout << endl;
			hotel2();
			cout << endl;
			hotel3();
			cout << endl;
			hotel4();
			cout << endl;
			hotel5();
		}
		else if (Bought_Hotel1 == true && Bought_Hotel2 == true && Bought_Hotel3 == true && Bought_Hotel4 == true && Bought_Hotel5 == true) {
			cout << "\n\n\tNO HOTELS LEFT TO BUY!";
		}

		cout << endl;

		double price1 = 120000;
		double price2 = 180000;
		double price3 = 240000;
		double price4 = 320000;
		double price5 = 940000;
		if (Bought_Hotel1 != true || Bought_Hotel2 != true || Bought_Hotel3 != true || Bought_Hotel4 != true || Bought_Hotel5 != true) {
			cout << "\n\n\tYou Have 2 Options:\n\t1 - BUY ALL OF THE HOSTELS WITH ONE CLICK (YOU WILL NEED 1.800.000$)\n\t2 - BUY A HOSTELS BY YOURSELF\n\t";
			int ch;
			cin >> ch;

			if (ch == 1 && Balance >= 1800000 && Bought_Hotel1 == false && Bought_Hotel2 == false && Bought_Hotel3 == false && Bought_Hotel4 == false && Bought_Hotel5 == false) {
				Balance = Balance - price1 - price2 - price3 - price4 - price5;
				system("CLS");
				cout << "\n\tYou Have Successfully Bought All Of The Hostels!";
				cout << "\n\tInformation About Your Hostels: \n";

				hotel1();
				cout << endl;
				hotel2();
				cout << endl;
				hotel3();
				cout << endl;
				hotel4();
				cout << endl;
				hotel5();
				cout << endl;

				cout << "\n\tWant To Rent All Of Them? (Y/N): ";

				char choice;
				cin >> choice;
				if (choice == 'Y' || choice == 'y') {
					Income = Income + 236000;

					Bought_Hotel1 = true;
					Bought_Hotel2 = true;
					Bought_Hotel3 = true;
					Bought_Hotel4 = true;
					Bought_Hotel5 = true;

					cout << "\n\tYour Income Per Month: " << Income << "$";
					return Income;
					return Bought_Hotel1;
					return Bought_Hotel2;
					return Bought_Hotel3;
					return Bought_Hotel4;
					return Bought_Hotel5;
					return Balance;
				}
			}
			else if (ch == 2) {
				cout << "\tWhich Hotel You Want To Buy?: ";
				int choice;
				cout << "\t";
				cin >> choice;

				if (choice == 1 && Balance >= price1 && Bought_Hotel1 == false) {
					system("CLS");

					Balance = Balance - price1;

					cout << "\n\tYou Have Successfully Bought A Hotel In Mangumeri";
					cout << "\n\tInformation About Your Hotel: \n";
					hotel1();

					cout << "\n\tWant To Rent It? (Y/N): ";

					char choice10;
					cin >> choice10;
					if (choice10 == 'Y' || choice10 == 'y') {
						Income = Income + 20000;
						Bought_Hotel1 = true;
						cout << "\n\tYour Income Per Month: " << Income << "$";
						return Income;
						return Bought_Hotel1;
						return Balance;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hotel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 2 && Balance >= price2 && Bought_Hotel2 == false) {
					system("CLS");
					Balance = Balance - price2;
					Bought_Hotel2 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Espada";
					cout << "\n\tInformation About Your Hotel: \n";
					hotel2();
					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						Income = Income + 26000;

						cout << "\n\tYour Income Per Month: " << Income << "$";
						return Bought_Hotel2;
						return Balance;
						return Income;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hotel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 3 && Balance >= price3 && Bought_Hotel3 == false) {
					system("CLS");
					Balance = Balance - price3;
					Bought_Hotel3 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Gotei";
					cout << "\n\tInformation About Your Hotel: \n";
					hotel3();
					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						Income = Income + 32000;

						cout << "\n\tYour Income Per Month: " << Income << "$";
						return Balance;
						return Income;
						return Bought_Hotel3;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hotel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 4 && Balance >= price4 && Bought_Hotel4 == false) {
					system("CLS");
					Balance = Balance - price4;
					Bought_Hotel4 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Gotei";
					cout << "\n\tInformation About Your Hotel: \n";
					hotel4();
					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						Income = Income + 38000;

						cout << "\n\tYour Income Per Month: " << Income << "$";
						return Balance;
						return Income;
						return Bought_Hotel4;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hotel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else if (choice == 5 && Balance >= price5 && Bought_Hotel5 == false) {
					system("CLS");
					Balance = Balance - price5;
					Bought_Hotel5 = true;

					cout << "\n\tYou Have Successfully Bought A Hostel In Gotei";
					cout << "\n\tInformation About Your Hotel: \n";
					hotel5();
					cout << "\n\tWant To Rent It? (Y/N): ";
					char choice;
					cin >> choice;
					if (choice == 'Y' || choice == 'y') {
						Income = Income + 120000;

						cout << "\n\tYour Income Per Month: " << Income << "$";
						return Balance;
						return Income;
						return Bought_Hotel5;
					}
					else if (choice == 'N' || choice == 'n') {
						cout << "\n\t1 - Return To The Hotel Market";
						int choice;
						cin >> choice;
						if (choice == 1) {
							goto market;
						}
						else {
							cout << "\n\tWrong Input!";
						}
					}
				}
				else {
					cout << "\n\tYou Have Already Bought That Hotel Or Your Money Is Insufficient!";
				}
			}
		}
	}

	void Hotels_You_Own() {
		system("CLS");
		cout << "\n\n\tYou Own: ";
		if (Bought_Hotel1 == true) {
			cout << endl;
			hotel1();
			cout << endl << endl;

			if (Bought_Hotel2 == true) {
				hotel2();
				cout << endl << endl;

				if (Bought_Hotel3 == true) {
					hotel3();
					cout << endl << endl;

					if (Bought_Hotel4 == true) {
						hotel4();
						cout << endl << endl;

						if (Bought_Hotel5 == true) {
							hotel5();
							cout << endl << endl;
						}
					}
				}
			}
		}
		else {
			cout << "\n\tYou Don't Own Any Hotels!";
		}
	}

	double Upgrade_Hotels() {
	upgrade_hotels:

		system("CLS");
		if (Bought_Hotel1 == true && Bought_Hotel2 == true && Bought_Hotel3 == true && Bought_Hotel4 == true && Bought_Hotel5 == true) {
			cout << "\n\tHERE YOU CAN UPGRADE YOUR HOTELS!";
			cout << "\n\n\tYOU HAVE 5 HOTELS, WHICH OF THEM YOU WANT TO UPGRADE?";
			cout << "\n\t(1) - " << Hotel_Star1 << " STARS (IN MANGUMERI) - 150.000$";
			cout << "\n\t(2) - " << Hotel_Star2 << " STARS (IN EPSADA) - 220.000$";
			cout << "\n\t(3) - " << Hotel_Star3 << " STARS (IN GOTEI) - 270.000$";
			cout << "\n\t(4) - " << Hotel_Star4 << " STARS (IN RIXOS) - 360.000$";
			cout << "\n\t(5) - " << Hotel_Star5 << " STARS (IN RUBLEVKA) - 1.150.000$";

			if (Upgrade_Hotel1 == false && Upgrade_Hotel2 == false && Upgrade_Hotel3 == false && Upgrade_Hotel4 == false && Upgrade_Hotel5 == false) {
				system("CLS");
				cout << "\n\tHERE YOU CAN UPGRADE YOUR HOTELS!";
				cout << "\n\n\tYOU HAVE 5 HOTELS, WHICH OF THEM YOU WANT TO UPGRADE?";
				cout << "\n\t(1) - " << Hotel_Star1 << " STARS (IN MANGUMERI) - 150.000$";
				cout << "\n\t(2) - " << Hotel_Star2 << " STARS (IN EPSADA) - 220.000$";
				cout << "\n\t(3) - " << Hotel_Star3 << " STARS (IN GOTEI) - 270.000$";
				cout << "\n\t(4) - " << Hotel_Star4 << " STARS (IN RIXOS) - 360.000$";
				cout << "\n\t(5) - " << Hotel_Star5 << " STARS (IN RUBLEVKA) - 1.150.000$";
			}

			if (Upgrade_Hotel1 == true) {
				system("CLS");
				cout << "\n\n\tYOU HAVE 4 HOTELS TO UPGRADE";
				cout << "\n\t(2) - " << Hotel_Star2 << " STARS (IN EPSADA) - 220.000$";
				cout << "\n\t(3) - " << Hotel_Star3 << " STARS (IN GOTEI) - 270.000$";
				cout << "\n\t(4) - " << Hotel_Star4 << " STARS (IN RIXOS) - 360.000$";
				cout << "\n\t(5) - " << Hotel_Star5 << " STARS (IN RUBLEVKA) - 1.150.000$";

				if (Upgrade_Hotel2 == true) {
					system("CLS");
					cout << "\n\n\tYOU HAVE 3 HOTELS TO UPGRADE";
					cout << "\n\t(3) - " << Hotel_Star3 << " STARS (IN GOTEI) - 270.000$";
					cout << "\n\t(4) - " << Hotel_Star4 << " STARS (IN RIXOS) - 360.000$";
					cout << "\n\t(5) - " << Hotel_Star5 << " STARS (IN RUBLEVKA) - 1.150.000$";

					if (Upgrade_Hotel3 == true) {
						system("CLS");
						cout << "\n\n\tYOU HAVE 2 HOTELS TO UPGRADE";
						cout << "\n\t(4) - " << Hotel_Star4 << " STARS (IN RIXOS) - 360.000$";
						cout << "\n\t(5) - " << Hotel_Star5 << " STARS (IN RUBLEVKA) - 1.150.000$";

						if (Upgrade_Hotel4 == true) {
							system("CLS");
							cout << "\n\n\tYOU HAVE 1 HOTEL TO UPGRADE";
							cout << "\n\t(5) - " << Hotel_Star5 << " STARS (IN RUBLEVKA) - 1.150.000$";

							if (Upgrade_Hotel5 == true) {
								system("CLS");
								cout << "\n\tNO HOTELS LEFT TO UPGRADE!";
							}
						}
					}
				}
			}

			if (Upgrade_Hotel1 == false || Upgrade_Hotel2 == false || Upgrade_Hotel3 == false || Upgrade_Hotel4 == false || Upgrade_Hotel5 == false) {
				int choice;
				cout << "\n\tPRESS 1 - UPGRADE ALL OF THE HOTELS INSTANTLY (YOU WILL NEED 2.150.000$)";
				cout << "\n\tPRESS 2 - UPGRADE HOTELS BY YOURSELF";
				cout << "\n\t";
				cin >> choice;
				if (choice == 1 && Upgrade_Hotel1 == false && Upgrade_Hotel2 == false && Upgrade_Hotel3 == false && Upgrade_Hotel4 == false && Upgrade_Hotel5 == false && Balance >= 2150000) {
					cout << "\n\tYOU HAVE SUCCESSFULLY UPGRADED ALL OF YOUR HOTELS!";
					Balance = Balance - 2150000;
					cout << "\n\tYour Balance: " << Balance - 2150000;

					Rent1 = Rent1 + 5000;
					Rent2 = Rent2 + 5000;
					Rent3 = Rent3 + 5000;
					Rent4 = Rent4 + 5000;
					Rent5 = Rent5 + 40000;

					Upgrade_Hotel1 = true;
					Upgrade_Hotel2 = true;
					Upgrade_Hotel3 = true;
					Upgrade_Hotel4 = true;
					Upgrade_Hotel5 = true;

					Hotel_Star1 = Hotel_Star1 + 1.0;
					Hotel_Star2 = Hotel_Star2 + 1.0;
					Hotel_Star3 = Hotel_Star3 + 1.0;
					Hotel_Star4 = Hotel_Star4 + 1.0;
					Hotel_Star5 = Hotel_Star5 + 2.0;

					Income = Income + 5000.0 + 5000.0 + 5000.0 + 5000.0 + 40000.0;

					return Rent1;
					return Rent2;
					return Rent3;
					return Rent4;
					return Rent5;

					return Hotel_Star1;
					return Hotel_Star2;
					return Hotel_Star3;
					return Hotel_Star4;
					return Hotel_Star5;

					return Income;

					return Upgrade_Hotel1;
					return Upgrade_Hotel2;
					return Upgrade_Hotel3;
					return Upgrade_Hotel4;
					return Upgrade_Hotel5;

					return Balance;
				}
				else if (choice == 2) {
					if (choice == 1 && Upgrade_Hotel1 == false) {
						system("CLS");
						hotel1();

						cout << "\n\n\tUPGRADE COSTS: 150.000$";
						cout << "\n\tAFTER THE UPGRADE YOUR HOTEL WOULD BE 3 STARS AND YOUR INCOME WILL GROW UP TO 25.000$";
						cout << "\n\tWant To Upgrade? (Y/N): ";
						char choice;
						cin >> choice;
						if (choice == 'Y' || choice == 'y') {
							cout << "\n\tYOU SUCCESSFULLY UPGRADED YOUR HOTEL!";

							Hotel_Star1 = Hotel_Star1 + 1.0;
							Income = Income + 5000.0;
							Upgrade_Hotel1 = true;
							Rent1 = Rent1 + 5000;

							return Rent1;
							return Hotel_Star1;
							return Income;
							return Upgrade_Hotel1;
						}
						else {
							cout << "\n\tYour Money Is Insufficient";
						}
					}
					else if (choice == 2 && Upgrade_Hotel2 == false) {
						system("CLS");
						hotel2();

						cout << "\n\n\tUPGRADE COSTS: 220.000$";
						cout << "\n\tAFTER THE UPGRADE YOUR HOTEL WOULD BE 4 STARS AND YOUR INCOME WILL GROW UP TO 30.000$";
						cout << "\n\tWant To Upgrade? (Y/N): ";
						char choice;
						cin >> choice;
						if (choice == 'Y' || choice == 'y') {
							cout << "\n\tYOU SUCCESSFULLY UPGRADED YOUR HOTEL!";

							Hotel_Star2 = Hotel_Star2 + 1.0;
							Income = Income + 5000.0;
							Upgrade_Hotel2 = true;
							Rent2 = Rent2 + 5000;

							return Rent2;
							return Hotel_Star2;
							return Income;
							return Upgrade_Hotel2;
						}
						else {
							cout << "\n\tYour Money Is Insufficient";
						}
					}
					else if (choice == 3 && Upgrade_Hotel3 == false) {
						system("CLS");
						hotel3();

						cout << "\n\n\tUPGRADE COSTS: 270.000$";
						cout << "\n\tAFTER THE UPGRADE YOUR HOTEL WOULD BE 5 STARS AND YOUR INCOME WILL GROW UP TO 36.000$";
						cout << "\n\tWant To Upgrade? (Y/N): ";
						char choice;
						cin >> choice;
						if (choice == 'Y' || choice == 'y') {
							cout << "\n\tYOU SUCCESSFULLY UPGRADED YOUR HOTEL!";

							Hotel_Star3 = Hotel_Star3 + 1.0;
							Income = Income + 5000.0;
							Upgrade_Hotel3 = true;
							Rent3 = Rent3 + 5000;

							return Rent3;
							return Hotel_Star3;
							return Income;
							return Upgrade_Hotel3;
						}
						else {
							cout << "\n\tYour Money Is Insufficient";
						}
					}
					else if (choice == 4 && Upgrade_Hotel4 == false) {
						system("CLS");
						hotel4();

						cout << "\n\n\tUPGRADE COSTS: 360.000$";
						cout << "\n\tAFTER THE UPGRADE YOUR HOTEL WOULD BE 6 STARS AND YOUR INCOME WILL GROW UP TO 43.000$";
						cout << "\n\tWant To Upgrade? (Y/N): ";
						char choice;
						cin >> choice;
						if (choice == 'Y' || choice == 'y') {
							cout << "\n\tYOU SUCCESSFULLY UPGRADED YOUR HOTEL!";

							Hotel_Star4 = Hotel_Star4 + 1.0;
							Income = Income + 5000.0;
							Upgrade_Hotel4 = true;
							Rent4 = Rent4 + 5000;

							return Rent4;
							return Hotel_Star4;
							return Income;
							return Upgrade_Hotel4;
						}
						else {
							cout << "\n\tYour Money Is Insufficient";
						}
					}
					else if (choice == 5 && Upgrade_Hotel5 == false) {
						system("CLS");
						hotel5();

						cout << "\n\n\tUPGRADE COSTS: 1.150.000$";
						cout << "\n\tAFTER THE UPGRADE YOUR HOTEL WOULD BE 9 STARS AND YOUR INCOME WILL GROW UP TO 160.000$";
						cout << "\n\tWant To Upgrade? (Y/N): ";
						char choice;
						cin >> choice;
						if (choice == 'Y' || choice == 'y') {
							cout << "\n\tYOU SUCCESSFULLY UPGRADED YOUR HOTEL!";

							Hotel_Star5 = Hotel_Star5 + 2.0;
							Income = Income + 40000.0;
							Upgrade_Hotel5 = true;
							Rent5 = Rent5 + 40000;

							return Rent5;
							return Hotel_Star5;
							return Income;
							return Upgrade_Hotel5;
						}
						else {
							cout << "\n\tYour Money Is Insufficient";
						}
					}
					else if (choice >= 6 && choice <= Infinity) {
						cout << "\n\tWrong Input!";
					}
					else if (!isdigit(choice)) {
						goto upgrade_hotels;
					}
					else {
						cout << "\n\tYOUR MONEY IS INSUFFICIENT OR YOU HAVE ALREADY UPGRADED YOUR HOTEL!";
					}
				}
			}
		}
		else {
			cout << "\n\tFirst, Buy All Of The Hotels!";
		}
	}

	double Client_Happiness() {
		system("CLS");
		cout << "\n\tBy This Scale You Can See The Satisfaction Of Your Clients By The Hostels/Hotels.";
		cout << "\n\tTo Increase The Satisfaction Of Your Clients, You Should Hire Maids And Cookers!";
		cout << "\n\tScale Is: (0 - 10)";
		cout << "\n\n\tSatisfaction: " << Clients_Happiness;
		if (Hired_Cooker1 == true && Hired_Cooker2 == true && Hired_Cooker3 == true && Hired_Cooker4 == true && Hired_Cooker5 == true && Hired_Maid1 == true && Hired_Maid2 == true && Hired_Maid3 == true && Hired_Maid4 == true && Hired_Maid5 == true) {
			cout << "\n\tYOUR SATISFACTION LVL IS: " << Clients_Happiness - Clients_Happiness + 10;
			Clients_Happiness = 10;
			return Clients_Happiness;
		}
	}

	double Hire_Employees() {
		system("CLS");

		class Staff : public virtual Owner {
		protected:
			string Name;
			int Skill;
			int Salary;
		};

		class Cooker : public virtual Staff, public virtual Owner {
		public:

			void Cooker1() {
				Skill = 1;
				Salary = 1000;
				Name = "John";

				cout << "\n\t1) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker2() {
				Skill = 2;
				Salary = 1500;
				Name = "Peter";

				cout << "\n\t2) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker3() {
				Skill = 3;
				Salary = 2000;
				Name = "Megan";

				cout << "\n\t3) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker4() {
				Skill = 4;
				Salary = 2500;
				Name = "Bella";

				cout << "\n\t4) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker5() {
				Skill = 5;
				Salary = 3000;
				Name = "James";

				cout << "\n\t5) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}
		};

		class Maid : public virtual Staff, public virtual Owner {
		public:

			void Maid1() {
				Skill = 1;
				Salary = 500;
				Name = "Vanessa";

				cout << "\n\t1) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid2() {
				Skill = 2;
				Salary = 750;
				Name = "Lili";

				cout << "\n\t2) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid3() {
				Skill = 3;
				Salary = 1000;
				Name = "Harry";

				cout << "\n\t3) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid4() {
				Skill = 4;
				Salary = 1250;
				Name = "Martin";

				cout << "\n\t4) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid5() {
				Skill = 1;
				Salary = 500;
				Name = "Sandrina";

				cout << "\n\t5) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}
		};

		cout << "\n\tHere You Can Hire Employees!";
		cout << "\n\t1 - COOKERS";
		cout << "\n\t2 - MAIDS";
		int choice1;
		cout << "\n\t";
		cin >> choice1;
		if (choice1 == 1) {
			system("CLS");
			cout << "\n\tThere Are Several Cookers Available:";
			Cooker c1;
			cout << endl << endl;

			if (Hired_Cooker1 == false && Hired_Cooker2 == false && Hired_Cooker3 == false && Hired_Cooker4 == false && Hired_Cooker5 == false) {
				c1.Cooker1();
				cout << endl;
				c1.Cooker2();
				cout << endl;
				c1.Cooker3();
				cout << endl;
				c1.Cooker4();
				cout << endl;
				c1.Cooker5();
				cout << endl;
			}

			if (Hired_Cooker1 == true) {
				system("CLS");
				c1.Cooker2();
				cout << endl;
				c1.Cooker3();
				cout << endl;
				c1.Cooker4();
				cout << endl;
				c1.Cooker5();
				cout << endl;

				if (Hired_Cooker2 == true) {
					system("CLS");
					c1.Cooker3();
					cout << endl;
					c1.Cooker4();
					cout << endl;
					c1.Cooker5();
					cout << endl;

					if (Hired_Cooker3 == true) {
						system("CLS");
						c1.Cooker4();
						cout << endl;
						c1.Cooker5();
						cout << endl;

						if (Hired_Cooker4 == true) {
							system("CLS");
							c1.Cooker5();
							cout << endl;

							if (Hired_Cooker5 == true) {
								system("CLS");
								cout << "\n\tNO COOKERS LEFT TO HIRE!";
							}
						}
					}
				}
			}

			if (Hired_Cooker1 == false || Hired_Cooker2 == false || Hired_Cooker3 == false || Hired_Cooker4 == false || Hired_Cooker5 == false) {
				cout << "\n\tWant To Hire All Of Them Instantly? - PRESS 1";
				cout << "\n\tWant To Hire Each Of Them By Your Self? - PRESS 2";
				int ch;
				cout << "\n\t";
				cin >> ch;
				if (ch == 1 && Balance >= 10000 && Hired_Cooker1 == false && Hired_Cooker2 == false && Hired_Cooker3 == false && Hired_Cooker4 == false && Hired_Cooker5 == false) {
					cout << "\n\tYOU HAVE SUCCESSFULLY HIRED ALL OF THE EMPLOYEES!";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 10000 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t\t\t\t\t\t\t\t\t\t---HIRED EMPLOYEES---";
					myfile << "\n\n\t1) NAME OF A COOKER: JOHN";
					myfile << "\n\t     SKILL LVL: 1";
					myfile << "\n\t     SALARY: 1000$";

					myfile << "\n\n\t2) NAME OF A COOKER: PETER";
					myfile << "\n\t     SKILL LVL: 2";
					myfile << "\n\t     SALARY: 1500$";

					myfile << "\n\n\t3) NAME OF A COOKER: MEGAN";
					myfile << "\n\t     SKILL LVL: 3";
					myfile << "\n\t     SALARY: 2000$";

					myfile << "\n\n\t4) NAME OF A COOKER: BELLA";
					myfile << "\n\t     SKILL LVL: 4";
					myfile << "\n\t     SALARY: 2500$";

					myfile << "\n\n\t5) NAME OF A COOKER: JAMES";
					myfile << "\n\t     SKILL LVL: 5";
					myfile << "\n\t     SALARY: 3000$";
					myfile.close();

					Income = Income - 10000;
					Income_With_Staff = Income_With_Staff + 10000;
					Hired_Cooker1 = true;
					Hired_Cooker2 = true;
					Hired_Cooker3 = true;
					Hired_Cooker4 = true;
					Hired_Cooker5 = true;
					Clients_Happiness = Clients_Happiness + 5;
					Balance = Balance - 10000;

					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Cooker1;
					return Hired_Cooker2;
					return Hired_Cooker3;
					return Hired_Cooker4;
					return Hired_Cooker5;
					return Income;
				}
				else if (ch == 2) {
					cout << "\n\tWhich One You Want To Hire?";
					cout << "\n\t";

					int choice2;
					cin >> choice2;
					if (choice2 == 1 && Balance >= 1000 && Hired_Cooker1 == false) {
						cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 1 COOKER";
						cout << "\n\tYour Income After Deducting Salaries: " << Income - 1000 << "$";

						ofstream myfile;
						myfile.open("EMPLOYEE_INFO.txt", ios::app);
						myfile << "\n\n\t" << Hired_Order << " - NAME OF A COOKER: JOHN";
						myfile << "\n\t    SKILL LVL: 1";
						myfile << "\n\t    SALARY: 1000$";
						myfile.close();

						Hired_Order = Hired_Order + 1;
						Income = Income - 1000;
						Income_With_Staff = Income_With_Staff + 1000;
						Hired_Cooker1 = true;
						Clients_Happiness = Clients_Happiness + 1;
						Balance = Balance - 1000;

						return Hired_Order;
						return Balance;
						return Clients_Happiness;
						return Income_With_Staff;
						return Hired_Cooker1;
						return Income;
					}
					else if (choice2 == 2 && Balance >= 1500 && Hired_Cooker2 == false) {
						cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 2 COOKER";
						cout << "\n\tYour Income After Deducting Salaries: " << Income - 1500 << "$";

						ofstream myfile;
						myfile.open("EMPLOYEE_INFO.txt", ios::app);
						myfile << "\n\n\t" << Hired_Order << " - NAME OF A COOKER : PETER";
						myfile << "\n\t    SKILL LVL: 2";
						myfile << "\n\t    SALARY: 1500$";
						myfile.close();

						Income = Income - 1500;
						Income_With_Staff = Income_With_Staff + 1500;
						Hired_Cooker2 = true;
						Clients_Happiness = Clients_Happiness + 1;
						Balance = Balance - 1500;
						Hired_Order = Hired_Order + 1;

						return Hired_Order;
						return Balance;
						return Clients_Happiness;
						return Income_With_Staff;
						return Hired_Cooker2;
						return Income;
					}
					else if (choice2 == 3 && Balance >= 2000 && Hired_Cooker3 == false) {
						cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 3 COOKER";
						cout << "\n\tYour Income After Deducting Salaries: " << Income - 2000 << "$";

						ofstream myfile;
						myfile.open("EMPLOYEE_INFO.txt", ios::app);
						myfile << "\n\n\t" << Hired_Order << " - NAME OF A COOKER: MEGAN";
						myfile << "\n\t    SKILL LVL: 3";
						myfile << "\n\t    SALARY: 2000$";
						myfile.close();

						Income = Income - 2000;
						Income_With_Staff = Income_With_Staff + 2000;
						Hired_Cooker3 = true;
						Clients_Happiness = Clients_Happiness + 1;
						Balance = Balance - 2000;
						Hired_Order = Hired_Order + 1;

						return Hired_Order;
						return Balance;
						return Clients_Happiness;
						return Income_With_Staff;
						return Hired_Cooker3;
						return Income;
					}
					else if (choice2 == 4 && Balance >= 2500 && Hired_Cooker4 == false) {
						cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 4 COOKER";
						cout << "\n\tYour Income After Deducting Salaries: " << Income - 2500 << "$";

						ofstream myfile;
						myfile.open("EMPLOYEE_INFO.txt", ios::app);
						myfile << "\n\n\t" << Hired_Order << "- NAME OF A COOKER: BELLA";
						myfile << "\n\t    SKILL LVL: 4";
						myfile << "\n\t    SALARY: 2500$";
						myfile.close();

						Income = Income - 2500;
						Income_With_Staff = Income_With_Staff + 2500;
						Hired_Cooker4 = true;
						Clients_Happiness = Clients_Happiness + 1;
						Balance = Balance - 2500;
						Hired_Order = Hired_Order + 1;

						return Hired_Order;
						return Balance;
						return Clients_Happiness;
						return Income_With_Staff;
						return Hired_Cooker4;
						return Income;
					}
					else if (choice2 == 5 && Balance >= 3000 && Hired_Cooker5 == false) {
						cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 5 COOKER";
						cout << "\n\tYour Income After Deducting Salaries: " << Income - 3000 << "$";

						ofstream myfile;
						myfile.open("EMPLOYEE_INFO.txt", ios::app);
						myfile << "\n\n\t" << Hired_Order << " - NAME OF A COOKER: JAMES";
						myfile << "\n\t    SKILL LVL: 5";
						myfile << "\n\t    SALARY: 3000$";
						myfile.close();

						Income = Income - 3000;
						Income_With_Staff = Income_With_Staff + 3000;
						Hired_Cooker5 = true;
						Clients_Happiness = Clients_Happiness + 1;
						Balance = Balance - 3000;
						Hired_Order = Hired_Order + 1;

						return Hired_Order;
						return Balance;
						return Clients_Happiness;
						return Income_With_Staff;
						return Hired_Cooker5;
						return Income;
					}
					else {
						cout << "\n\tInsufficient Money To Pay For A Cooker Or You Have Already Hired This Cooker!";
					}
				}
			}
		}
		else if (choice1 == 2) {
			system("CLS");
			cout << "\n\tThere Are Several Maids Available:";
			Maid m1;
			cout << endl << endl;

			if (Hired_Maid1 == false && Hired_Maid2 == false && Hired_Maid3 == false && Hired_Maid4 == false && Hired_Maid5 == false) {
				m1.Maid1();
				cout << endl;
				m1.Maid2();
				cout << endl;
				m1.Maid3();
				cout << endl;
				m1.Maid4();
				cout << endl;
				m1.Maid5();
				cout << endl;
			}

			if (Hired_Maid1 == true) {
				system("CLS");
				m1.Maid2();
				cout << endl;
				m1.Maid3();
				cout << endl;
				m1.Maid4();
				cout << endl;
				m1.Maid5();
				cout << endl;

				if (Hired_Maid2 == true) {
					system("CLS");
					m1.Maid3();
					cout << endl;
					m1.Maid4();
					cout << endl;
					m1.Maid5();
					cout << endl;

					if (Hired_Maid3 == true) {
						system("CLS");
						m1.Maid4();
						cout << endl;
						m1.Maid5();
						cout << endl;

						if (Hired_Maid4 == true) {
							system("CLS");
							m1.Maid5();
							cout << endl;

							if (Hired_Maid5 == true) {
								system("CLS");
								cout << "\n\tNO MAIDS LEFT TO HIRE!";
							}
						}
					}
				}
			}

			if (Hired_Maid1 == false || Hired_Maid2 == false || Hired_Maid3 == false || Hired_Maid4 == false || Hired_Maid5 == false) {
				cout << "\n\tWant To Hire All Of Them Instantly? - PRESS 1";
				cout << "\n\tWant To Hire Each Of Them By Your Self? - PRESS 2";
				int ch;
				cout << "\n\t";
				cin >> ch;
				if (ch == 1 && Balance >= 5000 && Hired_Maid1 == false && Hired_Maid2 == false && Hired_Maid3 == false && Hired_Maid4 == false && Hired_Maid5 == false) {
					cout << "\n\tYOU HAVE SUCCESSFULLY HIRED ALL OF THE EMPLOYEES!";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 5000 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t1) NAME OF A MAID: VANESSA";
					myfile << "\n\t     SKILL LVL: 1";
					myfile << "\n\t     SALARY: 500$";

					myfile << "\n\n\t2) NAME OF A MAID: LILI";
					myfile << "\n\t     SKILL LVL: 2";
					myfile << "\n\t     SALARY: 750$";

					myfile << "\n\n\t3) NAME OF A MAID: HARRY";
					myfile << "\n\t     SKILL LVL: 3";
					myfile << "\n\t     SALARY: 1000$";

					myfile << "\n\n\t4) NAME OF A MAID: MARTIN";
					myfile << "\n\t     SKILL LVL: 4";
					myfile << "\n\t     SALARY: 1250$";

					myfile << "\n\n\t5) NAME OF A MAID: SANDRINA";
					myfile << "\n\t     SKILL LVL: 5";
					myfile << "\n\t     SALARY: 1500$";
					myfile.close();

					Income = Income - 5000;
					Income_With_Staff = Income_With_Staff + 5000;
					Hired_Maid1 = true;
					Hired_Maid2 = true;
					Hired_Maid3 = true;
					Hired_Maid4 = true;
					Hired_Maid5 = true;
					Clients_Happiness = Clients_Happiness + 5;
					Balance = Balance - 5000;

					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Maid1;
					return Hired_Maid2;
					return Hired_Maid3;
					return Hired_Maid4;
					return Hired_Maid5;
					return Income;
				}

				cout << "\n\tWhich One You Want To Hire?";
				cout << "\n\t";
				int choice2;
				cin >> choice2;
				if (choice2 == 1 && Balance >= 500 && Hired_Maid1 == false) {
					cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 1 MAID";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 500 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t" << Hired_Order << " - NAME OF A MAID: VANESSA";
					myfile << "\n\t    SKILL LVL: 1";
					myfile << "\n\t    SALARY: 500$";
					myfile.close();

					Income = Income - 500;
					Income_With_Staff = Income_With_Staff + 500;
					Hired_Maid1 = true;
					Clients_Happiness = Clients_Happiness + 1;
					Balance = Balance - 500;
					Hired_Order = Hired_Order + 1;

					return Hired_Order;
					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Maid1;
					return Income;
				}
				else if (choice2 == 2 && Balance >= 750 && Hired_Maid2 == false) {
					cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 2 MAID";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 750 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t" << Hired_Order << " - NAME OF A MAID : LILI";
					myfile << "\n\t    SKILL LVL: 2";
					myfile << "\n\t    SALARY: 750$";
					myfile.close();

					Income = Income - 750;
					Income_With_Staff = Income_With_Staff + 750;
					Hired_Maid2 = true;
					Clients_Happiness = Clients_Happiness + 1;
					Balance = Balance - 750;
					Hired_Order = Hired_Order + 1;

					return Hired_Order;
					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Maid2;
					return Income;
				}
				else if (choice2 == 3 && Balance >= 1000 && Hired_Maid3 == false) {
					cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 3 MAID";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 1000 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t" << Hired_Order << " - NAME OF A MAID: HARRY";
					myfile << "\n\t    SKILL LVL: 3";
					myfile << "\n\t    SALARY: 1000$";
					myfile.close();

					Income = Income - 1000;
					Income_With_Staff = Income_With_Staff + 1000;
					Hired_Maid3 = true;
					Clients_Happiness = Clients_Happiness + 1;
					Balance = Balance - 1000;
					Hired_Order = Hired_Order + 1;

					return Hired_Order;
					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Maid3;
					return Income;
				}
				else if (choice2 == 4 && Balance >= 1250 && Hired_Maid4 == false) {
					cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 4 MAID";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 1250 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t" << Hired_Order << " - NAME OF A MAID: MARTIN";
					myfile << "\n\t    SKILL LVL: 4";
					myfile << "\n\t    SALARY: 1250$";
					myfile.close();

					Balance = Balance - 1250;
					Income = Income - 1250;
					Income_With_Staff = Income_With_Staff + 1250;
					Hired_Maid4 = true;
					Clients_Happiness = Clients_Happiness + 1;
					Hired_Order = Hired_Order + 1;

					return Hired_Order;
					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Maid4;
					return Income;
				}
				else if (choice2 == 5 && Balance >= 1500 && Hired_Maid5 == false) {
					cout << "\n\n\tYOU HAVE SUCCESSFULLY HIRED A LVL 5 MAID";
					cout << "\n\tYour Income After Deducting Salaries: " << Income - 1500 << "$";

					ofstream myfile;
					myfile.open("EMPLOYEE_INFO.txt", ios::app);
					myfile << "\n\n\t" << Hired_Order << " - NAME OF A MAID: SANDRINA";
					myfile << "\n\t    SKILL LVL: 5";
					myfile << "\n\t    SALARY: 1500$";
					myfile.close();

					Balance = Balance - 1500;
					Income = Income - 1500;
					Income_With_Staff = Income_With_Staff + 1500;
					Hired_Maid5 = true;
					Clients_Happiness = Clients_Happiness + 1;
					Hired_Order = Hired_Order + 1;

					return Hired_Order;
					return Balance;
					return Clients_Happiness;
					return Income_With_Staff;
					return Hired_Maid5;
					return Income;
				}
				else {
					cout << "\n\tInsufficient Money To Pay For A Maid Or You Have Already Hired This Maid!";
				}
			}
		}
	}
	
	void Employees() {
		system("CLS");
		class Staff : public virtual Owner {
		protected:
			string Name;
			int Skill;
			int Salary;
		};
		class Cooker : public virtual Staff, public virtual Owner {
		public:

			void Cooker1() {
				Skill = 1;
				Salary = 1000;
				Name = "John";

				cout << "\n\t1) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker2() {
				Skill = 2;
				Salary = 1500;
				Name = "Peter";

				cout << "\n\t2) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker3() {
				Skill = 3;
				Salary = 2000;
				Name = "Megan";

				cout << "\n\t3) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker4() {
				Skill = 4;
				Salary = 2500;
				Name = "Bella";

				cout << "\n\t4) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}

			void Cooker5() {
				Skill = 5;
				Salary = 3000;
				Name = "James";

				cout << "\n\t5) Name Of A Cooker: " << Name;
				cout << "\n\tSkill Of A Cooker: " << Skill;
				cout << "\n\tSalary Of A Cooker: " << Salary << "$ Per Month";
			}
		};
		class Maid : public virtual Staff, public virtual Owner {
		public:

			void Maid1() {
				Skill = 1;
				Salary = 500;
				Name = "Vanessa";

				cout << "\n\t1) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid2() {
				Skill = 2;
				Salary = 750;
				Name = "Lili";

				cout << "\n\t2) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid3() {
				Skill = 3;
				Salary = 1000;
				Name = "Harry";

				cout << "\n\t3) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid4() {
				Skill = 4;
				Salary = 1250;
				Name = "Martin";

				cout << "\n\t4) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}

			void Maid5() {
				Skill = 1;
				Salary = 500;
				Name = "Sandrina";

				cout << "\n\t5) Name Of A Maid: " << Name;
				cout << "\n\tSkill Of A Maid: " << Skill;
				cout << "\n\tSalary Of A Maid: " << Salary;
			}
		};

		cout << "\n\tWANT TO SEE";
		cout << "\n\tCOOKERS - PRESS 1";
		cout << "\n\tMAIDS - PRESS 2";
		int choice;
		cout << "\n\t";
		cin >> choice;
		
		if (Hired_Cooker1 == true && choice == 1) {
			Cooker c;
			c.Cooker1();
			cout << endl;

			if (Hired_Cooker2 == true) {
				c.Cooker2();
				cout << endl;

				if (Hired_Cooker3 == true) {
					c.Cooker3();
					cout << endl;

					if (Hired_Cooker4 == true) {
						c.Cooker4();
						cout << endl;

						if (Hired_Cooker5 == true) {
							c.Cooker5();
							cout << endl;

						}
					}
				}
			}
		}
		else if (choice == 2 && Hired_Maid1 == true) {
			Maid m;
			m.Maid1();
			cout << endl;

			if (Hired_Maid2 == true) {
				m.Maid2();
				cout << endl;

				if (Hired_Maid3 == true) {
					m.Maid3();
					cout << endl;

					if (Hired_Maid4 == true) {
						m.Maid4();
						cout << endl;

						if (Hired_Maid5 == true) {
							m.Maid5();
							cout << endl;
						}
					}
				}
			}
		}
		else {
			cout << "\n\tYou Don't Have Any Employees Or Wrong Input!";
		}
	}

	void Game_Over() {
		if (Clients_Happiness == -1) {
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tLVL OF CLIENT SATISFACTION FAILED TO -1! YOU HAVE LOST THE GAME!";
			Sleep(3000);
			cout << endl << endl << endl;
			exit(1);
		}
		else if (Balance < 0) {
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tYOUR BALANCE IS NEGATIVE! YOU HAVE LOST THE GAME!";
			Sleep(3000);
			cout << endl << endl << endl;
			exit(1);
		}
		else {

		}
	}

	void Game_Complete() {
		if (Income > 0 && Balance > 0 && Bought_Hostel1 == true && Bought_Hostel2 == true && Bought_Hostel3 == true && Bought_Hostel4 == true && Bought_Hostel5 == true && Bought_Hotel1 == true && Bought_Hotel2 == true && Bought_Hotel3 == true && Bought_Hotel4 == true && Bought_Hotel5 == true && Hired_Cooker1 == true && Hired_Cooker2 == true && Hired_Cooker3 == true && Hired_Cooker4 == true && Hired_Cooker5 == true && Hired_Maid1 == true && Hired_Maid2 == true && Hired_Maid3 == true && Hired_Maid4 == true && Hired_Maid5 == true && Upgrade_Hotel1 == true && Upgrade_Hotel2 == true && Upgrade_Hotel3 == true && Upgrade_Hotel4 == true && Upgrade_Hotel5 == true && Ordered_Advertisment_Meta == true && Ordered_Advertisment_Instagram == true && Ordered_Advertisment_Google == true) {
			system("CLS");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\tCONGRATULATIONS, YOU HAVE COMPLETED THE WAY ON TO BECOMING A MOST RICHEST OWNER OF HOTELS NETWORK!";
			Sleep(3000);
			exit(1);
		}
	}
};


#endif