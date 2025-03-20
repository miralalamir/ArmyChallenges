#include <iostream>
using namespace std;

class Vehicle
{
public:
    string name;
    string functionality;
    string type;

public:
    void Name(string n){
        name = n;
    };
    void Type(string t){
        type = t;
    };
    void Functionality(string f){
        functionality = f;
    };
    void fire()
    {
        cout << "Fire!!" << endl;
    };
    void move()
    {
        string n = name;
        string t = type;
        cout << "The " << t << " " << n << " moved in xyz direction." << endl;
    };
    void report()
    {
        cout << "Vehicle's Report: ......." << endl;
    };
};

int main() {
    Vehicle v1;
    v1.Type("Helicopter");
    v1.Name("EC155");
    v1.Functionality("Transporting");
    v1.move();
    v1.report();
    Vehicle v2;
    v2.Type("Tank");
    v2.Name("Anarchy");
    v2.Functionality("Shooting");
    v2.move();
    v2.fire();
    Vehicle v3;
    v3.Type("Military Truck");
    v3.Name("ACMAT");
    v3.Functionality("Transporting");
    v3.move();
    v3.report();
    v3.fire();
    return 0;
};