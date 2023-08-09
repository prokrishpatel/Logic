#include<bits/stdc++.h>
using namespace std;

int equli(int arr[],int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }

    int leftsum = 0;
    for(int i=0;i<n;i++)
    {
        sum -= arr[i];
        if(sum==leftsum)
        {
            return i;
        }
    }
}