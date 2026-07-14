/* Given an integer , write a program to print a butterfly pattern of size  using asterisks (*) and spaces.

You must carefully observe the sample input and output to deduce the relationship between , the total number of rows, the number of stars, and the number of spaces on each line.

Input Format

A single integer  representing the size parameter of the butterfly.
Constraints

Output Format

Print  lines representing the butterfly pattern. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int nsp = 2*n-2, nsp2 = 0;
    for(int i =1 ;i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp-=2;
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=(n+1-i); j++){
            cout<<"*";

        }
        for(int j=1; j<=nsp2; j++){
            cout<<" ";
        }
        nsp2+=2;
        for(int j=1; j<=(n+1-i); j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
