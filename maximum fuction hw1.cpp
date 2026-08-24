#include<iostream>
using namespace std ;
void PosOrNeg (int num){
    if(num>=0){
        cout<<num<<" is a positive number." <<endl ;
    }
    else{
        cout<<num<<" is a negative number." <<endl ;
    }
}
void EvenOrOdd( int number) {
    if(number %2==0){
        cout <<number<<" is an even number" <<endl ;

    }
    else {
        cout <<number <<" is an odd number" <<endl ;
 }
 PosOrNeg(number) ;
}
void Maximum (int arr[4]) {
    int Max= arr[0] ;
    for( int i=0 ; i<4 ; i++){
        if (arr[i]>Max){
            Max= arr[i] ;
        }
    }
    cout<<"maximum: " <<Max <<endl ;
    EvenOrOdd(Max) ;
}
void Minimum (int arr[4]){
        int Min =arr[0];
      for(int i=1 ; i<4 ; i++){
          if(arr[i]<Min){
              Min =arr[i];
          }
    }
    cout<<"minimum: " <<Min <<endl ;
    EvenOrOdd(Min) ;
}
int main(){
    int arr[4] ;
    cout<<"Enter 4 numbers: ";
    for (int i=0 ; i<4 ;i++){
        cin>>arr[i] ;
    }
    Maximum(arr);
    Minimum(arr);

}



