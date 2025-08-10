#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int i=0;
    int a=~(1<<i);          // shifting 1 by i places and shifting all the bits using not operator and then doing and operation
    n=a&n;
    cout<<n;

}