#include<bits/stdc++.h>
using namespace std;
string dectobin(int num){
string a;
    while(num>1){
        if(num%2==1)a+='1';
        else a+='0';
        
        num=num/2;
    }
    if(num==1)a+='1';
    reverse(a.begin(),a.end());
    return a;
}
int main(){
    int num=8;
    string a=dectobin(num);
    cout<<a;

}