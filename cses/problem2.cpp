/* 
You are given all numbers between 1,2,…,n except one. 
Your task is to find the missing number.

Input:
5
2 3 1 5

Output:
4

 */
#include <bits/stdc++.h>  
using namespace std;

void missingnumber(long long n){
    long long arr[n+1];
    // Enter values in array 
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    // sum of elements based on 
    long long sumOfElementsN=0;
    if(fmod(n,2)==0){
        sumOfElementsN=(n/2)*(n+1);
    }
    else{
        sumOfElementsN=((n+1)/2)*n;
    }
    long long sumofArray=0;
    for(int i=1;i<n;i++){
        sumofArray =  sumofArray+arr[i];
    }
    long long number;
    number=sumOfElementsN-sumofArray;
    cout<<number;
}

int main(){
    long long n;
    cin>>n;
    missingnumber(n);
    
}