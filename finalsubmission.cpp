

#include <iostream>
using namespace std;

int main()
{
	string age;
	string y = "y";
	string n = "n";
	string userSelection;
	cout << "Enter your age :";
	cin >> age;

	if (age >= "16" && age <= "21") {
		cout << "Do you want to go to the mall (y/n) :";
		cin >> userSelection;
	}
	else if (age >= "22" && age <= "30") {
		cout << "do you want to go to a trip to hawaii (y/n) :";
		cin >> userSelection;
	}
	else {
		cout << "Your age does not match our record";
	}

	if (userSelection == y) {
		cout << "Enjoy";
	}
	else if (userSelection == n) {
		cout << "Cancelled";
	}
	else {
		cout << "Wrong Choice";
	}

	//switch (userSelection)
	//{
	//case "y":
	//	cout << "Enjoy";
	//	break;
	//default:
	//	break;
	//}
}
