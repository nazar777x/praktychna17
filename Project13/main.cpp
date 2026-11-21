#include  <iostream>
using namespace std;

struct praska
{
	char firma[50];
	char model[50];
	char color[50];
	int minTemp;
	int maxTemp;
	char par[50];
	int power;
};

void Init(praska& praska)
{
	cout << "Enter firma: "; cin >> praska.firma;
	cout << "Enter model: "; cin >> praska.model;
	cout << "Enter color: "; cin >> praska.color;
	cout << "Enter minTemp: "; cin >> praska.minTemp;
	cout << "Enter maxTemp: "; cin >> praska.maxTemp;
	cout << "Enter par: "; cin >> praska.par;
	cout << "Enter power: "; cin >> praska.power;
}

void Show(praska& praska)
{
	cout << "Firma: " << praska.firma << endl;
	cout << "Model: " << praska.model << endl;
	cout << "Color: " << praska.color << endl;
	cout << "minTemp: " << praska.minTemp << endl;
	cout << "maxTemp: " << praska.maxTemp << endl;
	cout << "Par: " << praska.par << endl;
	cout << "Power: " << praska.power << endl;
}
int main()
{
	int a = 4;
	praska p = {};
	Init(p);
	Show(p);
}