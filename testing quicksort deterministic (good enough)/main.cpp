#include <iostream>
using namespace std;
int part(int a[],int p,int r)
{int q=p,c;
for(int i=p;i<r;i++)
    if(a[i]<=a[r])
{
    c=a[q];
    a[q]=a[i];
    a[i]=c;
    q++;
}
c=a[q];
a[q]=a[r];
a[r]=c;
return q;

}
void quicksort(int a[],int p,int r)
{
    if(p<r)
    {int q;
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
}int p=a[0];
quicksort(a,0,n-1);
i=0;
while(i!=n)
{
    cout<<a[i]<<" ";
    i++;
}
    cout << "Hello world!" << endl;
    return 0;
}
