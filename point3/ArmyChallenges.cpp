#include <iostream>
using namespace std;

class Thearmy {
public:
    void attack() { cout << "attack"; }
    void report() { cout << "report"; }
};

class Soldier : public Thearmy {
public:
    void attack() { cout << "Soldier attacking" << endl; }
    void report() { cout << "Soldier reporting" << endl; }
};

class Vehicle : public Thearmy {
public:
    void move() { cout << "Vehicle moving" << endl; } 
    void report() { cout << "Vehicle reporting" << endl; }
};

int main() {
    Soldier soldier;
    Vehicle vehicle;

    soldier.attack();
    vehicle.move();

    soldier.report();
    vehicle.report();

    return 0;
}