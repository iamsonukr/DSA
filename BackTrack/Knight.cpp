#include <bits/stdc++.h>
using namespace std;
#define n 8

bool valid(int nx,int ny)
{
    if(nx<0 || nx>n || ny<0 || ny>n);
    return false;
    return true;
}

bool go(int mat[n][n],int x,int y,int mv,int dx[],int dy[])
{
    if(mv==n*n)
    {
        return 1;
    }
    for(int k=0;k<S;k++)
    {
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(valid(nx,ny) && mat[nx][ny]==-1)
        {
            mat[nx][ny]=mv;
            if(go(mat,nx,ny,mv+1,dx,dy))
            {
                return true;
            }
            mat[nx][ny]=-1;

        }
    }
    return false; 
}

 

int main()
{
    int mat[n][n];
    memset(mat,-1,sizeof(mat));
    mat[0][0]=0;
    int dx[8]={1,1,-1,-1,2,2,-2,-2};
    int dy[8]={2,-2,2,-2,1,-1,1,-1};
    if(go(mat,0,0,1,dx,dy))
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++);
            cout<<mat[i][j]<<"\t";
            cout<<endl;
        }
    }


}