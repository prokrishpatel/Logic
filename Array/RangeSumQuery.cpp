#include<bits/stdc++.h>
using namespace std;

void range_sum(int arr[],int n,int q)
{
    int prefix[n] = {0};
    prefix[0] = arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    } 

    for(int i=0;i<q;i++)
    {
        int l,r;
        cin>>l>>r;
        int ans;
        if(l==0)
        {
            ans = prefix[r];
        }
        else{
            ans = prefix[r] - prefix[l-1];
        }
    }
}
int main()
{
    // Given q query have range l to r find sum of arr elemnents in this range 
    int q;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

}