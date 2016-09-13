#include <iostream>
using namespace std;
int equa[1000]={0},les[1000],n;
void countkeyequal(int a[],int n,int m)
{
    int key;
    for(int i=0;i<n;i++)
    {
        key=a[i];
        equa[key]++;
    }

}
void countkeyless(int equa[],int m)
{
    les[0]=0;
    for(int j=1;j<m;j++)
        les[j]=les[j-1]+equa[j-1];

}
void rearrange(int a[],int les[],int n,int m)
{
    int b[n],next[m-1],j,i,key,index;
    for(j=0;j<m;j++)
      next[j]=les[j];
    for(i=0;i<n;i++)
    {
        key=a[i];
        index=next[key];
        b[index]=a[i];
        next[key]++;
    }
  i=0;
while(i!=n)
{
    cout<<b[i]<<" ";
    i++;
}
}
void countingsort(int a[],int n,int m)
{
    countkeyequal(a,n,m);
    countkeyless(equa,m);
    rearrange(a,les,n,m);

}

int main()
{int m,i=0;
cin>>n>>m;
int a[n];
while(i!=n)
{
    cin>>a[i];
    i++;
}
countingsort(a,n,m);
cout<< endl<<"equa = "<< endl;
for(i=0;i<m;i++)
    cout<<equa[i]<<" ";
cout<< endl<<"les = "<< endl;
for(i=0;i<m;i++)
    cout<<les[i]<<" ";
    cout << "Hello world!" << endl;
    return 0;
}
