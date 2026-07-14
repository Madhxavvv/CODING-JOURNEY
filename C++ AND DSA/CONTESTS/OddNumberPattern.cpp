/* Given an integer , write a program to print an  grid pattern consisting of odd numbers.

You must carefully observe the sample input and output to deduce the relationship between the row number, the column number, and the specific odd number printed at each position.

Note: The numbers must be printed consecutively on each line without any spaces between them.

Input Format

A single integer  representing the size of the grid.
Constraints

Output Format

Print  lines, each representing a row of the pattern, with no spaces between the numbers.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin>>N;
    int a = 1;
    int b = 1;
    for(int i=1; i<=N; i++){
        int c = 1;
        for(int j=1; j<=i; j++){
            cout<<c;
            c+=2;
        }
        for(int j=1; j<=(N-i); j++){
            cout<<b;
        }
        b+=2;
        cout<<endl;
    }
}