#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(0);
    v.push_back(2);
    v.push_back(8);
    v.pop_back();
    v.pop_back();
    v.push_back(1);
    // v.push_back(5);
    // v.push_back(9);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(8);
    // v.push_back(4);
    // v.push_back(6);
    // v.push_back(1);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}