#include<iostream>
#include<string>
using namespace std;
int main()
{
	string NameofFruit;
	cout <<"Fruit Picker\nStay Healthy"<<endl;
	cout << "Pick the Friut you want to eat from the following" << endl;
	cout << "Apple\tGrapes\tBananan\tOrange"<< endl;
	cout << "please enter the name of fruit" << endl;
	cin >> NameofFruit;
	
	if (NameofFruit == "Apple")

		cout << "please pick up apple and banana as well" << endl;
	else if (NameofFruit == "Orange")
		cout << "Please Pick up Orange and Grapes as well" << endl;
	else if (NameofFruit == "Grapes")
		cout << "please pick up Grapes and Bananas as well" << endl;
	else
	{
		cout << "You are not able to pick any fruit" << endl;
	}
	return 0;
}
