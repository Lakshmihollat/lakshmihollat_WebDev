#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector <int>v;
    int n,i,ele;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"sorted Vector:";
    sort(v.begin(),v.end());
    for (i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
        cout<<endl;
    cout<<"reversed vector:";
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;

    return 0;
}
