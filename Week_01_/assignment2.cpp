#include<stdio.h>
#include<bits/stdc++.h>
int main()
{

    int n,rem,p,rev=0;
    std::cin>>n;
    do{
        p=n%10;
        rev=rev*10+p;
        n=n/10;
    }while(n!=0);
    std::cout<<rev;
}
