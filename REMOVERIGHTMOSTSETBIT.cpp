#include<bits/stdc++.h>
using namespace std;    
int main(){                 
    int n=16;
    int i=1;
 //the intiuition is that for the nth number the n-1 number will always have the right most set bit of nth number not set and all others as set after
    n=n&(n-1);
    cout<<n;
}

//ex:16:10000 N-1:15 :: 01111
//40: 101000  39:  100111   rightmost 1 to and all others to 1

//3:11   2: 10
