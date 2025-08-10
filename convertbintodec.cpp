#include<bits/stdc++.h>
using namespace std;
int converttodec(string a){
    int sum=0;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        int num=a[i]-'0';
        sum+=num*pow(2,i);
    }
    return sum;
}
int main(){
    string a="1000";
   int b= converttodec(a);
   cout<<b;
}