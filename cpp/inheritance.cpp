//project on inheritance in cpp
#include <iostream>
using namespace std;
class emp
{
    private:
    string name;
    int emp_id;

    public:
    //constructor
    emp (string name, int emp_id)
    {
        this->name = name;
        this->emp_id = emp_id;
    }
    //getters or accessors
    string getEmpName () { return name; }
    int getEmpId () { return emp_id; }

    //setters or mutators
    void setEmpName (string name) { this->name = name; }
    void setEmpId (int emp_id) { this->emp_id = emp_id; }
};
class full_emp : public emp
{
    private:
    double salary;

    public:
    //constructor
    full_emp (string name = "unknown", int emp_id = 100, double salary = 40000.00) : emp (name, emp_id)
    {
        this->salary = salary;
    }

    //accessors or getters
    double getSalary () { return salary; }

    //mutators or setters
    void setSalary (double salary) { this->salary = salary; }
};
class part_emp : public emp
{
    private:
    double daily_wage;

    public:
    //constructor
    part_emp (string name = "unknown", int emp_id = 100, double daily_wage = 1333.33) : emp (name, emp_id)
    {
        this->daily_wage = daily_wage;
    }
    //accessors or getters
    double getDailyWage () { return daily_wage; }

    //mutators or setters
    void setDailyWage (double daily_wage) { this->daily_wage = daily_wage; }
};
int main ()
{
    full_emp p1 ("John", 2102, 50000);
    part_emp p2 ("Mark", 3214, 1200.20);
    cout << "salary of " << p1.getEmpName ()  << " is: " << p1.getSalary () << '\n';
    cout << "daily wage of " << p2.getEmpName () << " is: " << p2.getDailyWage () << '\n';
    return 0;
}
