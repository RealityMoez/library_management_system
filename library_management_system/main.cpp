#include <iostream>
#include <string>


using namespace std;

struct userInfo
{
	int phoneNumber1, phoneNumber2, phoneNumber3;
	string ID, name, password, email, account_type;
};
int adminloginValidation(string, string);
int user_account(userInfo& user_account_parameter);
int accessMenu(userInfo& user_account_parameter);
int book1_copies = 10, book2_copies = 10, book3_copies = 10, book4_copies = 10, book5_copies = 10;



int main()
{
	string adminUsername, adminPassword;

	adminloginValidation(adminUsername, adminPassword);


	return 0;
}

int adminloginValidation(string adminUsername, string adminPassword)
{
	string adminChoice;
	userInfo user_account_variable;
	while (true)
	{

		cout << "		-------------------------------------------\n";
		cout << "			LIBRARY MANAGEMENT SYSTEM\n";
		cout << "		-------------------------------------------\n" << endl;
		cout << "Enter Admin Username : ";
		cin >> adminUsername;
		cout << "\nEnter Admin Password : ";
		cin >> adminPassword;
		if (adminUsername == "lib1" && adminPassword == "librarian1") { cout << "\n   Login Successful , Welcome!\n\n"; break; }
		else if (adminUsername == "lib2" && adminPassword == "librarian2") { cout << "\n   Login Successful , Welcome!\n\n"; break; }
		else if (adminUsername == "lib3" && adminPassword == "librarian3") { cout << "\n   Login Successful , Welcome!\n\n"; break; }
		else if (adminUsername == "lib4" && adminPassword == "librarian4") { cout << "\n   Login Successful , Welcome!\n\n"; break; }
		else { cout << "\n   Invalid Login , Please Try Again ! \n\n"; }
	}
	while (true)
	{
		cout << "		-------------------------------------------\n";
		cout << "			LIBRARY MANAGEMENT SYSTEM\n";
		cout << "		-------------------------------------------\n" << endl;
		cout << "1.Create User Account\n2.Exit\n\n";
		cout << "Choice : "; cin >> adminChoice;
		if (adminChoice == "1") break;
		else if (adminChoice == "2") { cout << endl; return 0; }
		else cout << "\n   Invalid choice !\n";
	}

	user_account(user_account_variable);

	return 0;
}

int user_account(userInfo& user_account_parameter)
{
	string ID_submitted, password_submitted;
	cout << "		-------------------------------------------\n";
	cout << "			LIBRARY MANAGEMENT SYSTEM\n";
	cout << "		-------------------------------------------\n";
	cout << "                              REGISTERATION\n";
	cout << "                -------------------------------------------\n"; cout << endl;
	cout << " > ID : \n\n  ";
	cin >> user_account_parameter.ID;
	cout << "\n > Name : \n\n  ";
	cin >> user_account_parameter.name;
	cout << "\n > Email : \n\n  ";
	cin >> user_account_parameter.email;
	cout << "\n > Password : \n\n  ";
	cin >> user_account_parameter.password;
	cout << "\n > Phone Number : \n";
	cout << "\n 1st Number : "; cin >> user_account_parameter.phoneNumber1;
	cout << "\n 2nd Number : "; cin >> user_account_parameter.phoneNumber2;
	cout << "\n 3rd Number : "; cin >> user_account_parameter.phoneNumber3;

	while (true)
	{
		cout << "\n  Account type ( 1.Student | 2.Staff | 3.Guest ):\n\n  ";
		cin >> user_account_parameter.account_type; cout << endl;
		if (user_account_parameter.account_type == "1") { cout << "  Student\n\n"; break; }
		else if (user_account_parameter.account_type == "2") { cout << "  Staff\n\n"; break; }
		else if (user_account_parameter.account_type == "3") { cout << "  Guest\n\n"; break; }
		else cout << "   Invalid Choice !\n";
	}

	cout << "		-------------------------------------------\n";
	cout << "			LIBRARY MANAGEMENT SYSTEM\n";
	cout << "		-------------------------------------------\n";
	cout << "                                  LOGIN\n";
	cout << "                -------------------------------------------\n"; cout << endl;
	while (true)
	{
		cout << "Enter User ID : ";
		cin >> ID_submitted;
		cout << "\nEnter User Password : ";
		cin >> password_submitted;
		if (ID_submitted == user_account_parameter.ID && password_submitted == user_account_parameter.password)
		{
			cout << "\n\n   Login Successful !\n\n"; break;
		}
		else cout << "\n\n   Invalid Login , Please Try Again ! \n\n";
	}
	accessMenu(user_account_parameter);


	return 0;
}


