#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    p=n/2;
    for(int i=2;i<=p;i++)
    {
        if(n%i==0)
        {
            cout<<"composite number";
            exit(0);
        }

    }
    cout<<"prime number";


return 0;
}
