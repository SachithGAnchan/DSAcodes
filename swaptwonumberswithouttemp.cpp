#include<iostream>
using namespace std;
int main(){
    int a=5;            //xor operation 0^0=0,1^1=0,0^1=1,1^0=1
    int b=6;
    a=a^b;
    b=a^b;        //  b=(a^b)^b=a as b^b=0
    a=a^b;        //  a=(a^b)^a=a as a^a=0
    cout<<a;
    cout<<b;
}