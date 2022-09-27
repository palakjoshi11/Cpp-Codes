/* 
You are given a DNA sequence: a string consisting of characters A, C, G, and T.
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints
1≤n≤10^6
Example
Input:
ATTCGGGA
Output:
3
*/

#include <bits/stdc++.h>  
using namespace std;
 

void getStringChar(string s){
    int count=1, tempCount=1;
    // string val="";
    int i=0;
    // string prev;
    while(i< s.length()){
        if(s[i]==s[i+1]){
            tempCount++;
        }      
     
        count = max(count, tempCount);

        if (s[i]!=s[i+1]) {
            tempCount = 1;
        }       
        i++;
        
    }
        cout<<count;
        // cout<<val;
}
int main()
{
    string s;
    cin>>s;
    getStringChar(s);
    return 0;
}

