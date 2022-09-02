#include <bits/stdc++.h>  
using namespace std;
 
void swap(){
    int a,b;
    
    cout<<"Enter a: ";
    cin>>a; //2
    cout<<"Enter b: ";
    cin>>b; //3
    a=a+b; //5
    b=a-b; //b=2
    a=a-b; //5-2=3
    cout<<a<<" : "<<b;
}
// Write a program to check whether a number is even 
// or odd without using modulus(%) operator

void evenOdd(int num){
    if(num ^ 1){

        cout<<"ODD";
    }
    else{
        cout<<"EVEN";
    }
}

int main()
{
    swap();
    evenOdd(39);
    return 0;
}
