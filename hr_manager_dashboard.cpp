#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <string>
#include <Windows.h>
#include <random>
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <math.h>

using namespace std;

class Person
{
private:

	string FirstName;
	string LastName;
	string Job;
	int PersonalID;
	double Salary;
	double WorkingHours;
	double CostPerHour;

public:

	void set_FieldName();
	void get_FieldName();
	void gett_FieldName();
	void set_PersonalID();
	void set_Name();
	void LastNamesortList();
	void in_FirstName();
	void in_Job();
	void in_FamilyName();
	void in_Workinghour();
	void in_Costperhour();
};

class HRM
{
private:


	Person e[100];
	Person temp[100];
public:

	void AddPerson();
	void SearchPerson();
	void UpdatePerson();
	void DeletePerson();
	void SeeEmployees();

};

class hr {
private:
	string username, password;
	string username1, password1;
	int total;

public:
	hr() {
		total = 0;
	}

	void start();
	void start2();
	void signUp();
	void login();
	void tasks();
	void cookers();
	void names();
	void Balance();
	void introduction();
};

int n = 0, i = 0, x = 001, y[100];
bool flag = 0;
int  z[100];
string h[100];
string l[100];
double sal[100];
int check = 0;

void ::HRM::AddPerson() {
	
	int x;
	char redo;

	do
	{
		n++;
		e[i].set_FieldName();
		i++;
		system("CLS");
		printf("\x1b[42;30m\n\tTHE EMPLOYEE WITH THE FOLLOWING INFORMATION HAS BEEN ADDED TO THE SYSTEM:\x1b[0m\n");

		
		

		for (int i = 0; i < n; i++) {
			
			e[i].get_FieldName();
		}


		cout << "\n\n\t\tDO YOU WANT TO ADD ANOTHER EMPLOYEE? Y/N: ";
		cin >> redo;
	} while ((redo == 'y' || redo == 'Y'));

}

void ::Person::in_FirstName()
{
	cin >> FirstName;
}
void::Person::in_FamilyName()
{
	cin >> LastName;
}
void::Person::in_Job() {
	cin >> Job;
}
void::Person::in_Workinghour()
{
	cin >> WorkingHours;
	Salary = WorkingHours * CostPerHour * 52;
}
void::Person::in_Costperhour()
{
	cin >> CostPerHour;
	Salary = WorkingHours * CostPerHour * 52;
}


void ::Person::LastNamesortList() {
	int temp2;
	char temp, temp1;
}

void::Person::set_Name() {
	cout << "\n\n\t\tDO YOU REALLY WANT TO DELETE EMPLOYEE" << FirstName << "\t" << LastName << " Y/N: ";  
}


