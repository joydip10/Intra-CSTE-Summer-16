#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<bits//stdc++.h>
using namespace std;
struct Edge
{
    int u;
    int v;
    int w;
};
bool operator<(Edge A,Edge B)
{
    return A.w<B.w;
}
vector<Edge> E;
int p[1000];
int find(int x)
{
    if(p[x]==x) return x;
    return p[x] = find(p[x]);
}
int kruskal()
{
    sort(E.begin(),E.end());
    int sz = E.size();
    int ans = 0;
    for(int i = 0; i<sz; i++)
    {
        if(find(E[i].u)!=find(E[i].v))
        {
            p[p[E[i].u]]=p[E[i].v];
            ans+=E[i].w;
        }
    }
    printf("%d\n",ans);
}

int main()
{

    int T;
    scanf("%d",&T);
    int N;
    scanf("%d",&N);
    int sqN = N*N;
    if(N<=100)
    {
        Edge e[N][N];
        for(int i = 0;i<N;i++)
        {
            for(int j = 0;j<N;j++)
            {
                e[i][j].u=i;
                e[i][j].v=j;
                scanf("%d",&e[i][j].w);
                E.push_back(e[i][j]);
            }
        }
        kruskal();
    }
    /*for(int i = 0;i=E.size();i++)
    {
        E[i].u=0;
        E[i].v=0;
        E[i].w=0;
    }*/

}
