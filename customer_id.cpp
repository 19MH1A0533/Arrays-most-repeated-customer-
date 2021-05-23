#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter customer ID's";
    cin>>n;
    int arr[n],cid=0,max=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count>max)
            {
                max=count;
                cid=arr[i];
            }
        }
    }
    cout<<"The most visited customer is"<<cid;
    return 0;
}