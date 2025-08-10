#include<bits/stdc++.h>             //theres a optimal solution which i havent coded yet
using namespace std;
void setzero(vector<vector<int>>& matrix,int n,int m)
{
    vector<int> col(m, 0);
    vector<int> row(n, 0);
    
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
    }
}
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++){
        if(row[i]||col[j])
        {
            matrix[i][j]=0;
        }
    }
}

}
int main(){
    vector<vector<int>> matrix={{0,0,0},{1,0,1},{1,1,1}};
    int n=matrix.size();
    int m=matrix[0].size();
    setzero(matrix,n,m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}