int k = 0;
void::Person::set_FieldName() {
	system("CLS");
	PersonalID = x;
	x++;
	cout << n;
	cout << "\n\t\t FIRST NAME: ";

	while (!(cin >> FirstName))
	{
		cout << "Please  enter a string!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	cout << "\n\t\t LAST NAME: ";

	while (!(cin >> LastName))
	{
		cout << "Please  enter a string!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}

	cout << "\n\t\t HIS/HER JOB: ";
	while (!(cin >> Job))
	{
		cout << "Please  enter a string!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	

	cout << "\n\t\t HIS/HER WEEKLY HOURS: ";
	
	while (!(cin >> WorkingHours))
	{
		cout << "Please  enter a number!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');

	}
	cout << "\n\t\t HIS/HER SALARY PER HOUR: ";

	

	while (!(cin >> CostPerHour))
	{
		cout << "Please  enter a number!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');

	}

	Salary = WorkingHours * CostPerHour * 4.4;
	z[i] = Salary;
	sal[i] = Salary;
	h[i] = LastName;
	y[k] = PersonalID;
	l[i] = Job;

	k++;
}

void::Person::get_FieldName() {
	system("color 6E");
	cout << "\t____________________________________\t" << endl;
	cout << "\t   FIRST NAME: " << FirstName <<"      " << endl;
	cout << "\t   LAST NAME: " << LastName << "        " << endl;
	cout << "\t   Personal ID: " << PersonalID << "       " << endl;
	cout << "\t   Job: " << Job << "            " << endl;
	cout << "\t   Salary: " << Salary << "         " << endl;
	cout << "\t____________________________________\t" << endl;
	
}



void::Person::gett_FieldName() {
	string familyname;
	cout << "\t____________________________________\t" << endl;
	cout << "\t   FIRST NAME: " << FirstName << "      " << endl;
	cout << "\t   LAST NAME: " << LastName << "        " << endl;
	cout << "\t   Personal ID: " << PersonalID << "       " << endl;
	cout << "\t   Job: " << Job << "            " << endl;
	cout << "\t   Salary: " << Salary << "         " << endl;
	cout << "\t____________________________________\t" << endl;
	
}

void HRM::SearchPerson() {
	int c;
	char redo1;
	string familyname;
	double min, max;
	do {
		system("CLS");
		printf("\x1b[46;30m\n\n\n\t\tSEARCH IS BASED ON TWO DIFFERENT FIELDS ( 1. SURNAME, 2. SALARY ), PLEASE ENTER YOUR CHOICE: \x1b[0m\n");
		

		while (!(cin >> c))
		{
			system("color 6E");
			cout << "Please  enter a number!  Try again: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}


		if (c == 2)

		{
			system("color 6E");
			cout << "\t\tPLEASE DEFINE YOUR SEARCH RANGE FOR SALARY OF EMPLOYEES." << endl;
			cout << "\t\tWHAT IS MINIMUM SALARY FOR SEARCH (S_MIN): " << endl;

			while (!(cin >> min))
			{
				cout << "Please  enter a number!  Try again: ";
				cin.clear();
				cin.ignore(1000, '\n');  
			}
			cout << "\t\tWHAT IS MAXIMUM SALARY FOR SEARCH (S_MAX): " << endl;
			
			while (!(cin >> max)) 
			{
				cout << "Please  enter a number!  Try again: ";
				cin.clear();
				cin.ignore(1000, '\n');  
			}
			int a;
			a = n;
			
			for (int i = 0; i < n; i++) {


				if (z[i] > min && z[i] < max) {

					cout << n << endl;
					e[i].gett_FieldName();
					
				}
			}



		}

		else if (c == 1)
		{
			string LastName;
			system("CLS");
			system("color 6E");
			cout << "\n\n\t\tPLEASE ENTER THE LASTNAME OF THE EMPLOYEE: " << endl;
			cin >> LastName;
			
			for (int i = 0; i < n; i++) {


				if (h[i] == LastName) {

					cout << n << endl;
					system("CLS");
					e[i].gett_FieldName();
					
				}
			}
		}

		cout << "\n\t\tDO YOU WANT TO SEARCH ANY OTHER FIELD? Y/N: \n" << endl;
		cin >> redo1;
	} while (redo1 == 'y' || redo1 == 'Y');


}

void HRM::UpdatePerson() {
	system("CLS");
	int empId;
	char redo1, redo2;

a:
	cout << "\n\n\t\tID OF EMPLOYEE TO MODIFY DATA: ";

	while (!(cin >> empId)) 
	{
		cout << "Please  enter a number!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}




	int flag1 = 0;
	for (int i = 0; i < n; ++i) {

		if (y[i] != empId) {
			flag1++;

		}
	}
	

	cout << endl;
a1:

	for (int i = 0; i < n; ++i) {


		if (y[i] == empId) {

			cout << "\t\tMATCHING = " << y[i];

			flag = true;
			int choice = 0;
			char redo;

			do {
				system("CLS");
				cout << endl << endl;
				cout << "\t\tPLEASE ENTER THE RELATED NUMBER OF FIELD WHICH YOU WOULD LIKE TO UPDATE" << endl << endl;
				cout << "\t\t1. FIRST NAME" << endl;
				cout << "\t\t2. LAST NAME" << endl;
				cout << "\t\t3. WORKING HOURS PER WEEK" << endl;
				cout << "\t\t4. PAYMENT FOR ONE HOUR" << endl;
				cout << endl;

				cin >> choice;
				if (choice == 1) {
					cout << "\t\tFIRST NAME: ";
					e[i].in_FirstName();
				}
				else if (choice == 2) {
					cout << "\t\tLAST NAME: ";
					e[i].in_FamilyName();
				}
				else if (choice == 3) {
					cout << "\t\tWORKING HOURS PER WEEK: ";
					e[i].in_Workinghour();
				}
				else if (choice == 4) {
					cout << "\t\tPAYMENT FOR ONE HOUR: ";
					e[i].in_Costperhour();
				}
				cout << "\t\tDO YOU WANT TO UPDATE ANOTHER FIELD? Y/N: ";
				cin >> redo;
			} while (redo == 'y' || redo == 'Y');
		}
	}
	int a;
	a = n;
	
	for (int i = 0; i < a; i++) {
		e[i].get_FieldName();

		cout << n << endl;

	}
}

void HRM::DeletePerson() {
	system("CLS");

	int empId;
	bool lol;
	char redo1, redo2;
	lol = false;
b1:
	cout << "\n\n\t\tID OF THE EMPLOYEE TO REMOVE: ";

	while (!(cin >> empId))
	{
		cout << "Please  enter a number!  Try again: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}




	for (i = 0; i < n; ++i) {


		if (y[i] == empId) {
			e[i] = e[i + 1];
			lol = true;
			e[i].set_Name();
			cin >> redo2;
			if (redo2 == 'Y' || redo2 == 'y') {
				int a;
				a = n;

				
				for (int i = 0; i < a; i++) {

					e[i].get_FieldName();
					cout << n << endl;
					a--;
					n = a;
					n++;
				}


			}

			cout << endl;

			
		}

	}





	if (lol == false) {
		system("CLS");
		cout << "\n\n\t\tSORRY, THERE IS NO ANY EMPLOYEE WITH REQUESTED PERSONAL NUMBER!"
			<< "\n\n\n\t\tDO YOU WANT TO REPEAT DELETE BY ENTERING THE NEW PERSONAL NUMBER? Y/N: ";
		cin >> redo1;
		if (redo1 == 'Y' || redo1 == 'y') {
			goto b1;
			cout << endl << endl;
		}
	}




	

}

void HRM::SeeEmployees() {
	system("CLS");
	for (int i = 0; i < n; i++) {

		e[i].get_FieldName();
	}

}



int main() {


	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	hr h;
	h.introduction();
	h.start();
	h.start2();
	h.signUp();
	h.login();
beginning:
	int choice;
	int choice1;
	int choice2;
	int choice3;
	int mainchoice;

	int upd;

	string choice4;
	int continue1;
	string address;
	address = "Mirzo Ulugbek, Ziyolilar 9";





	system("CLS");
	system("color 6E");
	auto start = chrono::system_clock::now();
	auto end = chrono::system_clock::now();
	chrono::duration<double> elapsed_seconds = end - start;
	time_t end_time = std::chrono::system_clock::to_time_t(end);
	printf("\x1b[42;30m\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\x1b[30m\n");
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ";
	cout << ctime(&end_time);

	printf("\x1b[46;30m\n\n\n\t\t  WHAT WOULD YOU LIKE TO DO?  \n\n\n\n\x1b[0m\n");
	printf("\x1b[43;30m\t\t________________________________________________\x1b[30m\n\n");
	printf("\x1b[43;30m\t\t|  SEE ASSIGNED TASKS AT WORK       - PRESS 1  |\x1b[30m\n\n");
	cout << "\t\t|  SEARCH FOR A COOKERS             - PRESS 2  |\n\n";
	cout << "\t\t|  SEARCH FOR A DELIVERYMEN         - PRESS 3  |\n\n";
	cout << "\t\t|  SEARCH FOR A SUPERVISORS         - PRESS 4  |\n\n";
	cout << "\t\t|  ADD AN EMPLOYERS TO THE DATABASE - PRESS 5  |\n\n";
	cout << "\t\t|  YOUR PROFILE                     - PRESS 6  |\n\n";
	cout << "\t\t|  INSTRUCTIONS                     - PRESS 7  |\n\n";
	cout << "\t\t|______________________________________________|\n\n";

	cout << "\t\t";
	while (!(cin >> mainchoice))
	{
		cout << "\n\tPLEASE ENTER A NUMBER!  TRY AGAIN: ";
		cin.clear();
		cin.ignore(1000, '\n');

	}
	if (mainchoice == 1) {
	task1:
		h.tasks();
		printf("\x1b[43;30m \x1b[30m\n");
		cout << "\n\n\t\tRETURN TO MENU? Y/N: ";
		char choice;
		cin >> choice;
		if (choice == 'Y' || choice == 'y') {
			goto beginning;
		}
		else {
			goto task1;
		}
	}
	else if (mainchoice == 2) {
	beginning1:
		system("CLS");
		cout << "\n\n";
		random_device rd1;
		mt19937 gen1(rd1());
		uniform_int_distribution<> distr1(18, 50);
		for (int w = 0; w < 1; ++w)
			cout << "\n\t\t\tEmployees Name: ";

		const string nameList[29] = { "Vanessa Grey",
		   "Larry Stevenson", "Misa Qwartz", "Alexander Pato", "Ronald Zein",
		"Conor Torn", "Ron Stewart", "Zina Barkley", "Hermiona Lodge",
		"Veronika Amber", "Ashley Cole", "Pakura Wayne", "Erwin Smith", "Eren Yeager",
		"Olivia Smith", "Liam Johnson", "Emma Williams", "Noah Brown", "Amelia Jones",
		"Oliver Garcia", "Ava Miller", "Elijah Davis", "Sophia Rodriguez", "Lucas Martinez",
		"Charlotte Hernandez", "Isabella Lopez", "Mason Gonsalez", "Mia Wilson", "Balmond Teuchi" };
		string name = nameList[rand() % 29];
		string name1 = nameList[rand() % 29];
		string name2 = nameList[rand() % 29];
		string name3 = nameList[rand() % 29];
		string name4 = nameList[rand() % 29];
		string name5 = nameList[rand() % 29];
		cout << name << " " << "                    Employees Name: " << name1 << " " << endl;
		cout << "\t\t\tAge: ";
		cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
		cout << "\t\t\tNumber: +1";
		random_device rd2;
		mt19937 gen2(rd2());
		uniform_int_distribution<> distr2(10000000, 99999999);
		for (int w = 0; w < 1; ++w)
			cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> distr(100, 999);
		for (int n = 0; n < 1; ++n)
			srand(time(0));
		const string wordList[1] = { "Chef" };
		const string wordList1[1] = { "Chef" };
		const string wordList2[3] = { "Chef", "Chef", "Chef" };
		string word = wordList1[rand() % 1];
		string word1 = wordList[rand() % 1];
		string word2 = wordList2[rand() % 3];
		cout << "\t\t\tWanted Position: ";
		cout << word << " " << "\t\t                Wanted Position: " << word1 << ' ' << endl;
		cout << "\t\t\tExperience: ";
		random_device rd3;
		mt19937 gen3(rd3());
		uniform_int_distribution<> distr3(2, 10);
		for (int w = 0; w < 1; ++w)
			cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
		printf("\x1b[42;30m\x1b[30m\n");
		cout << "\n\t\t\tPRESS 1 TO CONTACT \t\t\t\tPRESS 2 TO CONTACT\n\n";

		//-------------2 LINE---------------//
		printf("\x1b[43;30m \x1b[30m\n");
		cout << "\n\t\t\tEmployees Name: ";
		cout << name2 << " " << "                    Employees Name: " << name3 << " " << endl;
		cout << "\t\t\tAge: ";
		cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
		cout << "\t\t\tNumber: +1";
		cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
		cout << "\t\t\tWanted Position: ";
		cout << word << " " << "\t\t                Wanted Position: " << word2 << ' ' << endl;
		cout << "\t\t\tExperience: ";
		cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
		printf("\x1b[42;30m\x1b[30m\n");
		cout << "\n\t\t\tPRESS 3 TO CONTACT \t\t\t\tPRESS 4 TO CONTACT\n\n";

		//------------3 LINE---------------//
		printf("\x1b[43;30m \x1b[30m\n");
		cout << "\n\t\t\tEmployees Name: ";
		cout << name4 << " " << "                 Employees Name: " << name5 << " " << endl;
		cout << "\t\t\tAge: ";
		cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
		cout << "\t\t\tNumber: +1";
		cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
		cout << "\t\t\tWanted Position: ";
		cout << word << " " << "\t\t                Wanted Position: " << word1 << ' ' << endl;
		cout << "\t\t\tExperience: ";
		cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
		printf("\x1b[42;30m\x1b[30m\n");
		cout << "\n\t\t\tPRESS 5 TO CONTACT \t\t\t\tPRESS 6 TO CONTACT\n\n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\t\t\tWANT TO UPDATE THE LIST?";
		cout << "\n\n\t\t\tPRESS 1 IF YES";
		cout << "\n\t\t\tPRESS 2 IF NO";
		cout << "\n\t\t\tPRESS 3 IF YOU WANT TO GO TO THE DASHBOARD\n";
		
		while (!(cin >> upd))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
			goto beginning1;
		}
		if (upd == 1) {
			goto beginning1;
		}
		else if (upd == 3) {
			goto beginning;
		}
		
		while (!(cin >> choice))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
			goto beginning1;
		}
		if (choice == 1) {
			a1:
			system("CLS");
			printf("\x1b[46;30m\x1b[30m\n");
			cout << "\n\tGood Morning, " << name << endl;
			cout << "\n\tI Want To Invite You For A Interview In Our\n";
			cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
			cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
			while (!(cin >> choice1))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
				goto a1;
			}
			
			if (choice1 == 1) {
				
				const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
				"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
				string answer = answerList[rand() % 2];
				printf("\x1b[47;30m\x1b[30m\n");
				cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
				cout << "\t" << answer;
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
				while (!(cin >> choice2))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice2 == 1) {
					goto beginning1;
				}
				else if (choice2 == 2) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tHappy To Hear, " << name;
					cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
					cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
					while (!(cin >> continue1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (continue1 == 1) {
						system("CLS");
						printf("\x1b[47;30m\x1b[30m\n");
						char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr11[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						cout << "\n\n";

						int salary;
					interview:
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tGOOD AFTERNOON, " << name << "!";
						cout << "\n\n\t\tI OFFER YOU A ";
						while (!(cin >> salary))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
						if (salary == 9) {
							const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList1[rand() % 4];
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary <= 8) {
							printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
							Sleep(6000);
							goto beginning;
						}
						else if (salary == 10) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList2[rand() % 3];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary == 11) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList3[rand() % 2];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary >= 12) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList4[rand() % 1];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						printf("\x1b[42;30m\x1b[30m\n");
						cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
						cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


						while (!(cin >> choice3))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice3 == 1) {
							system("CLS");
							printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
							Sleep(6000);
							goto database;
						}
						if (choice3 == 2) {
							goto interview;
						}
						else if (choice3 == 3) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
							Sleep(4000);
							goto beginning;
						}
					}
				}
				
			}
			else {
			goto a1;
}
		}
		else if (choice == 2) {
			system("CLS");
			printf("\x1b[46;30m\x1b[30m\n");
			cout << "\n\tGood Morning, " << name1 << endl;
			cout << "\n\tI Want To Invite You For A Interview In Our\n";
			cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
			cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
			while (!(cin >> choice1))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice1 == 1) {
				const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
				"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
				string answer = answerList[rand() % 2];
				printf("\x1b[47;30m\x1b[30m\n");
				cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
				cout << "\t" << answer;
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
				cin >> choice2;
				if (choice2 == 1) {
					goto beginning1;
				}
				else if (choice2 == 2) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tHappy To Hear, " << name1;
					cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
					cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
					while (!(cin >> continue1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (continue1 == 1) {
						system("CLS");
						printf("\x1b[47;30m\x1b[30m\n");
						char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr11[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						cout << "\n\n";

						int salary;
					interview1:
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tGOOD AFTERNOON, " << name1 << "!";
						cout << "\n\n\t\tI OFFER YOU A ";
						while (!(cin >> salary))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
						if (salary == 9) {
							const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList1[rand() % 4];
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary <= 8) {
							printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
							Sleep(6000);
							goto beginning;
						}
						else if (salary == 10) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList2[rand() % 3];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary == 11) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList3[rand() % 2];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary >= 12) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList4[rand() % 1];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						printf("\x1b[42;30m\x1b[30m\n");
						cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
						cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


						while (!(cin >> choice3))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice3 == 1) {
							system("CLS");
							printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
							Sleep(6000);
							goto database;
						}
						if (choice3 == 2) {
							goto interview1;
						}
						else if (choice3 == 3) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
							Sleep(4000);
							goto beginning;
						}
					}
				}
			}
		}
		else if (choice == 3) {
			system("CLS");
			printf("\x1b[46;30m\x1b[30m\n");
			cout << "\n\tGood Morning, " << name2 << endl;
			cout << "\n\tI Want To Invite You For A Interview In Our\n";
			cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
			cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
			while (!(cin >> choice1))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice1 == 1) {
				const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
				"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
				string answer = answerList[rand() % 2];
				printf("\x1b[47;30m\x1b[30m\n");
				cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
				cout << "\t" << answer;
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
				while (!(cin >> choice2))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice2 == 1) {
					goto beginning1;
				}
				else if (choice2 == 2) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tHappy To Hear, " << name2;
					cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
					cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
					while (!(cin >> continue1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (continue1 == 1) {
						system("CLS");
						printf("\x1b[47;30m\x1b[30m\n");
						char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr11[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						cout << "\n\n";

						int salary;
					interview3:
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tGOOD AFTERNOON, " << name2 << "!";
						cout << "\n\n\t\tI OFFER YOU A ";
						while (!(cin >> salary))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
						if (salary == 9) {
							const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList1[rand() % 4];
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary <= 8) {
							printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
							Sleep(6000);
							goto beginning;
						}
						else if (salary == 10) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList2[rand() % 3];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary == 11) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList3[rand() % 2];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary >= 12) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList4[rand() % 1];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						printf("\x1b[42;30m\x1b[30m\n");
						cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
						cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


						while (!(cin >> choice3))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice3 == 1) {
							system("CLS");
							printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
							Sleep(6000);
							goto database;
						}
						if (choice3 == 2) {
							goto interview3;
						}
						else if (choice3 == 3) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
							Sleep(4000);
							goto beginning;
						}
					}
				}
			}



			else if (choice == 4) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tGood Morning, " << name3 << endl;
				cout << "\n\tI Want To Invite You For A Interview In Our\n";
				cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
				cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
				while (!(cin >> choice1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice1 == 1) {
					const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
					"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
					string answer = answerList[rand() % 2];
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
					cout << "\t" << answer;
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
					while (!(cin >> choice2))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice2 == 1) {
						goto beginning1;
					}
					else if (choice2 == 2) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\tHappy To Hear, " << name3;
						cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
						cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
						while (!(cin >> continue1))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (continue1 == 1) {
							system("CLS");
							printf("\x1b[47;30m\x1b[30m\n");
							char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr11[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							cout << "\n\n";

							int salary;
						interview4:
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tGOOD AFTERNOON, " << name3 << "!";
							cout << "\n\n\t\tI OFFER YOU A ";
							while (!(cin >> salary))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
							if (salary == 9) {
								const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList1[rand() % 4];
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary <= 8) {
								printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
								Sleep(6000);
								goto beginning;
							}
							else if (salary == 10) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList2[rand() % 3];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary == 11) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList3[rand() % 2];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary >= 12) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList4[rand() % 1];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							printf("\x1b[42;30m\x1b[30m\n");
							cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
							cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


							while (!(cin >> choice3))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (choice3 == 1) {
								system("CLS");
								printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
								Sleep(6000);
								goto database;
							}
							if (choice3 == 2) {
								goto interview4;
							}
							else if (choice3 == 3) {
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
								Sleep(4000);
								goto beginning;
							}
						}
					}
				}
			}
		}
		else if (choice == 5) {
			system("CLS");
			printf("\x1b[46;30m\x1b[30m\n");
			cout << "\n\tGood Morning, " << name4 << endl;
			cout << "\n\tI Want To Invite You For A Interview In Our\n";
			cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
			cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
			while (!(cin >> choice1))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice1 == 1) {
				const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
				"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
				string answer = answerList[rand() % 2];
				printf("\x1b[47;30m\x1b[30m\n");
				cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
				cout << "\t" << answer;
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
				while (!(cin >> choice2))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice2 == 1) {
					goto beginning1;
				}
				else if (choice2 == 2) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tHappy To Hear, " << name4;
					cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
					cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
					while (!(cin >> continue1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (continue1 == 1) {
						system("CLS");
						printf("\x1b[47;30m\x1b[30m\n");
						char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr11[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						cout << "\n\n";

						int salary;
					interview5:
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tGOOD AFTERNOON, " << name4 << "!";
						cout << "\n\n\t\tI OFFER YOU A ";
						while (!(cin >> salary))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
						if (salary == 9) {
							const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList1[rand() % 4];
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary <= 8) {
							printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
							Sleep(6000);
							goto beginning;
						}
						else if (salary == 10) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList2[rand() % 3];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary == 11) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList3[rand() % 2];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary >= 12) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList4[rand() % 1];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						printf("\x1b[42;30m\x1b[30m\n");
						cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
						cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


						while (!(cin >> choice3))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice3 == 1) {
							system("CLS");
							printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
							Sleep(6000);
							goto database;
						}
						if (choice3 == 2) {
							goto interview5;
						}
						else if (choice3 == 3) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
							Sleep(4000);
							goto beginning;
						}
					}
				}
			}
		}
		else if (choice == 6) {
			system("CLS");
			printf("\x1b[46;30m\x1b[30m\n");
			cout << "\n\tGood Morning, " << name5 << endl;
			cout << "\n\tI Want To Invite You For A Interview In Our\n";
			cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
			cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
			while (!(cin >> choice1))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice1 == 1) {
				const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
				"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
				string answer = answerList[rand() % 2];
				printf("\x1b[47;30m\x1b[30m\n");
				cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
				cout << "\t" << answer;
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
				while (!(cin >> choice2))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice2 == 1) {
					goto beginning1;
				}
				else if (choice2 == 2) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tHappy To Hear, " << name5;
					cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
					cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
					while (!(cin >> continue1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (continue1 == 1) {
						system("CLS");
						printf("\x1b[47;30m\x1b[30m\n");
						char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr11[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						cout << "\n\n";

						int salary;
					interview6:
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tGOOD AFTERNOON, " << name5 << "!";
						cout << "\n\n\t\tI OFFER YOU A ";
						while (!(cin >> salary))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
						if (salary == 9) {
							const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList1[rand() % 4];
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary <= 8) {
							printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
							Sleep(6000);
							goto beginning;
						}
						else if (salary == 10) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList2[rand() % 3];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary == 11) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList3[rand() % 2];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary >= 12) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList4[rand() % 1];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						printf("\x1b[42;30m\x1b[30m\n");
						cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
						cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


						while (!(cin >> choice3))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice3 == 1) {
							system("CLS");
							printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
							Sleep(6000);
							goto database;
						}
						if (choice3 == 2) {
							goto interview6;
						}
						else if (choice3 == 3) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
							Sleep(4000);
							goto beginning;
						}
					}
				}
			}
		}
	}
		else if (mainchoice == 3) {
		beginning3:
			system("CLS");
			random_device rd1;
			mt19937 gen1(rd1());
			uniform_int_distribution<> distr1(18, 50);
			for (int w = 0; w < 1; ++w)
				cout << "\n\t\t\tEmployees Name: ";
			const string nameList[29] = { "Vanessa Grey",
					   "Larry Stevenson", "Misa Qwartz", "Alexander Pato", "Ronald Zein",
					"Conor Torn", "Ron Stewart", "Zina Barkley", "Hermiona Lodge",
					"Veronika Amber", "Ashley Cole", "Pakura Wayne", "Erwin Smith", "Eren Yeager",
					"Olivia Smith", "Liam Johnson", "Emma Williams", "Noah Brown", "Amelia Jones",
					"Oliver Garcia", "Ava Miller", "Elijah Davis", "Sophia Rodriguez", "Lucas Martinez",
					"Charlotte Hernandez", "Isabella Lopez", "Mason Gonsalez", "Mia Wilson", "Balmond Teuchi" };
			string name = nameList[rand() % 29];
			string name1 = nameList[rand() % 29];
			string name2 = nameList[rand() % 29];
			string name3 = nameList[rand() % 29];
			string name4 = nameList[rand() % 29];
			string name5 = nameList[rand() % 29];
			cout << name << " " << "                    Employees Name: " << name1 << " " << endl;
			cout << "\t\t\tAge: ";
			cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
			cout << "\t\t\tNumber: +1";
			random_device rd2;
			mt19937 gen2(rd2());
			uniform_int_distribution<> distr2(10000000, 99999999);
			for (int w = 0; w < 1; ++w)
				cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> distr(100, 999);
			for (int n = 0; n < 1; ++n)
				srand(time(0));
			const string wordList[4] = { "Deliveryman" };
			const string carList1[8] = { "Matiz", "Nexia 2", "Lacetti", "Spark",
										 "Gentra", "Nexia 3", "Epica", "Tico" };
			string word1 = carList1[rand() % 8];
			string word2 = carList1[rand() % 8];
			string word3 = carList1[rand() % 8];
			string word4 = carList1[rand() % 8];
			string word5 = carList1[rand() % 8];
			string word6 = carList1[rand() % 8];
			string word7 = carList1[rand() % 8];
			string word8 = carList1[rand() % 8];
			string word10 = wordList[rand() % 1];
			cout << "\t\t\tWanted Position: ";
			cout << word10 << " " << "\t\t\tWanted Position: " << word10 << ' ' << endl;
			cout << "\t\t\tCar: ";
			cout << word1 << ' ' << "\t\t\t\t\tCar: " << word2 << ' ' << endl;
			cout << "\t\t\tExperience: ";
			random_device rd3;
			mt19937 gen3(rd3());
			uniform_int_distribution<> distr3(2, 10);
			for (int w = 0; w < 1; ++w)
				cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
			printf("\x1b[42;30m\x1b[30m\n");
			cout << "\n\t\t\tPRESS 1 TO CONTACT \t\t\t\tPRESS 2 TO CONTACT\n\n";

			//-------------2 LINE---------------//
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\t\t\tEmployees Name: ";
			cout << name2 << " " << "                    Employees Name: " << name3 << " " << endl;
			cout << "\t\t\tAge: ";
			cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
			cout << "\t\t\tNumber: +1";
			cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
			cout << "\t\t\tWanted Position: ";
			cout << word10 << " " << "\t\t\tWanted Position: " << word10 << ' ' << endl;
			cout << "\t\t\tCar: ";
			cout << word3 << ' ' << "\t\t\t\t\tCar: " << word4 << ' ' << endl;
			cout << "\t\t\tExperience: ";
			cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
			printf("\x1b[42;30m\x1b[30m\n");
			cout << "\n\t\t\tPRESS 3 TO CONTACT \t\t\t\tPRESS 4 TO CONTACT\n\n";

			//------------3 LINE---------------//
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\t\t\tEmployees Name: ";
			cout << name4 << " " << "                 Employees Name: " << name5 << " " << endl;
			cout << "\t\t\tAge: ";
			cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
			cout << "\t\t\tNumber: +1";
			cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
			cout << "\t\t\tWanted Position: ";
			cout << word10 << " " << "\t\t\tWanted Position: " << word10 << ' ' << endl;
			cout << "\t\t\tCar: ";
			cout << word5 << ' ' << "\t\t\t\t\tCar: " << word6 << ' ' << endl;
			cout << "\t\t\tExperience: ";
			cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
			printf("\x1b[42;30m\x1b[30m\n");
			cout << "\n\t\t\tPRESS 5 TO CONTACT \t\t\t\tPRESS 6 TO CONTACT\n\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\t\t\tWANT TO UPDATE THE LIST?";
			cout << "\n\t\t\tPRESS 1 IF YES";
			cout << "\n\t\t\tPRESS 2 IF NO\n";
			cout << "\t\t\tPRESS 3 IF YOU WANT TO GO BACK TO THE DASHBOARD\n";
			cout << "\t\t\t";
			while (!(cin >> upd))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (upd == 1) {
				goto beginning3;
			}
			else if (upd == 3) {
				goto beginning;
			}
			while (!(cin >> choice))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice == 1) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tGood Morning, " << name << endl;
				cout << "\n\tI Want To Invite You For A Interview In Our\n";
				cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
				cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
				while (!(cin >> choice1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice1 == 1) {
					const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
					"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
					string answer = answerList[rand() % 2];
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
					cout << "\t" << answer;
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
					while (!(cin >> choice2))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice2 == 1) {
						goto beginning3;
					}
					else if (choice2 == 2) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\tHappy To Hear, " << name;
						cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
						cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
						while (!(cin >> continue1))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (continue1 == 1) {
							system("CLS");
							printf("\x1b[47;30m\x1b[30m\n");
							char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr11[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							cout << "\n\n";

							int salary;
						interview11:
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tGOOD AFTERNOON, " << name << "!";
							cout << "\n\n\t\tI OFFER YOU A ";
							while (!(cin >> salary))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
							if (salary == 9) {
								const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList1[rand() % 4];
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary <= 8) {
								printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
								Sleep(6000);
								goto beginning;
							}
							else if (salary == 10) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList2[rand() % 3];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary == 11) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList3[rand() % 2];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary >= 12) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList4[rand() % 1];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							printf("\x1b[42;30m\x1b[30m\n");
							cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
							cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


							while (!(cin >> choice3))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (choice3 == 1) {
								system("CLS");
								printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
								Sleep(6000);
								goto database;
							}
							if (choice3 == 2) {
								goto interview11;
							}
							else if (choice3 == 3) {
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
								Sleep(4000);
								goto beginning;
							}
						}
					}
				}
			}
			else if (choice == 2) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tGood Morning, " << name1 << endl;
				cout << "\n\tI Want To Invite You For A Interview In Our\n";
				cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
				cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
				while (!(cin >> choice1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice1 == 1) {
					const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
					"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
					string answer = answerList[rand() % 2];
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
					cout << "\t" << answer;
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
					while (!(cin >> choice2))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice2 == 1) {
						goto beginning3;
					}
					else if (choice2 == 2) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\tHappy To Hear, " << name1;
						cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
						cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
						while (!(cin >> continue1))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (continue1 == 1) {
							system("CLS");
							printf("\x1b[47;30m\x1b[30m\n");
							char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr11[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							cout << "\n\n";

							int salary;
						interview12:
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tGOOD AFTERNOON, " << name1 << "!";
							cout << "\n\n\t\tI OFFER YOU A ";
							while (!(cin >> salary))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
							if (salary == 9) {
								const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList1[rand() % 4];
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary <= 8) {
								printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
								Sleep(6000);
								goto beginning;
							}
							else if (salary == 10) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList2[rand() % 3];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary == 11) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList3[rand() % 2];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary >= 12) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList4[rand() % 1];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							printf("\x1b[42;30m\x1b[30m\n");
							cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
							cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


							while (!(cin >> choice3))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (choice3 == 1) {
								system("CLS");
								printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
								Sleep(6000);
								goto database;
							}
							if (choice3 == 2) {
								goto interview12;
							}
							else if (choice3 == 3) {
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
								Sleep(4000);
								goto beginning;
							}
						}
					}
				}
			}
			else if (choice == 3) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tGood Morning, " << name2 << endl;
				cout << "\n\tI Want To Invite You For A Interview In Our\n";
				cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
				cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
				while (!(cin >> choice1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice1 == 1) {
					const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
					"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
					string answer = answerList[rand() % 2];
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
					cout << "\t" << answer;
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
					while (!(cin >> choice2))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice2 == 1) {
						goto beginning3;
					}
					else if (choice2 == 2) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\tHappy To Hear, " << name2;
						cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
						cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
						while (!(cin >> continue1))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (continue1 == 1) {
							system("CLS");
							printf("\x1b[47;30m\x1b[30m\n");
							char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr11[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							cout << "\n\n";

							int salary;
						interview13:
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tGOOD AFTERNOON, " << name2 << "!";
							cout << "\n\n\t\tI OFFER YOU A ";
							while (!(cin >> salary))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
							if (salary == 9) {
								const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList1[rand() % 4];
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary <= 8) {
								printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
								Sleep(6000);
								goto beginning;
							}
							else if (salary == 10) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList2[rand() % 3];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary == 11) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList3[rand() % 2];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary >= 12) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList4[rand() % 1];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							printf("\x1b[42;30m\x1b[30m\n");
							cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
							cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


							while (!(cin >> choice3))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (choice3 == 1) {
								system("CLS");
								printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
								Sleep(6000);
								goto database;
							}
							if (choice3 == 2) {
								goto interview13;
							}
							else if (choice3 == 3) {
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
								Sleep(4000);
								goto beginning;
							}
						}
					}
				}



				else if (choice == 4) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tGood Morning, " << name3 << endl;
					cout << "\n\tI Want To Invite You For A Interview In Our\n";
					cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
					cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
					while (!(cin >> choice1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice1 == 1) {
						const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
						"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
						string answer = answerList[rand() % 2];
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
						cout << "\t" << answer;
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
						while (!(cin >> choice2))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice2 == 1) {
							goto beginning3;
						}
						else if (choice2 == 2) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\tHappy To Hear, " << name3;
							cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
							cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
							printf("\x1b[43;30m\x1b[30m\n");
							cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
							while (!(cin >> continue1))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (continue1 == 1) {
								system("CLS");
								printf("\x1b[47;30m\x1b[30m\n");
								char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
								for (int i = 0; i < 13; i++) {
									cout << arr[i];
									Sleep(120);
								}
								Sleep(1000);
								system("CLS");
								char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
								for (int i = 0; i < 13; i++) {
									cout << arr11[i];
									Sleep(120);
								}
								Sleep(1000);
								system("CLS");
								cout << "\n\n";

								int salary;
							interview14:
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tGOOD AFTERNOON, " << name3 << "!";
								cout << "\n\n\t\tI OFFER YOU A ";
								while (!(cin >> salary))
								{
									cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
									cin.clear();
									cin.ignore(1000, '\n');
								}
								cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
								if (salary == 9) {
									const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
										"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
									string answer1 = answerList1[rand() % 4];
									printf("\x1b[47;30m\x1b[30m\n");
									cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
								}
								else if (salary <= 8) {
									printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
									Sleep(6000);
									goto beginning;
								}
								else if (salary == 10) {
									printf("\x1b[47;30m\x1b[30m\n");
									const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
										"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
									string answer1 = answerList2[rand() % 3];
									cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
								}
								else if (salary == 11) {
									printf("\x1b[47;30m\x1b[30m\n");
									const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
										"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
									string answer1 = answerList3[rand() % 2];
									cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
								}
								else if (salary >= 12) {
									printf("\x1b[47;30m\x1b[30m\n");
									const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
									string answer1 = answerList4[rand() % 1];
									cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
								}
								printf("\x1b[42;30m\x1b[30m\n");
								cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
								cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


								while (!(cin >> choice3))
								{
									cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
									cin.clear();
									cin.ignore(1000, '\n');
								}
								if (choice3 == 1) {
									system("CLS");
									printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
									Sleep(6000);
									goto database;
								}
								if (choice3 == 2) {
									goto interview14;
								}
								else if (choice3 == 3) {
									system("CLS");
									printf("\x1b[46;30m\x1b[30m\n");
									cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
									Sleep(4000);
									goto beginning;
								}
							}
						}
					}
				}
			}
			else if (choice == 5) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tGood Morning, " << name4 << endl;
				cout << "\n\tI Want To Invite You For A Interview In Our\n";
				cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
				cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
				while (!(cin >> choice1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice1 == 1) {
					const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
					"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
					string answer = answerList[rand() % 2];
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
					cout << "\t" << answer;
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
					while (!(cin >> choice2))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice2 == 1) {
						goto beginning3;
					}
					else if (choice2 == 2) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\tHappy To Hear, " << name4;
						cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
						cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
						while (!(cin >> continue1))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (continue1 == 1) {
							system("CLS");
							printf("\x1b[47;30m\x1b[30m\n");
							char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr11[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							cout << "\n\n";

							int salary;
						interview15:
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tGOOD AFTERNOON, " << name4 << "!";
							cout << "\n\n\t\tI OFFER YOU A ";
							while (!(cin >> salary))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
							if (salary == 9) {
								const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList1[rand() % 4];
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary <= 8) {
								printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
								Sleep(6000);
								goto beginning;
							}
							else if (salary == 10) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList2[rand() % 3];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary == 11) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList3[rand() % 2];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary >= 12) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList4[rand() % 1];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							printf("\x1b[42;30m\x1b[30m\n");
							cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
							cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


							while (!(cin >> choice3))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (choice3 == 1) {
								system("CLS");
								printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
								Sleep(6000);
								goto database;
							}
							if (choice3 == 2) {
								goto interview15;
							}
							else if (choice3 == 3) {
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
								Sleep(4000);
								goto beginning;
							}
						}
					}
				}
			}
			else if (choice == 6) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tGood Morning, " << name5 << endl;
				cout << "\n\tI Want To Invite You For A Interview In Our\n";
				cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
				cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
				while (!(cin >> choice1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice1 == 1) {
					const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
					"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
					string answer = answerList[rand() % 2];
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
					cout << "\t" << answer;
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
					while (!(cin >> choice2))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice2 == 1) {
						goto beginning3;
					}
					else if (choice2 == 2) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\tHappy To Hear, " << name5;
						cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
						cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
						printf("\x1b[43;30m\x1b[30m\n");
						cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
						while (!(cin >> continue1))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (continue1 == 1) {
							system("CLS");
							printf("\x1b[47;30m\x1b[30m\n");
							char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
							for (int i = 0; i < 13; i++) {
								cout << arr11[i];
								Sleep(120);
							}
							Sleep(1000);
							system("CLS");
							cout << "\n\n";

							int salary;
						interview16:
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tGOOD AFTERNOON, " << name5 << "!";
							cout << "\n\n\t\tI OFFER YOU A ";
							while (!(cin >> salary))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
							if (salary == 9) {
								const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList1[rand() % 4];
								printf("\x1b[47;30m\x1b[30m\n");
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary <= 8) {
								printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
								Sleep(6000);
								goto beginning;
							}
							else if (salary == 10) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList2[rand() % 3];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary == 11) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
									"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList3[rand() % 2];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							else if (salary >= 12) {
								printf("\x1b[47;30m\x1b[30m\n");
								const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
								string answer1 = answerList4[rand() % 1];
								cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
							}
							printf("\x1b[42;30m\x1b[30m\n");
							cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
							cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


							while (!(cin >> choice3))
							{
								cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
								cin.clear();
								cin.ignore(1000, '\n');
							}
							if (choice3 == 1) {
								system("CLS");
								printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
								Sleep(6000);
								goto database;
							}
							if (choice3 == 2) {
								goto interview16;
							}
							else if (choice3 == 3) {
								system("CLS");
								printf("\x1b[46;30m\x1b[30m\n");
								cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
								Sleep(4000);
								goto beginning;
							}
						}
					}
				}
			}
	}
		else if (mainchoice == 4) {
	beginning4:
	system("CLS");
	random_device rd1;
	mt19937 gen1(rd1());
	uniform_int_distribution<> distr1(18, 50);
	for (int w = 0; w < 1; ++w)
		cout << "\n\t\t\tEmployees Name: ";
	const string nameList[29] = { "Vanessa Grey",
			   "Larry Stevenson", "Misa Qwartz", "Alexander Pato", "Ronald Zein",
			"Conor Torn", "Ron Stewart", "Zina Barkley", "Hermiona Lodge",
			"Veronika Amber", "Ashley Cole", "Pakura Wayne", "Erwin Smith", "Eren Yeager",
			"Olivia Smith", "Liam Johnson", "Emma Williams", "Noah Brown", "Amelia Jones",
			"Oliver Garcia", "Ava Miller", "Elijah Davis", "Sophia Rodriguez", "Lucas Martinez",
			"Charlotte Hernandez", "Isabella Lopez", "Mason Gonsalez", "Mia Wilson", "Balmond Teuchi" };
	string name = nameList[rand() % 29];
	string name1 = nameList[rand() % 29];
	string name2 = nameList[rand() % 29];
	string name3 = nameList[rand() % 29];
	string name4 = nameList[rand() % 29];
	string name5 = nameList[rand() % 29];
	cout << name << " " << "                    Employees Name: " << name1 << " " << endl;
	cout << "\t\t\tAge: ";
	cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
	cout << "\t\t\tNumber: +1";
	random_device rd2;
	mt19937 gen2(rd2());
	uniform_int_distribution<> distr2(10000000, 99999999);
	for (int w = 0; w < 1; ++w)
		cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> distr(100, 999);
	for (int n = 0; n < 1; ++n)
		srand(time(0));
	const string wordList[1] = { "Supervisor"};
	const string wordList1[1] = { "Supervisor" };
	const string wordList2[3] = { "Supervisor", "Supervisor", "Supervisor" };
	string word = wordList1[rand() % 1];
	string word1 = wordList[rand() % 1];
	string word2 = wordList2[rand() % 3];
	cout << "\t\t\tWanted Position: ";
	cout << word << " " << "\t\t        Wanted Position: " << word1 << ' ' << endl;
	cout << "\t\t\tExperience: ";
	random_device rd3;
	mt19937 gen3(rd3());
	uniform_int_distribution<> distr3(2, 10);
	for (int w = 0; w < 1; ++w)
		cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
	printf("\x1b[42;30m\x1b[30m\n");
	cout << "\n\t\t\tPRESS 1 TO CONTACT \t\t\t\tPRESS 2 TO CONTACT\n\n";

	//-------------2 LINE---------------//
	printf("\x1b[43;30m\x1b[30m\n");
	cout << "\n\t\t\tEmployees Name: ";
	cout << name2 << " " << "                    Employees Name: " << name3 << " " << endl;
	cout << "\t\t\tAge: ";
	cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
	cout << "\t\t\tNumber: +1";
	cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
	cout << "\t\t\tWanted Position: ";
	cout << word << " " << "\t\t        Wanted Position: " << word2 << ' ' << endl;
	cout << "\t\t\tExperience: ";
	cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
	printf("\x1b[42;30m\x1b[30m\n");
	cout << "\n\t\t\tPRESS 3 TO CONTACT \t\t\t\tPRESS 4 TO CONTACT\n\n";

	//------------3 LINE---------------//
	printf("\x1b[43;30m\x1b[30m\n");
	cout << "\n\t\t\tEmployees Name: ";
	cout << name4 << " " << "                 Employees Name: " << name5 << " " << endl;
	cout << "\t\t\tAge: ";
	cout << distr1(gen1) << ' ' << "\t\t\t\t\tAge: " << distr1(gen1) << ' ' << endl;
	cout << "\t\t\tNumber: +1";
	cout << distr2(gen2) << ' ' << "\t\t\t\tNumber: +1" << distr2(gen2) << ' ' << endl;
	cout << "\t\t\tWanted Position: ";
	cout << word << " " << "\t\t        Wanted Position: " << word1 << ' ' << endl;
	cout << "\t\t\tExperience: ";
	cout << distr3(gen3) << " years" << ' ' << "\t\t\t\tExperience: " << distr3(gen3) << " years";
	printf("\x1b[42;30m\x1b[30m\n");
	cout << "\n\t\t\tPRESS 5 TO CONTACT \t\t\t\tPRESS 6 TO CONTACT\n\n";
	printf("\x1b[43;30m\x1b[30m\n");
	cout << "\n\t\t\tWANT TO UPDATE THE LIST?";
	cout << "\n\n\t\t\tPRESS 1 IF YES";
	cout << "\n\t\t\tPRESS 2 IF NO\n";
	cout << "\t\t\tPRESS 3 IF YOU WANT TO GO BACK TO THE DASHBOARD\n";
	cout << "\t\t\t";
	while (!(cin >> upd))
	{
		cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if (upd == 1) {
		goto beginning4;
	}
	else if (upd == 3) {
		goto beginning;
	}
	while (!(cin >> choice))
	{
		cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
	if (choice == 1) {
		system("CLS");
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\tGood Morning, " << name << endl;
		cout << "\n\tI Want To Invite You For A Interview In Our\n";
		cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
		cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
		while (!(cin >> choice1))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (choice1 == 1) {
			const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
			"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
			string answer = answerList[rand() % 2];
			printf("\x1b[47;30m\x1b[30m\n");
			cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
			cout << "\t" << answer;
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
			while (!(cin >> choice2))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice2 == 1) {
				goto beginning4;
			}
			else if (choice2 == 2) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tHappy To Hear, " << name;
				cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
				cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
				while (!(cin >> continue1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (continue1 == 1) {
					system("CLS");
					printf("\x1b[47;30m\x1b[30m\n");
					char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr11[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					cout << "\n\n";

					int salary;
				interview21:
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\n\t\tGOOD AFTERNOON, " << name << "!";
					cout << "\n\n\t\tI OFFER YOU A ";
					while (!(cin >> salary))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
					if (salary == 9) {
						const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList1[rand() % 4];
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary <= 8) {
						printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
						Sleep(6000);
						goto beginning;
					}
					else if (salary == 10) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList2[rand() % 3];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary == 11) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList3[rand() % 2];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary >= 12) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList4[rand() % 1];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					printf("\x1b[42;30m\x1b[30m\n");
					cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
					cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


					while (!(cin >> choice3))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice3 == 1) {
						system("CLS");
						printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
						Sleep(6000);
						goto database;
					}
					if (choice3 == 2) {
						goto interview21;
					}
					else if (choice3 == 3) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
						Sleep(4000);
						goto beginning;
					}
				}
			}
		}
	}
	else if (choice == 2) {
		system("CLS");
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\tGood Morning, " << name1 << endl;
		cout << "\n\tI Want To Invite You For A Interview In Our\n";
		cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
		cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
		while (!(cin >> choice1))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (choice1 == 1) {
			const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
			"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
			string answer = answerList[rand() % 2];
			printf("\x1b[47;30m\x1b[30m\n");
			cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
			cout << "\t" << answer;
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
			while (!(cin >> choice2))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice2 == 1) {
				goto beginning4;
			}
			else if (choice2 == 2) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tHappy To Hear, " << name1;
				cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
				cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
				while (!(cin >> continue1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (continue1 == 1) {
					system("CLS");
					printf("\x1b[47;30m\x1b[30m\n");
					char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr11[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					cout << "\n\n";

					int salary;
				interview22:
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\n\t\tGOOD AFTERNOON, " << name1 << "!";
					cout << "\n\n\t\tI OFFER YOU A ";
					while (!(cin >> salary))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
					if (salary == 9) {
						const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList1[rand() % 4];
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary <= 8) {
						printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
						Sleep(6000);
						goto beginning;
					}
					else if (salary == 10) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList2[rand() % 3];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary == 11) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList3[rand() % 2];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary >= 12) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList4[rand() % 1];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					printf("\x1b[42;30m\x1b[30m\n");
					cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
					cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


					while (!(cin >> choice3))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice3 == 1) {
						system("CLS");
						printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
						Sleep(6000);
						goto database;
					}
					if (choice3 == 2) {
						goto interview22;
					}
					else if (choice3 == 3) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
						Sleep(4000);
						goto beginning;
					}
				}
			}
		}
	}
	else if (choice == 3) {
		system("CLS");
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\tGood Morning, " << name2 << endl;
		cout << "\n\tI Want To Invite You For A Interview In Our\n";
		cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
		cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
		while (!(cin >> choice1))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (choice1 == 1) {
			const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
			"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
			string answer = answerList[rand() % 2];
			printf("\x1b[47;30m\x1b[30m\n");
			cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
			cout << "\t" << answer;
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
			while (!(cin >> choice2))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice2 == 1) {
				goto beginning4;
			}
			else if (choice2 == 2) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tHappy To Hear, " << name2;
				cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
				cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
				while (!(cin >> continue1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (continue1 == 1) {
					system("CLS");
					printf("\x1b[47;30m\x1b[30m\n");
					char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr11[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					cout << "\n\n";

					int salary;
				interview23:
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\n\t\tGOOD AFTERNOON, " << name2 << "!";
					cout << "\n\n\t\tI OFFER YOU A ";
					while (!(cin >> salary))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
					if (salary == 9) {
						const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList1[rand() % 4];
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary <= 8) {
						printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
						Sleep(6000);
						goto beginning;
					}
					else if (salary == 10) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList2[rand() % 3];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary == 11) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList3[rand() % 2];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary >= 12) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList4[rand() % 1];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					printf("\x1b[42;30m\x1b[30m\n");
					cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
					cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


					while (!(cin >> choice3))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice3 == 1) {
						system("CLS");
						printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
						Sleep(6000);
						goto database;
					}
					if (choice3 == 2) {
						goto interview23;
					}
					else if (choice3 == 3) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
						Sleep(4000);
						goto beginning;
					}
				}
			}
		}



		else if (choice == 4) {
			system("CLS");
			printf("\x1b[46;30m\x1b[30m\n");
			cout << "\n\tGood Morning, " << name3 << endl;
			cout << "\n\tI Want To Invite You For A Interview In Our\n";
			cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
			cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
			while (!(cin >> choice1))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice1 == 1) {
				const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
				"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
				string answer = answerList[rand() % 2];
				printf("\x1b[47;30m\x1b[30m\n");
				cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
				cout << "\t" << answer;
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
				while (!(cin >> choice2))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (choice2 == 1) {
					goto beginning4;
				}
				else if (choice2 == 2) {
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\tHappy To Hear, " << name3;
					cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
					cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
					printf("\x1b[43;30m\x1b[30m\n");
					cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
					while (!(cin >> continue1))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (continue1 == 1) {
						system("CLS");
						printf("\x1b[47;30m\x1b[30m\n");
						char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
						for (int i = 0; i < 13; i++) {
							cout << arr11[i];
							Sleep(120);
						}
						Sleep(1000);
						system("CLS");
						cout << "\n\n";

						int salary;
					interview24:
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tGOOD AFTERNOON, " << name3 << "!";
						cout << "\n\n\t\tI OFFER YOU A ";
						while (!(cin >> salary))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
						if (salary == 9) {
							const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList1[rand() % 4];
							printf("\x1b[47;30m\x1b[30m\n");
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary <= 8) {
							printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
							Sleep(6000);
							goto beginning;
						}
						else if (salary == 10) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList2[rand() % 3];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary == 11) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
								"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList3[rand() % 2];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						else if (salary >= 12) {
							printf("\x1b[47;30m\x1b[30m\n");
							const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
							string answer1 = answerList4[rand() % 1];
							cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
						}
						printf("\x1b[42;30m\x1b[30m\n");
						cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
						cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


						while (!(cin >> choice3))
						{
							cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
							cin.clear();
							cin.ignore(1000, '\n');
						}
						if (choice3 == 1) {
							system("CLS");
							printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
							Sleep(6000);
							goto database;
						}
						if (choice3 == 2) {
							goto interview24;
						}
						else if (choice3 == 3) {
							system("CLS");
							printf("\x1b[46;30m\x1b[30m\n");
							cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
							Sleep(4000);
							goto beginning;
						}
					}
				}
			}
		}
	}
	else if (choice == 5) {
		system("CLS");
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\tGood Morning, " << name4 << endl;
		cout << "\n\tI Want To Invite You For A Interview In Our\n";
		cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
		cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
		while (!(cin >> choice1))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (choice1 == 1) {
			const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
			"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
			string answer = answerList[rand() % 2];
			printf("\x1b[47;30m\x1b[30m\n");
			cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
			cout << "\t" << answer;
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
			while (!(cin >> choice2))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice2 == 1) {
				goto beginning4;
			}
			else if (choice2 == 2) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tHappy To Hear, " << name4;
				cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
				cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
				while (!(cin >> continue1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (continue1 == 1) {
					system("CLS");
					printf("\x1b[47;30m\x1b[30m\n");
					char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr11[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					cout << "\n\n";

					int salary;
				interview25:
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\n\t\tGOOD AFTERNOON, " << name4 << "!";
					cout << "\n\n\t\tI OFFER YOU A ";
					while (!(cin >> salary))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
					if (salary == 9) {
						const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList1[rand() % 4];
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary <= 8) {
						printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
						Sleep(6000);
						goto beginning;
					}
					else if (salary == 10) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList2[rand() % 3];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary == 11) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList3[rand() % 2];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary >= 12) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList4[rand() % 1];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					printf("\x1b[42;30m\x1b[30m\n");
					cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
					cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


					while (!(cin >> choice3))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice3 == 1) {
						system("CLS");
						printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
						Sleep(6000);
						goto database;
					}
					if (choice3 == 2) {
						goto interview25;
					}
					else if (choice3 == 3) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
						Sleep(4000);
						goto beginning;
					}
				}
			}
		}
	}
	else if (choice == 6) {
		system("CLS");
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\tGood Morning, " << name5 << endl;
		cout << "\n\tI Want To Invite You For A Interview In Our\n";
		cout << "\tWonderful Restaurant. Your Salary Will Be Declared\n";
		cout << "\tAfter The Interview.\n\tLet Me Know If You Are Interested And I Will Inform You Where To Come.\n\n\tBest Regards, HR of a 'Kaztown'\n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\tPRESS 1 TO GET THE ANSWER: ";
		while (!(cin >> choice1))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (choice1 == 1) {
			const string answerList[2] = { "\t\t\t\t\t\t\tSorry, But I'm Not Interested In Your Restaurant\n",
			"\t\t\t\t\t\t\t\tIt Would Be Great If I Worked In Your Restaurant.\n\t\t\t\t\t\t\t\t\t I Would Be Glad, If You Provide Me With The Details. \n" };
			string answer = answerList[rand() % 2];
			printf("\x1b[47;30m\x1b[30m\n");
			cout << "\n\n\t\t\t\t\t\t\t\tGood Afternoon, Sir\n\n";
			cout << "\t" << answer;
			printf("\x1b[43;30m\x1b[30m\n");
			cout << "\n\n\n\t\t\t\t\tIF YOU GOT A REFUSAL, PRESS 1\n\n\t\t\t\t\tIF YOU GOT AN ACCEPTION, PRESS 2\n";
			while (!(cin >> choice2))
			{
				cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
				cin.clear();
				cin.ignore(1000, '\n');
			}
			if (choice2 == 1) {
				goto beginning4;
			}
			else if (choice2 == 2) {
				system("CLS");
				printf("\x1b[46;30m\x1b[30m\n");
				cout << "\n\tHappy To Hear, " << name5;
				cout << "\n\n\tCome To Our Restaurant Tomorrow At 14:30.\n\tAddress: " << address;
				cout << "\n\tI Will Be Waiting You At The Entry.\n\n\tHave A Nice Day!\n\n";
				printf("\x1b[43;30m\x1b[30m\n");
				cout << "\n\tPRESS 1 TO CONTINUE\n\n\n";
				while (!(cin >> continue1))
				{
					cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
					cin.clear();
					cin.ignore(1000, '\n');
				}
				if (continue1 == 1) {
					system("CLS");
					printf("\x1b[47;30m\x1b[30m\n");
					char arr[] = { 'O','N','E',' ','D','A','Y',' ','L','A','T','E','R' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					char arr11[] = { 'T','H','E',' ','I','N','T','E','R','V','I','E','W' };
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t";
					for (int i = 0; i < 13; i++) {
						cout << arr11[i];
						Sleep(120);
					}
					Sleep(1000);
					system("CLS");
					cout << "\n\n";

					int salary;
				interview26:
					system("CLS");
					printf("\x1b[46;30m\x1b[30m\n");
					cout << "\n\n\t\tGOOD AFTERNOON, " << name5 << "!";
					cout << "\n\n\t\tI OFFER YOU A ";
					while (!(cin >> salary))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					cout << "\t\t" << salary << "$ PER HOUR FOR YOUR WORK. IS IT OKAY ? ";
					if (salary == 9) {
						const string answerList1[4] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList1[rand() % 4];
						printf("\x1b[47;30m\x1b[30m\n");
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary <= 8) {
						printf("\x1b[47;30m\n\n\n\t\t\t\t\t\t\t\t\tTHAT'S RIDICULOUS! I WAISTED MY TIME COMING HERE!\x1b[30m\n");
						Sleep(6000);
						goto beginning;
					}
					else if (salary == 10) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList2[3] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!", "\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList2[rand() % 3];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary == 11) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList3[2] = { "\n\t\t\t\t\t\t\t\t\t\t\t\tNO, I WANT MORE!",
							"\n\t\t\t\t\t\t\t\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList3[rand() % 2];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					else if (salary >= 12) {
						printf("\x1b[47;30m\x1b[30m\n");
						const string answerList4[1] = { "\n\t\t\t\t\tYEAH, IT WOULD BE LOVELY!\n" };
						string answer1 = answerList4[rand() % 1];
						cout << "\n\n\t\t\t\t\t\t\t\t\t\t" << answer1;
					}
					printf("\x1b[42;30m\x1b[30m\n");
					cout << "\n\n\n\n\n\n\n\t\tIF THE EMPLOYEE ACCEPTED THE OFFER: \n\n\t\t1) *CONTINUE THE INTERVIEW*";
					printf("\x1b[47;30m\x1b[30m\n");
					cout << "\n\n\t\tIF THE EMPLOYEE REFUSED:";
					cout << "\n\n\t\t2) MAKE A NEW OFFER\n\n\t\t3) FINISH THE INTEVIEW\n\n\n\t\t";


					while (!(cin >> choice3))
					{
						cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
						cin.clear();
						cin.ignore(1000, '\n');
					}
					if (choice3 == 1) {
						system("CLS");
						printf("\x1b[42m\n\n\tMe: GREAT, YOU CAN BEGIN WORKING STARTING FROM TOMORROW!\n\tYOUR MINIMUM WEEKLY HOURS ARE 45.\x1b[2m\n");
						Sleep(6000);
						goto database;
					}
					if (choice3 == 2) {
						goto interview26;
					}
					else if (choice3 == 3) {
						system("CLS");
						printf("\x1b[46;30m\x1b[30m\n");
						cout << "\n\n\t\tSORRY, BUT I CAN'T OFFER YOU MORE. WE ARE NOT GOING TO HIRE YOU.";
						Sleep(4000);
						goto beginning;
					}
				}
			}
		}
	}
	}		
		else if (mainchoice == 5) {

	database:
	system("CLS");
	system("color 6E");
	HRM info;

	int c;
	char operation, ch;
	do {
		system("CLS");
		system("color 6E");
		printf("\x1b[47;30m\x1b[30m\n");
		cout << "\n\n\t\t DATABASE ";
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\n\n\t\t                                           " << endl;
		cout << "\t\t  1. ADD NEW EMPLOYEE                      " << endl;
		cout << "\t\t  2. SEARCH AN EMPLOYEE FROM THE DATABASE  " << endl;
		cout << "\t\t  3. UPDATE EMPLOYEE'S INFORMATION         " << endl;
		cout << "\t\t  4. DELETE AN EMPLOYEE FROM THE DATABASE  " << endl;
		cout << "\t\t  5. SEE ALL OF THE EMPLOYEES IN DATABASE  " << endl;
		cout << "\t\t  6. GO BACK TO THE DASHBOARD              " << endl;
		cout << "\t\t                                           " << endl;


		while (!(cin >> c)) {

			cout << "Please  enter a number!  Try again: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		switch (c) {

		case 1:
			cout << "\n\t\tENTER THE INFORMATION OF A NEW EMPLOYEE:" << endl;
			info.AddPerson();
			break;
		case 2:
			info.SearchPerson();
			break;
		case 3:
			cout << "\n\t\tUPDATE THE INFORMATION OF AN EMPLOYEES";
			info.UpdatePerson();
			break;
		case 4:
			cout << "\n\t\tDELETE AN EMPLOYEE FROM THE DATABASE";
			info.DeletePerson();
			break;
		case 5:
			info.SeeEmployees();
			break;
		case 6:
			goto beginning;
		}

		cout << "\n\t\tDO YOU WANT TO CONTINUE? Y/N: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');

	}
		else if (mainchoice == 6) {
		profile:
		system("CLS");
		system("color 6E");
		double salary;
		salary = 0.005;
		printf("\x1b[47;30m\n\n\t\t MY PROFILE \x1b[0m\n");
		printf("\x1b[46;30m\x1b[30m\n");
		cout<<"\n\t 1) MY SALARY                 ";
		cout << "\n\t 2) DEVELOPERS OF THE PROGRAM ";
		cout << "\n\t 3) GO BACK TO THE DASHBOARD  ";		
		int pchoice;				
		double salary1;
		double total;
		total = salary + salary;
		cout << "\n\n\t";
		while (!(cin >> pchoice))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (pchoice == 1) {
		salary:
			system("CLS");
			system("color 6E");
			printf("\x1b[46;30m\n\n\t  MY SALARY  \x1b[0m\n");
			printf("\x1b[42;30m\n\t0.005$ PER SECOND   \x1b[0m\n");
			printf("\x1b[42;30m\n\t0.3$ PER MINUTE   \x1b[0m\n");
			printf("\x1b[42;30m\n\t18$ PER HOUR   \x1b[0m\n");
			printf("\x1b[42;30m\n\t432$ PER DAY   \x1b[0m\n");
			printf("\x1b[42;30m\n\t3024$ PER WEEK   \x1b[0m\n");
			printf("\x1b[42;30m\n\t12960$ PER MONTH   \x1b[0m\n");
			printf("\x1b[43;30m\n\n\t*IF I WORK NON-STOP*\x1b[0m\n");
			printf("\x1b[43;30m\n\n\n\tGO BACK TO PROFILE? Y/N: \x1b[0m\n");
			cout << "\t";									
			string pchoice1;
			cin >> pchoice1;
			if (pchoice1 == "y" || pchoice1 == "Y") {
				goto profile;
			}		
		}
		else if (pchoice == 2) {
			system("CLS");
			system("color 6E");
			printf("\x1b[46;30m\n\n\t\t DEVELOPERS \x1b[0m\n");
			printf("\x1b[47;30m\n\t AZIZKHUJA ABDUJABBOROV  \x1b[0m\n");
			printf("\x1b[47;30m\t KAMRON KAMILOV          \x1b[0m\n");
			printf("\x1b[43;30m\n\n\n\tGO BACK TO PROFILE? Y/N: \x1b[0m\n");
			cout << "\t";
			string pchoice1;
			cin >> pchoice1;
			if (pchoice1 == "y" || pchoice1 == "Y") {
				goto profile;
			}
		}
		else if (pchoice == 3) {
			goto beginning;
		}
}
		else if (mainchoice == 7) {
		system("CLS");
		system("color 6E");
		printf("\x1b[47;30m\x1b[30m\n");
		cout << "\n\n\t\tINSTRUCTIONS";
		printf("\x1b[46;30m\x1b[30m\n");
		cout << "\n\n\t                                                                                                              \n";
		cout << "\t 1) EVERY DIALOGUE BETWEEN YOU AND A EMPLOYEE IS DEFINED AS:                                                  "; 
		cout << "\n\t                                                                                                              ";
		cout<<"\n\t       BLUE BCKGRD TEXT - YOUR SPEECH;                                                                        "; 
		cout<<"\n\t       WHITE BCKGRD TEXT - EMPLOYEE'S SPEECH                                                                  \n";
		cout << "\t                                                                                                              ";
		cout << "\n\t 2) READ AND FOLLOW THE INSTRUCTIONS IN EACH PART TO SUCCESSFULLY HIRE AND ADD THE EMPLOYEE TO THE DATABASE!  ";
		cout << "\n\t                                                                                                              \n";
		printf("\x1b[43;30m\x1b[30m\n");
		cout << "\n\n\n\t\t GO TO THE DASHBOARD - PRESS 1\n\t\t";
		int q;
		while (!(cin >> q))
		{
			cout << "\n\t\tPLEASE ENTER A CORRECT NUMBER!  TRY AGAIN: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}
		if (q == 1) {
			goto beginning;
		}

}
		else {
		goto beginning;
}


	system("pause");
	return 0;
}

void hr::introduction() {
	system("CLS");
	system("color 0B");
	char arr10[] = { '=','=','=','=','=','=','=','=','=','=','=','=','='
	,'=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','='};

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr10[i];
		Sleep(1);
	}

	char arr84[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr84[i];
		Sleep(1);
	}

	char arr20[] = { '|','|',' ','P','R','O','J','E','C','T',' ','W','A','S',' ','C'
	,'R','E','A','T','E','D',' ','B','Y',':',' ',' ','|','|'};

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr20[i];
		Sleep(40);
	}

	char arr99[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr99[i];
		Sleep(1);
	}

	char arr13[] = { '|','|',' ',' ','A','Z','I','Z','K','H','U','J','A',' ','A','B','D','U','J','A'
	,'B','B','A','R','O','V',' ',' ', '|','|'};

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr13[i];
		Sleep(40);
	}

	char arr23[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', 'U','2','1','1','0','0','0','2',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|'};

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr23[i];
		Sleep(60);
	}

	char arr73[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr73[i];
		Sleep(1);
	}
	

	char arr53[] = { '|','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', 'A','N','D',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t                     ";
	for (int i = 0; i < 30; i++) {
		cout << arr53[i];
		Sleep(20);
	}

	char arr83[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr83[i];
		Sleep(1);
	}

	char arr43[] = {'|','|',' ',' ',' ', ' ', 'K','A','M','R','O','N','B','E','K',' ','K','A','M','I','L','O', 'V',' ', ' ', ' ', ' ',' ', '|','|'};
	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr43[i];
		Sleep(40);
	}

	char arr63[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', 'U','2','1','1','0','0','2','5',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr63[i];
		Sleep(60);
	}

	char arr85[] = { '|','|',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ', ' ', ' ', ' ', ' ',' ', ' ', '|','|' };

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr85[i];
		Sleep(1);
	}

	char arr11[] = { '=','=','=','=','=','=','=','=','=','=','=','=','='
	,'=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','='};

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 30; i++) {
		cout << arr11[i];
		Sleep(1);
	}
	Sleep(1000);
	system("CLS");
}	
void hr::start() {
	system("color 6E");
	char arr2[] = { '=','=','=','=','=','=','=','=','=','=','=','=','='
	,'=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=' };

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 32; i++) {
		cout << arr2[i];
		Sleep(1);
	}
	char arr[] = { '|','|',' ','H','R',' ','F','O','R',' ','R','E','A','S','T','U'
	,'R','A','N','T',' ','B','U','S','I','N','E','S','S',' ','|','|'};

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 32; i++) {
		cout << arr[i];
		Sleep(120);
	}
	char arr1[] = { '=','=','=','=','=','=','=','=','=','=','=','=','='
	,'=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','=','='};

	cout << "\n\t\t\t\t\t\t     ";
	for (int i = 0; i < 32; i++) {
		cout << arr1[i];
		Sleep(1);
	}
	Sleep(1000);
	system("CLS");
}
void hr::start2() {
	cout << "\n\n\n\t\t\tHELLO! YOU'RE SUCCESFULLY HIRED AS A HR MANAGER FOR OUR RESTAURANT!";
	cout << "\n\t\t\tFIRSTLY, SIGN UP TO ENTER YOUR DASHBOARD. ";
	Sleep(6000);
	system("CLS");
}
void hr::signUp() {
	
	
	cout << "\n\n\n\n\t\t  SIGN UP" << endl;
	cout << "\t\tEnter Username: ";
	cin >> username;
	cout << "\t\tEnter Password: ";
	cin >> password;
	cout << "\t\tYour new id is creating please wait";
	for (int i = 0; i < 5; i++) {
		cout << ".";
		Sleep(100);
	}
}
void hr::login() {
	system("CLS");
	cout << "\n\n\n\n\t\t LOGIN" << endl;
	cout << "\t\tEnter Username: ";
	cin >> username1;
	cout << "\t\tEnter Password: ";
	cin >> password1;
	if (username == username1 && password == password1) {
		system("CLS");

	}
	else if (username != username1 && password == password1) {
		cout << "\t\t\aInvalid username please try again";
		Sleep(3000);
		hr::login();
	}
	else if (username == username1 && password != password1) {
		cout << "\t\t\aInvalid password please try again";
		Sleep(3000);
		hr::login();
	}
	else {
		cout << "\t\t\aInvalid username and password please try again";
		Sleep(3000);
		hr::login();
	}
}
void hr::tasks() {
    system("CLS");
    const string employee1List[1] = { "Deliveryman" };
    const string employee2List[1] = { "Chef" };
    const string employee3List[1] = { "Chef Assistant" };
    const string employee4List[1] = { "Supervisor" };
    const string employee5List[4] = { "NOT COMPLETED", "COMPLETED", "COMPLETED", "NOT COMPLETED" };
    string employee = employee1List[rand() % 1];
    string employee1 = employee2List[rand() % 1];
    string employee2 = employee3List[rand() % 1];
    string complete = employee5List[rand() % 4];

	printf("\x1b[46;30m\x1b[30m\n");
    cout << "\n\n\t\tTODAY YOU HAVE SOME SPECIAL TASKS TO DO:\n\n";
	
    
	printf("\x1b[47;30m\x1b[30m\n");
	cout << "\n\n\t\t*HIRE A " << employee << " - " << complete << "      ";
    cout << "\n\t\t_________________________________________";
	printf("\x1b[47;30m\x1b[30m\n");
	cout << "\n\n\t\t*HIRE A " << employee1 << " - " << complete << "             ";
    cout << "\n\t\t_________________________________________";
	printf("\x1b[47;30m\x1b[30m\n");
	cout << "\n\n\t\t*HIRE A " << employee2 << " - " << complete << "   ";
    cout << "\n\t\t_________________________________________";
}
