#include<bits/stdc++.h>
using namespace std;
//
int greaterornot(vector<int> arr)
{
    int n=arr.size();
    int cnt=1;
    int key=arr[0];
    for(int i=1;i<n;i++){
    if(cnt==0)
        {
        cnt = 1;
        key=arr[i];
        }
    else if(arr[i]==key)
        cnt++;
    else{
        cnt--;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        cnt++;
    }
    if(cnt>(n/2)) return key;
    else return -1;
}

int main(){
    vector<int> arr={1,2,2,2,3,4,5,4,4,2,2,2,2};
    int n=greaterornot(arr);
    cout<<n;
}
