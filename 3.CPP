#include<iostream>
using namespace std;
int oddNum (int x,int y) {
 cout<<"Enter starting value:";cin>>x;
 cout<<"Enter ending value:";cin>>y;
 cout<<"starting value="<<x<<endl;
 for(int i=x;i=y;i++) {
    if(i%2!=0) {
        cout<<i<<"";
    }
 }
}
int main(){
    int x,y;
    int a=oddNum(x,y);
}

