#include <iostream>
using namespace std;

int binary(int a[],int n,int i,int x)
{
    if(x==a[i])
        return i+1;
    else if(x>a[i])
        {i=(i+n)/2;
        binary (a,n,i,x);}
   else if(x<a[i])
        {i/=2;
        binary (a,n,i,x);}
    else
        return 0;
}

int main()
{int n,i=0,x;
cin>>n;
int a[10];
while(i!=n)
 {cin>>a[i];
 i++;}
 cin >> x;

/*if(binary(a,n,n/2,x)==0)
    cout<<"Not found";
else*/
    cout<< binary(a,n,n/2,x)<<" ";


    cout << endl << "Hello world!" << endl;
    return 0;
}
