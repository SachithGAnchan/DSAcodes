#include<bits/stdc++.h>
using namespace std;        // a number is power of 2 if only 1 bit is set in a number ie 16: 10000  4: 100
int main(){
    int n=4;
    int i=0;
    if((n&(n-1))==0)cout<<"true";// intiuition is that if we and it wiith n-1 th number we get zero ex 16 & 15 is 10000 & 01111 ==0;
    else cout<<"false";         //n-1 number will always flip the right most 1 to zero and all others to 1

}