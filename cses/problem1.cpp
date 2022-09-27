/*
Consider an algorithm that takes as input a positive integer n. 
If n is even, the algorithm divides it by two, 
and if n is odd, the algorithm multiplies it by three and adds one. 
The algorithm repeats this, until n is one. 
For example, the sequence for n=3 is as follows:
3 10 5 16 8 4 2 1
*/

#include <bits/stdc++.h>  
using namespace std;

void algo(long long n){
    cout<<n<<" ";
    while(n!=1){
        if(n==1)
        {break;}
    if(fmod(n,2)==0){
        //even
        n=n/2;
        cout<<n<<" ";
    }
    else{
        //odd
        n=(n*3)+1;
        cout<<n<<" ";
    }
    }

}

int main(){
    long long n;
    cin>>n;
    algo(n);
}
// 986089625
// 665215
