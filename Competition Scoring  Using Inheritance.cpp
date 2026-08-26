#include<iostream>
#include<conio.h>
using namespace std;
class codingcompetitor{
protected:
    string name;
    string id;
    int comcode;
    float penalty;
public:
    codingcompetitor(string a,string b ,int c,float d){
        name =a;
        id=b;
        comcode=c;
        penalty=d;
    }

    void scoreofcompetitor(){
        float result;
        result=comcode*2-penalty*1.5;
        cout<<"After penalty = "<<result<<endl;
    }

};
class competitorx:public codingcompetitor
{
public:
    competitorx(string a,string b,int c,float d):codingcompetitor(a,b,c,d)
    {
    }
 void display()
    {


        cout<<"Enter Your Name : "<<name<<endl;
         cout<<"Enter Your Id : "<<id<<endl;
          cout<<"Enter Your Codicompetitor : "<<comcode<<endl;
           cout<<"Penalty is : "<<penalty<<endl;
    }
};

class competitory:public codingcompetitor
{
public:
    competitory(string a,string b,int c,float d):codingcompetitor(a,b,c,d)
    {
    }
 void display()
    {


        cout<<"Enter Your Name : "<<name<<endl;
         cout<<"Enter Your Id : "<<id<<endl;
          cout<<"Enter Your Codicompetitor : "<<comcode<<endl;
           cout<<"Penalty is : "<<penalty<<endl;
    }
};
class competitorz:public codingcompetitor
{
public:
    competitorz(string a,string b,int c,float d):codingcompetitor(a,b,c,d)
    {
    }
 void display()
    {


        cout<<"Enter Your Name : "<<name<<endl;
         cout<<"Enter Your Id : "<<id<<endl;
          cout<<"Enter Your Codicompetitor : "<<comcode<<endl;
           cout<<"Penalty is : "<<penalty<<endl;
    }
};


int main(){

competitorx n1("Arnob Reduan","22-49222-3",15,3);
n1.display();
n1.scoreofcompetitor();
cout<<endl;
cout<<"------------------------------------------"<<endl<<endl;
competitory n2("Ayman","22-49556-3",13,3);
n2.display();
n2.scoreofcompetitor();
cout<<endl;
cout<<"------------------------------------------"<<endl<<endl;
competitorz n3("Aymanur Rahman","22-49557-3",17,2);
n3.display();
n3.sco
