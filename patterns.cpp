#include <bits/stdc++.h>  
using namespace std;

void pattern1(){
    // *
    // **
    // ***
    // ****
    for(int i=1;i<=5;i++){
        for(int j=1;j<+i;j++){
            cout<<"*";

        }
        cout<<"\n";
    }
}

void pattern2(){

    int n=4,count=5;
    for(int i=0;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<" ";
        }
        count--;
        for(int k=count;k<=n;k++){
            
            cout<<"*";
        }
         cout<<"\n";
    }
   
}

void pattern3(){
    int n=4,count=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        count++;
        for(int k=count;k<=n;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern4(){
    int n=4,count=4;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=count;j++){
            cout<<"*";
        }
        count--;
        cout<<"\n";
    }
}

void pattern5(){
 int n=4;
    for(int i=0;i<=n;i++){
        for(int j=i; j<n; j++)
        {
            cout<<" ";
        }

        for(int k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }

         cout<<"\n";
    }


}

int main(){
    // pattern1();
    // pattern2();
    // pattern3();
    // pattern4();
    pattern5();

    return 0;
}