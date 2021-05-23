#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int min=INT_MAX;
    cout<<"enter";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"minimum number"<<min;
    return 0;

} 