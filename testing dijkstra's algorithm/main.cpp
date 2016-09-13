#include <iostream>
using namespace std;
int shortest[100]={},pred[100]={},w[100];
void relax(int u,int v,int j)
{
    if(shortest[u]+w[j]<shortest[v])
       {
           shortest[v]=shortest[u]+w[j];
            pred[v]=u;
       }
}
void dijkstrashortestpath(int x[],int y[],int n,int m,int s)
{int i,j,k,r,q[100],mini=99999,c;

    for(i=1;i<=n;i++)
    {
        shortest[i]=99999;
        q[i-1]=i;
    }shortest[s]=0;
    j=n-1;
    while(j!=-1)
    {
      mini=99999;
        for(i=0;i<=j;i++)
        {
            k=q[i];
            if(shortest[k]<mini)
             {mini=shortest[k];
                r=i;
             }
        }
        c=q[r];
        q[r]=q[j];
        q[j]=c;
        j--;
        for(i=0;i<m;i++)
        {
            if(x[i]==c)
            {
                relax(x[i],y[i],i);
            }
        }

    }

i=1;
while(i!=n+1)
{
    if(shortest[i]>9999)
        cout<<"-1 ";
    else
    cout<<shortest[i]<<" ";
    i++;
}cout<<endl;
i=1;
while(i!=n+1)
{
    cout<<pred[i]<<" ";
    i++;
}

}

int main()
{int i=0,n,m,s;
cin>>n>>m;
int x[100],y[100];
while(i!=m)
{
    cin>>x[i]>>y[i]>>w[i];
    i++;
}cin>>s;
dijkstrashortestpath(x,y,n,m,s);

    return 0;
}