int accessMenu(userInfo& user_account_parameter)
{
	string userChoice;
	string userSearch;
	string book_buy_choice;

	cout << "		-------------------------------------------\n";
	cout << "			LIBRARY MANAGEMENT SYSTEM\n";
	cout << "		-------------------------------------------\n";
	cout << "                               ACCESS MENU\n";
	cout << "                -------------------------------------------\n"; cout << endl;
	cout << "1.Show all Books\n2.Search a Book\n3.Buy a Book\n4.Exit\n\n";
	cout << "Choice : "; cin >> userChoice; cout << endl;
	if (userChoice == "1" || userChoice == "2" || userChoice == "3" || userChoice == "4")
	{
		if (userChoice == "1")
		{
			cout << "		-------------------------------------------\n";
			cout << "			LIBRARY MANAGEMENT SYSTEM\n";
			cout << "		-------------------------------------------\n";
			cout << "                                BOOKS LIST\n";
			cout << "                -------------------------------------------\n"; cout << endl;
			cout << " BOOK 1 :\n\n Title : Physics for Scientists & Engineers\n Edition : 6th edition\n Catogery : Science\n Production Year : 2004\n Number of Copies : " << book1_copies << "\n\n";
			cout << " BOOK 2 :\n\n Title : Electrical Engineering\n Edition : 5th edition\n Catogery : Science\n Production Year : 2011\n Number of Copies : " << book2_copies << "\n\n";
			cout << " BOOK 3 :\n\n Title : Management\n Edition : 11th edition\n Catogery : Business\n Production Year : 2012\n Number of Copies : " << book3_copies << "\n\n";
			cout << " BOOK 4 :\n\n Title : Structured Programming with C++\n Edition : 1st edition\n Catogery : Computer Science\n Production Year : 2012\n Number of Copies : " << book4_copies << "\n\n";
			cout << " BOOK 5 :\n\n Title : Calculus for Scientists & Engineers\n Edition : 1st edition\n Catogery : Mathematics\n Production Year : 2013\n Number of Copies : " << book5_copies << "\n\n";

			accessMenu(user_account_parameter);
		}
		else if (userChoice == "2")
		{
			while (true)
			{
				cout << "\nEnter Book's Title/Production year :  ";
				getline(cin, userSearch);
				getline(cin, userSearch);
				if (userSearch == "Physics for Scientists & Engineers")
				{
					cout << "\n\n BOOK 1 :\n\n Title : Physics for Scientists & Engineers\n Edition : 6th edition\n Catogery : Science\n Production Year : 2004\n Number of Copies : " << book1_copies << "\n\n"; break;
				}
				else if (userSearch == "Electrical Engineering" || userSearch == "2011")
				{
					cout << "\n\n BOOK 2 :\n\n Title : Electrical Engineering\n Edition : 5th edition\n Catogery : Science\n Production Year : 2011\n Number of Copies : " << book2_copies << "\n\n"; break;
				}
				else if (userSearch == "Management")
				{
					cout << "\n\n BOOK 3 :\n\n Title : Management\n Edition : 11th edition\n Catogery : Business\n Production Year : 2012\n Number of Copies : " << book3_copies << "\n\n"; break;
				}
				else if (userSearch == "Structured Programming with C++")
				{
					cout << "\n\n BOOK 4 :\n\n Title : Structured Programming with C++\n Edition : 1st edition\n Catogery : Computer Science\n Production Year : 2012\n Number of Copies : " << book4_copies << "\n\n"; break;
				}
				else if (userSearch == "Calculus for Scientists & Engineers" || userSearch == "2013")
				{
					cout << "\n\n BOOK 5 :\n\n Title : Calculus for Scientists & Engineers\n Edition : 1st edition\n Catogery : Mathematics\n Production Year : 2013\n Number of Copies : " << book5_copies << "\n\n"; break;
				}
				else if (userSearch == "2012")
				{
					cout << "\n\n BOOK 3 :\n\n Title : Management\n Edition : 11th edition\n Catogery : Business\n Production Year : 2012\n Number of Copies : " << book3_copies << "\n\n";
					cout << " BOOK 4 :\n\n Title : Structured Programming with C++\n Edition : 1st edition\n Catogery : Computer Science\n Production Year : 2012\n Number of Copies : " << book4_copies << "\n\n"; break;
				}
				else cout << "\n   Invalid Search , Please Try Again !\n";
			}
			accessMenu(user_account_parameter);
		}
		else if (userChoice == "3")
		{
			if (user_account_parameter.account_type == "2")
			{
				cout << " BOOK 1 :\n\n Title : Physics for Scientists & Engineers\n Edition : 6th edition\n Catogery : Science\n Production Year : 2004\n Number of Copies : " << book1_copies << "\n\n";
				cout << " BOOK 2 :\n\n Title : Electrical Engineering\n Edition : 5th edition\n Catogery : Science\n Production Year : 2011\n Number of Copies : " << book2_copies << "\n\n";
				cout << " BOOK 3 :\n\n Title : Management\n Edition : 11th edition\n Catogery : Business\n Production Year : 2012\n Number of Copies : " << book3_copies << "\n\n";
				cout << " BOOK 4 :\n\n Title : Structured Programming with C++\n Edition : 1st edition\n Catogery : Computer Science\n Production Year : 2012\n Number of Copies : " << book4_copies << "\n\n";
				cout << " BOOK 5 :\n\n Title : Calculus for Scientists & Engineers\n Edition : 1st edition\n Catogery : Mathematics\n Production Year : 2013\n Number of Copies : " << book5_copies << "\n\n";
				cout << " Choose a Book to Buy (Enter Book Number) : "; cin >> book_buy_choice; cout << "\n\n";
				if (book_buy_choice == "1")
				{
					if (book1_copies == 0)
					{
						cout << "\n  Can't Buy , No Available Copies for This Book !\n\n"; accessMenu(user_account_parameter);
					}
					else { cout << "\n Done ! You bought 'Physics for Scientists & Engineers'\n\n"; book1_copies--; }
				}
				else if (book_buy_choice == "2")
				{
					if (book2_copies == 0)
					{
						cout << "\n  Can't Buy , No Available Copies for This Book !\n\n"; accessMenu(user_account_parameter);
					}
					else { cout << "\n Done ! You bought 'Electrical Engineering'\n\n"; book2_copies--; }
				}
				else if (book_buy_choice == "3")
				{
					if (book3_copies == 0)
					{
						cout << "\n  Can't Buy , No Available Copies for This Book !\n\n"; accessMenu(user_account_parameter);
					}
					else { cout << "\n Done ! You bought 'Management'\n\n"; book3_copies--; }
				}
				else if (book_buy_choice == "4")
				{
					if (book4_copies == 0)
					{
						cout << "\n  Can't Buy , No Available Copies for This Book !\n\n"; accessMenu(user_account_parameter);
					}
					else { cout << "\n Done ! You bought 'Structured Programming with C++'\n\n"; book4_copies--; }
				}
				else if (book_buy_choice == "5")
				{
					if (book5_copies == 0)
					{
						cout << "\n  Can't Buy , No Available Copies for This Book !\n\n"; accessMenu(user_account_parameter);
					}
					else { cout << "\n Done ! You bought 'Calculus for Scientists & Engineers'\n\n"; book5_copies--; }
				}
				else
				{
					cout << "\n   Invalid Choice !\n\n"; accessMenu(user_account_parameter);
				}
				accessMenu(user_account_parameter);
			}
			else if (user_account_parameter.account_type == "1" || user_account_parameter.account_type == "3")
			{
				cout << "\n Only Staff Can Buy Books !\n\n"; accessMenu(user_account_parameter);
			}
		}
		else if (userChoice == "4") return 0;

	}
	else
	{
		cout << "\n   Invalid Choice !\n\n"; accessMenu(user_account_parameter);
	}
	return 0;
}
