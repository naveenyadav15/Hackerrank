#include <iostream>
using namespace std;
int shortest[100],pred[100]={},w[100];
void relax(int u,int v,int j)
{
    if(shortest[u]+w[j]<shortest[v])
    {
        shortest[v]=shortest[u]+w[j];
        pred[v]=u;
    }
}
void bellmanfordshortestreach(int x[],int y[],int n,int m,int s)
{
    int i=0,j,u,v;
    while(i!=n+1)
    {
        shortest[i]=9999999;
        i++;
    }shortest[s]=0;
    for(i=1;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            relax(x[j],y[j],j);
        }
    }i=1;
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
    }cout<<endl;


}
void negativecycles(int xx[],int y[],int n,int m,int s)
{int i=0,j=0,r[100]={},u,v,cyc[100]={},d,x;
    for(i=0;i<m;i++)
    {u=xx[i];v=y[i];
        if(shortest[u]+w[i]<shortest[v])
            {
                x=v;                //1st
                while(r[x]==0)      //2nd
                {
                    r[x]=1;
                    x=pred[x];
                }
                v=pred[x];
                cyc[0]=x;j=1;
                while(v!=x)
                {
                    cyc[j]=v;
                    v=pred[v];
                    j++;
                }
                d=9;
                int k=0;
                cout<<"THe negative cycle is \n";
                while(k!=j)
                {
                    cout<<cyc[k]<<" ";
                    k++;
                }cout<<endl;
            }
    }
    if(d!=9)
        cout<<"NO negative cycles \n";

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
bellmanfordshortestreach(x,y,n,m,s);
negativecycles(x,y,n,m,s);
    cout << "Hello world!" << endl;
    return 0;
}
