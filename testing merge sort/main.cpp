#include <iostream>
using namespace std;
int co=0;
int mergee(int a[],int l,int m,int h)
{int n1,n2,b1[10],b2[10],i=0,j=0,k;
n1=m-l+1;
n2=h-m;
for(i=0;i<n1;i++)
    b1[i]=a[l+i];
for(j=0;j<n2;j++)
    b2[j]=a[m+j+1];
b1[i]=9999;
b2[j]=9999;
i=0;j=0;
for(k=l;k<=h;k++)
{
    if(b1[i]>b2[j])
    {
        a[k]=b2[j];
        j++;
    }
    else
    {
        a[k]=b1[i];
        i++;
    }
    if(i<j)
        co++;
}
return 0;
}

void mergesort(int a[],int l,int h)
 {int q;
     if(l<h)
     {q=(l+h)/2;
     mergesort(a,l,q);
     mergesort(a,q+1,h);
     mergee(a,l,q,h);

     }
 }

int main()
{int i=0,n;
cin>>n;
int a[10];
while(i!=n)
{
    cin>>a[i];
    i++;
}
mergesort(a,0,n);
i=0;
while(i!=n)
{
    cout<<a[i]<<" ";
    i++;
}
    cout << " Hello world!" << endl<<co;
    return 0;
}
