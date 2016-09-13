#include <iostream>
using namespace std;
int shortest[100]={},pred[100]={},w[100];
void topologicalsort(int x[],int y[],int w[],int l[], int n,int m,int s)
{int i=0,k=0,j=0,indegree[100]={},next[100]={},u,r,lo[100];
    while(i!=m)
    {
        indegree[y[i]]++;
        ++i;
    }i=0;
    for(i=1;i<=n;i++)
        {
            if(indegree[i]==0)
                {next[j]=i;
                j++;
                }
        }
   while(j!=0)
   {
       j--;               //1st
       u=next[j];
       l[k]=u;          //2nd
       for(i=0;i<m;i++)   //3rd
       {
           if(x[i]==u)
           {
               indegree[y[i]]--;

           if(indegree[y[i]]==0)
           {
               next[j]=y[i];
               j++;
           }
           }
       }
       k++;

   }i=0;
   while(i!=n)
   {
       cout<<l[i]<<" ";
       i++;
   }


}
void relax(int u,int v,int j)
{int h,r,m;
h=shortest[u];
r=shortest[v];
m=w[j];
    if(shortest[u]+w[j]<shortest[v])
    {
        int k=w[j];
        shortest[v]=shortest[u]+w[j];
        pred[v]=u;
    }
}
void dagshortestreach(int x[],int y[],int w[], int n,int m,int s)
{int l[100],i,k=0,j,u,v;
    topologicalsort(x,y,w,l,n,m,s);          // 1st
    for(i=1;i<=n;i++)             //2nd
    {
        shortest[i]=99999;
    }
    shortest[s]=0;
     for(i=1;i<=n;i++)            //3rd
    {
        u=l[i];
        for(j=0;j<m;j++)
        {v=y[j];
            if(v==u)
            {
                relax(x[j],v,j);
            }
        }

    }i=1;
    cout<<endl;
while(i!=n+1)
{
    cout<<shortest[i]<<" ";
    i++;
}i=1;
    cout<<endl;
while(i!=n+1)
{
    cout<<pred[i]<<" ";
    i++;
}

}
int main()
{int i=0,j,n,m,s;
cin>>n>>m;
int x[100],y[100];
while(i!=m)
{
    cin>>x[i]>>y[i]>>w[i];
    i++;
}i=0;
cin>>s;
cout<<endl;i=0;
while(i!=n)
{
    cout<<w[i]<<" ";
    i++;
}
    cout << "Hello world!" << endl;
dagshortestreach(x,y,w,n,m,s);
/*cout<<endl;
while(i!=n)
{
    cout<<shortest[i]<<" ";
    i++;
}*/
    cout << "Hello world!" << endl;
    return 0;
}
