#include<iostream>
using namespace std;

int main(){

    float number[5];


    for(int i=0; i<5; i++)
    {
        cout<<"Enter Number "<<i+1<<" = ";
        cin>>number[i];
    }

     cout<<"Numbers are "<<" = ";
    for(int j=0; j<5; j++)
    {
        cout<<number[j] <<" ";

    }
    cout<<endl;


    float max=number[0];
    float min=number[0];

    for(int m=1; m<5; m++)
    {
        if(max<number[m])
        {
            max=number[m];
        }
        else if(min>number[m])
        {
            min=number[m];
        }
    }

    cout<<"Maximum number = "<<max<<endl;
    cout<<"Minimum number = "<<min<<endl;

    //Positive Or Negative Start
    if(max>=0)
    {
        cout<<"Maximum is Positive\n";
    }

    else{
        cout<<"Maximum is Negative\n";
    }
    if(min>=0)
    {
        cout<<"Minimum is Positive\n";
    }

    else{
        cout<<"Minimum is Negative\n";
    }

    //Positive Or Negative End


    int maximum=max,minimum=min;

    //Even Or Odd start

    if(maximum%2==0)
    {
        cout<<"Maximum is Even\n";
    }
    else{
        cout<<"Maximum is Odd\n";
    }

    if(minimum%2==0)
    {
        cout<<"Minimum is Even\n";
    }
    else{
        cout<<"Minimum is Odd\n";
    }
    //Even Or Odd End


    //Prime check Start
    for(int i=2; i<maximum; i++)
    {
        if(maximum%i==0)
        {
            cout<<"Maximum isn't a Prime Number\n";
            break;
        }
        else{
            cout<<"Maximum is a Prime Number\n";
        }
    }

    for(int i=2; i<minimum; i++)
    {
        if(minimum%i==0)
        {
            cout<<"Minimum isn't a Prime Number\n";
            break;
        }
        else{
            cout<<"Minimum is a Prime Number\n";
        }
    }


}
