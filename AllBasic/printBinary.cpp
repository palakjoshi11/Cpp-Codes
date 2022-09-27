#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
using namespace std;
 

int main()
{
    int i = 7; // 111

    for (int j = 3; j>=0; j--) {
        int k = (i>>j)&1;
        cout<<k;
    }


    return 0;
}