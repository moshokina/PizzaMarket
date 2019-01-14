#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pizzeria;
	int diameter = 0;
	float weight = 0;
	cout << "Enter pizzeria: " << endl;
	getline(cin, pizzeria);
	cout << "Enter pizza diameter: " << endl;
	cin >> diameter;
	cout << "Enter pizza weight: " << endl;
	cin >> weight;
	cout << "You entered: " << endl;
	cout << "Pizzeria: " << pizzeria << endl
		<< "Pizza diameter: " << diameter << endl
		<< "Pizza weight: " << weight << endl;
	return 0;
}
