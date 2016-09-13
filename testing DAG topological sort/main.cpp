#include <iostream>
using namespace std;

void topologicalsort(int u[],int v[],int m,int n)
{
    int i,j,r,h;
    int indegree[17]={0},next[17]={0},lo[17],k=1;
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)
      if(v[j]==i)
       indegree[i]++;
    }
    j=1;
    for(i=1;i<=n;i++)
     if(indegree[i]==0)
       {next[j]=i;
       j++;
       }j--;
    while(j!=0)
    {
            h=next[j];
            lo[k]=h;
            j--;
            k++;
            for(r=1;r<=m;r++)
            {if(u[r]==h)
            {
                indegree[v[r]]--;
              if(indegree[v[r]]==0)
            {
                j++;
                next[j]=v[r];
            }
            }
            }
    }
    for(i=1;i<=n;i++)
        cout<<lo[i]<<" ";


}
int main()
{int i=0,n,m,s;
cout<<"Enter the no. of vertices and edges respectively ";   //n is the no. of vertices;
cin>>n>>m;
int a[n],u[m],v[m];
/*cout<<"Enter the starting point of the graph ";            //m is the no. of edges present in the graph;
cin>>s;*/
for(i=1;i<=m;i++)
    cin>>u[i];
for(i=1;i<=m;i++)
     cin>>v[i];
topologicalsort(u,v,m,n);

    return 0;
}
