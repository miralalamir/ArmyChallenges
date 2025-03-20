#include <iostream>
#include <string>  

using namespace std;


int offensive(int off_sold, float off_damg, string off_job)
{
    // This part about how many offensive soldiers
    cout << "Enter how many offensive soldiers: ";
    cin >> off_sold;

    // This part about offensive soldiers damage and to print data
    for (int i = 1; i <= off_sold; i++)
    {
        cout << "How much damage the offensive soldier " << i << " :";
        cin >> off_damg;

        cout << "Offensive Soldier " << i << " damage is: " << off_damg << "\n";

        cout << "What is soldier " << i << " job (knight or archer): ";
        cin >> off_job;
        
        if (off_job == "knight")
        {
            cout << "Offensive Soldier " << i << " is a Knight.\n";
        }
        else if (off_job == "archer")
        {
            cout << "Offensive Soldier " << i << " is an Archer.\n";
        }
        else
        {
            cout << "There is no job as you wrote.\n";
            exit(0);
        }
    }

    return 0;
}


int defensive(int def_sold, float def_damg, string def_job)
{
    // This part about how many defensive soldiers
    cout << "Enter how many defensive soldiers: ";
    cin >> def_sold;

    // This part about soldiers damage and to print data
    for (int i = 1; i <= def_sold; i++)
    {
        cout << "How much damage the defensive soldier " << i << " :";
        cin >> def_damg;

        cout << "Defensive Soldier " << i << " damage is: " << def_damg << "\n";

        cout << "What is soldier " << i << " job (knight or archer): ";
        cin >> def_job;

        if (def_job == "knight")
        {
            cout << "Defensive Soldier " << i << " is a Knight.\n";
        }
        else if (def_job == "archer")
        {
            cout << "Defensive Soldier " << i << " is an Archer.\n";
        }
        else
        {
            cout << "There is no job as you wrote.\n";
            exit(0);
        }
    }

    return 0;
}


int adaptable(int ada_sold, float adap_damage, string ada_job)
{
    // This part about how many adaptable soldiers
    cout << "Enter how many adaptable soldiers: ";
    cin >> ada_sold;

    // This part about soldiers damage and to print data
    for (int i = 1; i <= ada_sold; i++)
    {
        cout << "How much damage the adaptable soldier " << i << " :";
        cin >> adap_damage;

        cout << "Adaptable Soldier " << i << " damage is: " << adap_damage << "\n";

        cout << "What is soldier " << i << " job (knight or archer): ";
        cin >> ada_job;

        if (ada_job == "knight")
        {
            cout << "Adaptable Soldier " << i << " is a Knight.\n";
        }
        else if (ada_job == "archer")
        {
            cout << "Adaptable Soldier " << i << " is an Archer.\n";
        }
        else
        {
            cout << "There is no job as you wrote.\n";
            exit(0);
        }
    }

    return 0;
}

int main()
{
    int off_soldi, def_soldi, ada_soldi;
    float off_damage, def_damage, ada_damage;
    string off_job, def_job, ada_job; 

    offensive(off_soldi, off_damage, off_job);
    defensive(def_soldi, def_damage, def_job);
    adaptable(ada_soldi, ada_damage, ada_job);

    return 0;
}

