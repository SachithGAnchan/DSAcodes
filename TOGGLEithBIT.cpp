#include<bits/stdc++.h>
using namespace std;    //    toggling mean flipping the bit from 0 to 1 and 1 to 0;
int main(){                 
    int n=13;
    int i=1;
    n=n^(1<<i);             //xor operation 1^1 gives 0 and 0^1 gives 1 thereby flipping the bit
    cout<<n;
}