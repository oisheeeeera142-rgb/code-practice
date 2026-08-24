#include<iostream>
using namespace std;
class Mobile{
private:
string Owner;
string Number;
float  Balance;
string OS;
bool Lock ;

 public:

    Mobile()
    {
        cout<<"Constructor called"<<endl;
    }

    Mobile(string x,string y,float z,string i,bool j)
    {
       Owner=x;
       Number=y;
       Balance=z;
         OS =i;
       Lock =j;
    }
    void Recharge(float amount)
    {
        if(Lock==1)
        {
            cout<<"mobile is lock"<<endl;
        }else
        {
           cout<<"mobile is unlock"<<endl;

       Balance =Balance+amount;
        }
    }
    void Calls_one(float timeduration)
    {
        if(Lock==1)
        {
           cout<<"mobile is lock"<<endl;

        }else{
         cout<<"mobile is unlock"<<endl;

        Balance=Balance-timeduration*0.5;
        }
    }

    void info()
    {
        cout<<"Mobile owner Name: "<<Owner<<endl;
        cout<<"Mobile number: "<<Number<<endl;

        cout<<"Balance: "<<Balance<<endl;
        cout<<"OS Name: "<<OS<<endl;
        cout<<"Lock"<<Lock<<endl;
    }
    ~Mobile()
    {
       cout<<"Destructor called"<<endl;
    }


};

int main()
{
    Mobile a;

    Mobile A1("0ishe","01999999",66,"Android",0);
     A1.info();

     cout<<"Recharging 100 taka"<<endl;
    A1.Recharge(100);
     A1.info();

     cout<<"Calling someone for 20 minutes"<<endl;
    A1.Calls_one(20);
    A1.info();

}
