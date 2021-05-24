#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *maxi=max_element(arr,arr+n);
    int frq[*maxi+1]={0};
    for(int i=0;i<n;i++)
    {
        frq[arr[i]]++;
    }
    for(int i=0;i<*maxi;i++)
    {
        cout<<frq[i]<<" ";
    }
    int *max1=max_element(frq,frq+(*maxi+1));
    cout<<"most repeated"<<*max1;
    return 0;
}
