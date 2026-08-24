#include<iostream>
#include<string.h>
using namespace std;

class Patient {
protected:
    string Name , ID , PCR ;
    float Charge = 1500.00;
public:

    Patient () {}

    Patient(string pcr){
        PCR = pcr;
        if (PCR =="Positive"){
           cout<<"Covid Positive Patient ."<<endl;
        }
        else if (PCR == "Negative") {
            cout<<"Covid Negative Patient ."<<endl;
        }
        else {
            cout<<"Invalid Status."<<endl;
        }
    }
    void getpatientinfo (string nm,string id){
        Name = nm;
        ID = id;
    }

    void PrintInfo () {
        cout<<"Name : " <<Name<<endl
        <<"ID : " <<ID<<endl
        <<"Charge : " <<Charge<<endl;
    }

};

class CovidPatient : public Patient{
public:
    CovidPatient(string a ) : Patient (a){
        if (PCR=="Positive"){
            Charge=Charge-(Charge*0.15);
            cout<<"You will get 15% discount ."<<endl;

        }
        else if(PCR== "Negative") {
            cout<<"No Discount Available ."<<endl;
        }
        else{cout<<"Invalid Status."<<endl;}
    }
};
class NormalPatient : public CovidPatient {
public:
    NormalPatient(string a) : CovidPatient (a) {
        if(a=="Positive"){
        cout<<"Discount Available ."<<endl;
        }
        else if (a=="Negative"){
            cout<<"NO Discount Available ."<<endl;
        }
        else {

        }
    }
};
int main () {
NormalPatient a("Positive");
a.getpatientinfo("p","12");
a.PrintInfo();

NormalPatient b("Negative");
b.getpatientinfo("p","12");
b.PrintInfo();

}

