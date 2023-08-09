#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int n)
{
    cout<<endl;
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}

int main()
{
//    Declaretion and initializtion
    int a[5];
    int b[] = {10,20,50,30};
    // Assinging
    a[0] = 5;
    // sixe of arr;
    int n = sizeof(a)/sizeof(a[0]);
    // loop 
    for(int i=0;i<n;i++)
    {
        a[i] = i+1;
    }
    // range based loop c++11
    for(int i :a)
    {
        cout<<i;
    }
    // function 
    // 1 swap 
    swap(a[0],a[2]);
    cout<<endl;
    cout<<a[0]<<" "<<a[2];
    // 2 sort 
    cout<<endl;

    sort(a,a+n);
    for(int i:a)
    {
        cout<<i<<" ";
    }

    // 3 reverse 
    cout<<endl;
    reverse(a,a+n);
    for(int i :a)
    {
        cout<<i<<" ";
    }
    // 2d
    int m[3][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    // dynamic 
    int *da = new int[5];
    delete[] da;
}