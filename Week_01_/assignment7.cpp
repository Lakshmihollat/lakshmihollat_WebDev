#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    //vector<dataType> name(size, value);
    vector<int>o(1,0);
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);

    }
    //Sort the vector (C++)
    sort(v.begin(),v.end());
    cout<<"sorted vector:";
    for(int i=0;i<n;i++)
    {

        cout<<" "<<(v[i]);
    }
    // Reverse the sorted vector
    reverse(v.begin(), v.end());
    cout << "\n Reversed vector:";
    for (int i = 0; i < n; i++) {
        cout << " " << v[i];
    }

}
