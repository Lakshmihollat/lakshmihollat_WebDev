#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n)
{
    int l=arr[0],i;
    for(i=0;i<n;i++)
    {

        if (arr[i]>l)
        {
            l=arr[i];
        }
    }
    return l;
}

int main()
{
    int n,i;
    cout<<"enter the number of elements:";
    cin>>n;
     int arr[n];
     cout<<"enter the elements:";
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<"largest element is:"<<largest(arr,n);
   return 0;
}
