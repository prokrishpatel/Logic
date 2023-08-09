#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    // A vector is a dynamic array-like data structure provided by the C++ Standard Library. It is one of the most versatile and commonly used containers for managing collections of elements. Vectors provide dynamic sizing, efficient element access, and automatic memory management. Here's an overview of vectors in C++, including their features and usage:

    // declare and initializ 
    vector<int> v1;
    vector<int> v2 = {1,2,3,4,5};
    vector<int> v3(5,-1);

    for(auto i  : v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i:v3)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // add element 

    v1.push_back(5);
    v2.insert(v1.begin() + 2, 3);
    for(auto i  : v2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<v2[3];
    cout<<v3.front();
    cout<<v3.back();

    cout<<v2.size();
    cout<<v2.capacity();
}