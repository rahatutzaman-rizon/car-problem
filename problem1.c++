#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	string name;
	string model;
	int year;
};

class ElectricCar : Car {
public:
	double batteryCapacity;
	ElectricCar(string name, string model, int year, double batteryCapacity) {
		this->name = name;
		this->model = model;
		this->year = year;
		this->batteryCapacity=batteryCapacity;
	}
	void display(){
		cout<<"Car Information:"<<endl;
		cout<<this->year<<" "<<this->name<<" "<<this->model<<endl;
		cout<<"Battery Capacity: "<<this->batteryCapacity<<" kWh"<<endl;

	}
};

class GasCar : Car {
 public:
	double fuelEfficiency; 

public:
	GasCar(string name,string model, int year, double fuelEfficiency){
		this->name = name;
		this->model = model;
		this->year = year;
		this->fuelEfficiency=fuelEfficiency;
	}
	void display(){
		cout<<"Car Information:"<<endl;
		cout<<this->year<<" "<<this->name<<" "<<this->model<<endl;
		cout<<"Fuel Efficiency: "<<this->fuelEfficiency<<" MPG"<<endl;
	}
};

int main() {
	
	string carType;

	cout << "Enter car type (Electric/Gas): ";
	cin >> carType;

	string name, model;
	int year;

	cout << "Enter Name: ";
	cin >> name;

	cout << "Enter model: ";
	//cin >> model;
	getchar();
	getline(cin,model);

	cout << "Enter year: ";
	cin >> year;

	if (carType == "Electric") {
		double batteryCapacity;
		cout << "Enter battery capacity (kWh): ";
		cin >> batteryCapacity;
		ElectricCar electricCar(name, model, year, batteryCapacity);
		electricCar.display();
	} else if (carType == "Gas") {
		double fuelEfficiency;
		cout << "Enter fuel efficiency (MPG): ";
		cin >> fuelEfficiency;

		GasCar gasCar(name, model, year, fuelEfficiency);
		gasCar.display();
	} else {
		cout << "Invalid car typ"<<endl;
	}

	return 0;
}