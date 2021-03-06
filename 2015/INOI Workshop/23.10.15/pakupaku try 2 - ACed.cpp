#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sz 1005
char maze[sz][sz];
int visited[sz][sz];

struct point{
    int x,y;
};

int bfs(point p,int n,int m)
{
    queue <point> q;
    point t,r;
    q.push(p);
    visited[p.x][p.y]=1;
    while(!q.empty())
    {
        t=q.front(); q.pop();
        if(t.x-1>=0)
        {
            if(maze[t.x-1][t.y]!='#' && visited[t.x-1][t.y]==0){r.x=t.x-1; r.y=t.y; q.push(r); visited[r.x][r.y]=visited[t.x][t.y]+1;}
        }
        if(t.y-1>=0)
        {
            if(maze[t.x][t.y-1]!='#' && visited[t.x][t.y-1]==0){r.x=t.x; r.y=t.y-1; q.push(r);visited[r.x][r.y]=visited[t.x][t.y]+1;}
        }
        if(t.x+1<m)
        {
            if(maze[t.x+1][t.y]!='#' && visited[t.x+1][t.y]==0){r.x=t.x+1; r.y=t.y; q.push(r); visited[r.x][r.y]=visited[t.x][t.y]+1;}
        }
        if(t.y+1<n)
        {
            if(maze[t.x][t.y+1]!='#' && visited[t.x][t.y+1]==0){r.x=t.x; r.y=t.y+1; q.push(r); visited[r.x][r.y]=visited[t.x][t.y]+1;}
        }
        if(maze[t.x][t.y]=='E'){return visited[t.x][t.y]-1;}
    }
    return -1;
}
int main()
{
    memset(visited,0,sizeof(visited));
    int n,m,i,j;
    cin>>n>>m;
    point start;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>maze[i][j];
            if(maze[i][j]=='S')
            {
                start.x=i; start.y=j;
            }
        }
    }
    cout<<bfs(start,n,m);
    return 0;
}
