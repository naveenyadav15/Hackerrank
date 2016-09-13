#include <iostream>
using namespace std;
int shortest[100],pred[100]={},w[100];
void relax(int u,int v,int j)
{int l,m,n;
    if(shortest[u]+w[j]<shortest[v])
    {
        shortest[v]=shortest[u]+w[j];
        pred[v]=u;
    }
}
void dagshortestreach(int x[],int y[],int n,int m,int s)
{
    int i=0,j,next[100],k;
    while(i!=n+1)
    {
        shortest[i]=99999;
        i++;
    }shortest[s]=0;
    next[0]=s;j=1;
    while(j!=0)
    {
        j--;
        k=next[j];
        for(i=0;i<m;i++)
        {
            if(x[i]==k)
            {
                relax(k,y[i],i);
                next[j]=y[i];
                j++;
            }
        }
    }
    i=1;
    while(i!=n+1)
    {
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
{int n,m,s,t,i=0,j;
cin>>n>>m;
int x[100],y[100];
while(i!=m)
{
    cin>>x[i]>>y[i]>>w[i];
    i++;
}cin>>s;
dagshortestreach(x,y,n,m,s);
    cout << "Hello world!" << endl;
    return 0;
}
