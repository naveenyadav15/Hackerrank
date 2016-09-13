#include <iostream>

using namespace std;

int main()
{int n,i=0,j;
cin>>n;
int a[n];
while(i!=n)
{
    cin>>a[i];
    i++;
}
for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
        if(a[i]>a[j])
    {
        int c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}i=0;
while(i!=n)
{
    cout<<a[i]<<" ";
    i++;
}
    cout << "Hello world!" << endl;
    return 0;
}
