#include<bits/stdc++.h>
using namespace std;
vector<int> union_(vector<int> arr1,vector<int> arr2)
{
    int i=0;
    int j=0;
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> unionarr;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<=arr2[j])
        {
            if(unionarr.size()==0||unionarr.back()!=arr1[i])
            {
            unionarr.push_back(arr1[i]);
            
            }
            i++;
        }
        else 
        {
            if(unionarr.size()==0||unionarr.back()!=arr2[j])         {
            unionarr.push_back(arr2[j]);
      
            }
            j++;
        }
    }

    while(j<n2)
    {
        if(unionarr.size()==0||unionarr.back()!=arr2[j])
        {
            unionarr.push_back(arr2[j]);
           
        }
        j++;
    }
    while(i<n1)
    {
        if(unionarr.size()==0||unionarr.back()!=arr1[i])
        {
            unionarr.push_back(arr1[i]);
       
        }
        i++;
    }


    return unionarr;
}
int main()
{
int n;
cin>>n;
int n1;
cin>>n1;
vector<int> arr1(n);
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
vector<int> arr2(n1);
for(int i=0;i<n1;i++)
{
cin>>arr2[i];
}
vector<int> unionarr=union_(arr1,arr2);
for(auto it:unionarr)
cout<<it<<" ";
}