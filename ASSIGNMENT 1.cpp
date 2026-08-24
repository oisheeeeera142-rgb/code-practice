#include<iostream>
using namespace std ;
int main(){
    double a,salary,annuelsalary, price1, price2, price3 ;
    cout<<"Employee salary  :";
    cin>>salary;
    annuelsalary=salary*12;
    cout << "enter the quantity of Mango :" ;
    cin>>a ;
    price1 = a*350 ;
    cout<< "the purchased amount is " <<price1<<"taka"<<endl ;
    cout<<"The annuelsalary :"<<annuelsalary<<"taka"<<endl;
    if (price1>15000) {
        cout << "you get the Bonus" ;
        price2 =  annuelsalary+(annuelsalary*24/100) ;
        cout<< "and the bonus purchased amount is " <<price2 << "taka" <<endl ;
    }
    else {
        cout << "you don't get the bonus" ;
        price3 = 15000- price1 ;
        cout << " the required purchase amount is " <<price3 <<" taka more" <<endl ;
        float exp = (15000/350.00)- a ;
        cout << "the required quantity is " <<exp <<" kg more" <<endl ;
    }

}
