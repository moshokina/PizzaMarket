#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
	string pizzeria;
	int diameter;
	float weight;
};

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

	Pizza myPizza = 
	{
		pizzeria,
		diameter,
		weight
	};

	cout << "You entered: " << endl;
	cout << "Pizzeria: " << myPizza.pizzeria << endl
		<< "Pizza diameter: " << myPizza.diameter << endl
		<< "Pizza weight: " << myPizza.weight << endl;
	return 0;
}
