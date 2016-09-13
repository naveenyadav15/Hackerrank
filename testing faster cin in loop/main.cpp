#include <iostream>

using namespace std;

int main()
{int n,i=0;
cin>>n;
    int a[n];
    while(i!=n)                   /*it makes it faster then normal linear search *as it checks only one operation*
                                        as compared to the * for * loop*/
    {        cin>>a[i];
        i++;
    }i=0;
    if(a[n-1]!=10)
    {a[n-1]=10;
    while(a[i]!=10)
        i++;
    if(i<n-1&&a[i]==10)
        cout<<i;
    else
        cout<<"Not found";
    }else
    cout<<n-1;
    cout << endl << "Hello world!" << endl;
    return 0;
}
