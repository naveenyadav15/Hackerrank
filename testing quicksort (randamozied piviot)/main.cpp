#include <iostream>
#include<stdlib.h>
using namespace std;
int part(int a[],int p,int r)
{int q=p,c,i;
for(i=p;i<r;i++)
{
    if(a[i]<=a[r])
    {
        c=a[q];
        a[q]=a[i];
        a[i]=c;
        q++;
    }
}
c=a[q];
a[q]=a[r];
a[r]=c;

return q;
}
void quicksort(int a[],int p,int r)
{int q;
    if(p<r)
    {    int c=a[r],k,s=r-p+1;
        k=rand()%s+p;
        a[r]=a[k];
        a[k]=c;
        q=part(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}
int main()
{int i=0,n;
cin>>n;
int a[n];
while(i!=n)
{
    cin>>a[i];
    i++;
}
quicksort(a,0,n-1);
i=0;
while(i!=n)
{cout<<a[i]<<" ";
i++;
}
    cout << "Hello world!" << endl;
    return 0;
}
