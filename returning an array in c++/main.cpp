#include <iostream>
using namespace std;
int* kante(int a[],int n)
{static int l[10];
int
i=0;
    for(int i=0;i<n;i++)
    l[i]=a[i]+1;
while(i!=n)
{
    cout<<l[i]<<" ";
    i++;
}cout<<endl;
return l;
}
int main()
{int n,i=0,*p;
cin>>n;
int a[n];
while(i!=n)
{
    cin>>a[i];
    i++;
}
p=kante(a,n);
i=0;
while(i!=n)
{cout<<*p<<" ";
i++;
*p++;
}
    cout << "Hello world!" << endl;
    return 0;
}
