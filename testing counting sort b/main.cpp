#include <iostream>
using namespace std;
int equa[1000]={0},les[1000],n;
 void countingkeyequal(int a[],int m)
 {int key;
     for(int i=0;i<n;i++)
     {
         key=a[i];
         equa[key]++;
     }
 }
 void countingkeyless(int m)
 {les[0]=0;
 for(int i=1;i<m;i++)
    les[i]=les[i-1]+equa[i-1];

 }
 void rearrange(int a[])
 {int i,key,index,b[n];
     for(i=0;i<n;i++)
     {
         key=a[i];
         index=les[key];
         b[index]=a[i];
         les[key]++;
     }i=0;
     while(i!=n)
     {
         cout<<b[i]<<" ";
         i++;
     }
 }

void countingsort(int a[],int n,int m)
{
    countingkeyequal(a,m);
    countingkeyless(m);
    rearrange(a);

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
    cout << "Hello world!" << endl;
    return 0;
}
