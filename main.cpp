#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
	string pizzeria;
	int diameter;
	float weight;
};

Pizza * inputData()
{
	Pizza * pizza = new Pizza;

    cout << "Enter pizzeria: " << endl;
    getline(cin, pizza->pizzeria);
    cout << "Enter pizza diameter: " << endl;
    cin >> pizza->diameter;
    cout << "Enter pizza weight: " << endl;
    cin >> pizza->weight;

	return pizza;
}

void outputData(Pizza * pizza)
{
    cout << "You entered: " << endl;
    cout << "Pizzeria: " << pizza->pizzeria << endl
        << "Pizza diameter: " << pizza->diameter << endl
        << "Pizza weight: " << pizza->weight << endl;
}

int main()
{
	Pizza *myPizza = new Pizza;
	myPizza = inputData();
	outputData (myPizza);
	delete myPizza;
	return 0;
}
