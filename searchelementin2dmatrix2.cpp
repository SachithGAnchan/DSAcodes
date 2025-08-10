#include<bits/stdc++.h>
using namespace std;
// int findele(vector<int> arr,int n,int target){
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if (arr[mid]==target){
//             return target;

//         }
//         else if(arr[mid]<target){
//             low=mid+1;
//         }else {
//             high=mid-1;
//         }
//     }
//     return 0;


// }

// bool findmat(vector<vector<int>> mat,int target){
//     int n=mat.size();
//     int m=mat[0].size();
//         if(findele(mat[i],m,target)!=false){
//             return true;
//         }
//     return false;
// }
bool findmat(vector<vector<int>> mat,int target){
    int n=mat.size();
    int m=mat[0].size();
    int row=0;
    int col=m-1;
    while(row<n && col>=0){
        if(mat[row][col]==target){
            return true;
        }
        else if(mat[row][col]>target){
           col--;
        }
        else row++;
    }
    return false;
}
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cin>>target;;
bool ind=findmat(mat,target);
    if(ind==true){
        cout<<"true";

    }
    else cout<<"false";
}