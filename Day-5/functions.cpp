#include "Car_ElectricCar.cpp"

void Car::get(){ // Function to show details of Car
    cout<<"Brand is "<<Brand<<endl;
    cout<<"Model is "<<Model<<endl;
    cout<<"Year of Launch is "<<year<<endl;
    cout<<"Milage is "<<milage<<endl;
}

void Car::set(){ // Set Function to input values from user
    cout<<"Enter Brand :- ";
    cin>>Brand;
    cout<<"Enter Model :- ";
    cin>>Model;
    cout<<"Enter Year of Launch :- ";
    cin>>year;
    cout<<"Enter the milage :- ";
    cin>>milage;
}

float Car::efficiency(){ // Function to Calculate the efficiency
    float cost;
    cout<<"Please enter the cost of fuel per litre in Rupees :- ";
    cin>>cost;
    return cost/milage; // in Rupees/km
}

void Electric_Car::get(){ // Function to show details of Electric Car
    cout<<"Details of Electric Car is given below :- "<<endl;
    Car::get();
    cout<<"Battery_Range of Electric Car :- "<<battery_range<<" units "<<endl;
    cout<<"Full Charge unit i.e maximum distance in km ,electric car can run :- "<<full_charge_units<<endl;
}

void Electric_Car::set(){ // Set Function to input values from user
    Car::set();
    cout<<"Enter the full charge units in km of Electric Car :- ";
    cin>>full_charge_units;
    cout<<"Enter the battery_range in units of Electric Car :- ";
    cin>>battery_range;
    milage = full_charge_units/battery_range;
    cout<<"Milage of Electric Car in km/unit as per your data :- "<<milage<<endl;
}

float Electric_Car::efficiency(){ // Function to Calculate the efficiency
    float cost;
    cout<<"Please enter the cost of fuel per unit in Rupees :- ";
    cin>>cost;
    return cost/milage; // in Rupees/km
}