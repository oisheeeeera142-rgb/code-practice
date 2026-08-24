#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;
    string ID;
    string Department;
    string Address;
    string Semester;
    int Credit;
    double age;
    string a;
    double fee;

public:
    double cgpa;
    void Getinfo()
    {
        name = "oishe das";
        ID = "22-49340-3";
        Department = "CSE";
        Address = "Dhaka";
        Semester = "1th";
        cout << "The amounrt of credit: ";
        cin >> Credit;
        age = 20;
        cout << "Enter cgpa: ";
        cin >> cgpa;
        cout << "Type of student: ";
        cin >> a;
    }

    void TutionFee()
    {

        fee = 5500 * Credit;
        if (a == "w")
        {
            fee -= fee * 0.2;
        }
        if (a == "s")
        {
            fee -= fee * 0.5;
        }
    }

    void printinfo()
    {
        cout << "Student name: " << name << endl;
        cout << "student id: " << ID << endl;
        cout << "Student address: " << Address << endl;
        cout << "Student Semister: " << Semester << endl;
        cout << "Student CGPA: " << cgpa << endl;
        cout << "Student age: " << age << endl;
        cout << "Student Tusion fee: " << fee << endl;
    }
};

int main()
{
    student a;
    a.Getinfo();
    a.TutionFee();
    a.printinfo();
    return 0;
}
