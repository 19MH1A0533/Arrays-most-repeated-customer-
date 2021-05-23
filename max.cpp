#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter number";
    cin>>n;
    int arr[n],max=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"the maximum number is "<<max;
    return 0;
}