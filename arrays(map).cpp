#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,id,max=0;
    cout<<"enter number of elements";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int, int>dic;
    for(i=0;i<n;i++)
    {
        dic[arr[i]]++;
    }
    for(auto it:dic)
    {
        if(max<it.second)
        {
            max=it.second;
            id=it.first;
        }
    }
    cout<<"customer "<<id<<" repeated "<<max<<" times";
}