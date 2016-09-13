#include <iostream>

using namespace std;

int main()
{int n,i=0,key,j,k=0,r=0;
cin>>n;
int a[n];
while(i!=n)
    {cin>>a[i];
    i++;}
for(i=1;i<n;i++)
{j=i-1;key=a[i];
    while(j>=0&&a[j]>key)
    {
        a[j+1]=a[j];
        j--;
        r++;
    }
    a[j+1]=key;
    k=0;
    while(k!=n)
    {
        cout<<a[k]<<" ";
        k++;
    }
    cout<<endl;
}
i=0;cout<<" "<<r;

    cout << endl << "Hello world!" << endl;
    return 0;
}
