#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotate(vector<vector<int>> &mat){
    int m=mat.size();
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++){
    swap(mat[i][j],mat[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}
int main(){
    int rows,cols;
    cin>>rows;
    cin>>cols;
    vector<vector<int>> mat(rows,vector<int> (cols));
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>mat[i][j];
        }
    }
rotate(mat);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
    cout<<endl;
}
 
    }




    // vector<vector<int>> rotate(vector<vector<int>> &mat){
    //     int m=mat.size();
    //     int n=mat[0].size();
    //     vector<vector<int>> ans(n,vector<int>(m));
    //     for(int i=0;i<m;i++)
    //     {
    //         for(int j=0;j<n;j++){
    //            ans[j][m-1-i]=mat[i][j];
    //         }
    //     }
    
        
    //     return mat;
    // }
    // int main(){
    //     int rows,cols;
    //     cin>>rows;
    //     cin>>cols;
    //     vector<vector<int>> mat(rows,vector<int> (cols));
    //     for(int i=0;i<rows;i++){
    //         for(int j=0;j<cols;j++){
    //             cin>>mat[i][j];
    //         }
    //     }
    //     vector<vector<int>> ans=rotate(mat);
    //     int rows1=ans.size();
    //     int cols1=ans[0].size();
    //     for(int i=0;i<rows1;i++){
    //         for(int j=0;j<cols1;j++){
    //             cout<<ans[i][j]<<" ";
    //         }
    //     cout<<endl;
    // }
     
    //     }