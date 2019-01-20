#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
	string pizzeria;
	int diameter;
	float weight;
};

Pizza inputData()
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

    Pizza pizza =
    {
        pizzeria,
        diameter,
        weight
    };
	return pizza;
}

void outputData(Pizza pizza)
{
    cout << "You entered: " << endl;
    cout << "Pizzeria: " << pizza.pizzeria << endl
        << "Pizza diameter: " << pizza.diameter << endl
        << "Pizza weight: " << pizza.weight << endl;
}

int main()
{
	Pizza *myPizza = new Pizza;
	*myPizza = inputData();
	outputData (*myPizza);
	delete myPizza;
	return 0;
}
