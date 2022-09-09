#include <bits/stdc++.h>  
using namespace std;

// PROBLEM : 
// 1. swap without using 3rd variable
// 2. Find even and odd without using modulus (%) operator  
// 3. Check if year is a leap year 
//      a) multiple of 400, b) multiple of 4 and not multiple of 100

// 1
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

// 2 
void evenOdd(int num){
    if(num & 1){
        // 1 True and 0 false 
        cout<<"ODD";
    }
    else{
        cout<<"EVEN";
    }
    // AND : 1&1 =1 , 1&0=0, 0&1=0, 0&0=0
}

void leapYear(){
    int year= 2024;
    if(year%100 ==0)
        {cout<<"Not leap year";}
    if(year%400== 0)
        {cout<<"leap year";}
    if(year%4==0 ){
        cout<<"Leap year";
    }
    else{
        cout<<"Not leap";
    }    
    }

void printName(){
    for (int i=10;i>=1;i--){
        cout<<i<<"\n";
    }
}
void table(){
    int n=5,tt=0;
    for(int i=1;i<=10;i++){
        tt=n*i;
        cout<<n<<"X"<<i<<"="<<tt<<"\n";
    }    
}
void prodctOfNNaturalno(){
    int n=4,sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        }
        cout<<sum;

}

void factorial(){
    int n=3,fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }    
    cout<<fact;
}

void countDigit(){
    int n=32;
    int count=0;
    while(n>0){
    n=n/10;
    count++;
    }
    cout<<count;

}

void sumOfDigit(){
    int n=456;
    int sum=0,nm;
    while(n>0){
        nm=n%10;
        n=n/10;
        sum=sum+nm;
    }
    cout<<sum;

}

void reverse(){
    int num=235,x,y;
    while(num>0){
        x=num%10;
        y=(y+x)*10;
        num=num/10;
    }
    cout<<y/10;
}

void armstrong(){
    int n=15,sum=0,x; // 1^3+5^3+3^3 =153
    int temp;
    temp=n;
    while(temp>0){
        x=temp%10;
        sum=sum+pow(x,3);
        temp=temp/10;
    }
    cout<<sum;
    if(sum!=n){
        cout<<"Not armstrong\n";
    }
    else{
        cout<<"armstrong\n";
    }
}

void primeNumberCheck(){
    int number=7,rem,flag=0;
    if(number==0 ||number==1){
        cout<<"prime";
    }
    for(int i=2;i<number;i++){
        rem=number%i;
        if(rem==0){
            flag=1;
            break;
        }
        }
        
    
    if(flag==1){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
}

int main()
{
    swap();
    evenOdd(39);
    leapYear();
    printName();
    table();
    prodctOfNNaturalno();
    factorial();
    powerofx();
    countDigit();
    sumOfDigit();
    reverse();
    armstrong();
    primeNumberCheck();

    return 0;
}
