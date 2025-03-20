#include <iostream>
#include <vector>
using namespace std;

class Unit {
public:
    string name;
    Unit(string n) : name(n) {}
    virtual void executeCommand(string command) = 0;
    virtual void report() {
        cout << name << " is reporting!" << endl;
    }
    virtual ~Unit() {}
};

class Army {
private:
    vector<Unit*> units;
public:
    void addUnit(Unit* unit) {
        units.push_back(unit);
    }
    void issueCommand(string command) {
        for (auto unit : units) {
            unit->executeCommand(command);
        }
    }
    void report() {
        for (auto unit : units) {
            unit->report();
        }
    }
    ~Army() {
        for (auto unit : units) {
            delete unit;
        }
    }
};

class Soldier : public Unit {
protected:
    int damage;
public:
    Soldier(string n, int d) : Unit(n), damage(d) {}
    void executeCommand(string command) override {
        if (command == "attack") {
            cout << name << " attacks with damage " << damage << "!" << endl;
        } else if (command == "defend") {
            cout << name << " is defending!" << endl;
        } else {
            report();
        }
    }
};

class Knight : public Soldier {
public:
    Knight() : Soldier("Knight", 50) {}
};

class Archer : public Soldier {
public:
    Archer() : Soldier("Archer", 40) {}
};

class Vehicle : public Unit {
public:
    Vehicle(string n) : Unit(n) {}
    void executeCommand(string command) override {
        if (command == "move") {
            cout << name << " is moving!" << endl;
        } else if (command == "fire") {
            cout << name << " fires!" << endl;
        } else {
            report();
        }
    }
};

class Tank : public Vehicle {
public:
    Tank() : Vehicle("Tank") {}
};

int main() {
    Army myArmy;
    myArmy.addUnit(new Knight());
    myArmy.addUnit(new Archer());
    myArmy.addUnit(new Tank());

    cout << "Issuing attack command:\n";
    myArmy.issueCommand("attack");

    cout << "\nIssuing move command:\n";
    myArmy.issueCommand("move");

    cout << "\nIssuing report command:\n";
    myArmy.report();
    
    return 0;
}
