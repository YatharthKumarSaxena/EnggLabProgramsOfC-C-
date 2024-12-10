#include "functions.cpp"
int main(){

    // Car object by Default Constructor

    cout<<"Object Creation of Car by Default Constructor :- \n";
    Car obj1;
    cout<<"Car details is given below :- \n";
    obj1.get();

    // Car object by Parameterized Constructor
    
    cout<<"Object Creation of Car by Parameterized Constructor :- \n";
    string Brand,Model;
    int milage,year;
    cout<<"Enter Brand of Car :- ";
    cin>>Brand;
    cout<<"Enter Model of Car :- ";
    cin>>Model;
    cout<<"Enter year of Car :- ";
    cin>>year;
    cout<<"Enter the milage of Car :- ";
    cin>>milage;
    Car obj2(Brand,Model,year,milage);
    cout<<"Car details is given below :- \n";
    obj2.get();

    // Car object by Setter

    cout<<"Object Creation of Car by Setter :- \n";
    Car obj3;
    obj3.set();
    cout<<"Car details is given below :- \n";
    obj3.get();

    // Electric_Car object by Default Constructor

    cout<<"Object Creation of Electric Car by Default Constructor :- \n";
    Electric_Car obj4;
    obj4.get();

    // Electric_Car object by Parameterized Constructor

    cout<<"Object Creation of Electric Car by Parameterized Constructor :- \n";
    int full_charge_unit,battery_range;
    cout<<"Enter Brand of Car :- ";
    cin>>Brand;
    cout<<"Enter Model of Car :- ";
    cin>>Model;
    cout<<"Enter year of Car :- ";
    cin>>year;
    cout<<"Enter the full charge units of Electric Car in km :- ";
    cin>>full_charge_unit;
    cout<<"Enter the battery range of Electric Car in units :- ";
    cin>>battery_range;
    Electric_Car obj5(Brand,Model,year,battery_range,full_charge_unit);
    obj5.get();

    // Electric_Car object by Setter

    cout<<"Object Creation of Electric Car by Setter :- \n";
    Electric_Car obj6;
    obj6.set();
    obj6.get();

    return 0;
}