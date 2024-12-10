#include <iostream>
#include <string>
using namespace std;

class Car{  // Base Class

    // Protected Data Members

protected:
    string Brand;
    string Model;
    int year;
    int milage;

public:

    // Default Constructor Using Initialization List

    Car():Brand("Ford"),Model("XYZ"),year(2005),milage(60){}

    // Parameterized Constructor

    Car(string Brand,string Model,int year,int milage){
        this->Brand = Brand;
        this->milage = milage;
        this->year = year;
        this->Model = Model;
    }

    // Member Functions

    void set(); // Setter
    void get(); // Getter
    float efficiency();
};

class Electric_Car: public Car{ // Derived Class

    // Private Data Members

    int battery_range;
    int full_charge_units;

public:

    // Default Constructor using Initialization List

    Electric_Car():Car(),battery_range(300),full_charge_units(5){}

    // Parameterized Constructor

    Electric_Car(string Brand,string Model,int year,int battery_range,int full_charge_units){
        this->Brand = Brand;
        this->Model = Model;
        this->year = year;
        this->battery_range = battery_range;
        this->full_charge_units = full_charge_units;
        milage = full_charge_units/battery_range;
    }

    // Member Functions

    void set(); // Setter
    void get(); // Getter
    float efficiency();
};