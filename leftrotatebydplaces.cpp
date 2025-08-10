#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[],int n,int d)
{
   reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n);
}
int main()
{ 
    int n;
    cin>>n;
    int arr[n];
 
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    if(d>n)
    d=d%n;
    cout<<"enter the d elements to be rotated"<<endl;
    cin>>d;
    rotate(arr,n,d);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}


// void rotate(vector<int> &arr,int n)
// {
//     int temp=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         arr[i-1]=arr[i];

//     }
//     arr[n-1]=temp;
//     }
// int main()
// {
//     vector<int> arr={1,2,3,4,5};
//     int n=arr.size();
//     rotate(arr,n);
// for(int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// }