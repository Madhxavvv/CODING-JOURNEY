/* Given an integer , write a program to print a hollow right-angled triangle of height and base  using the * character and spaces.

Carefully observe the sample input and output to deduce the exact pattern and formatting required.

Input Format

A single integer  representing the size of the triangle.
Constraints

Output Format

Print  lines representing the hollow right-angled triangle.
Sample Input 0

5
Sample Output 0

*
**
* *
*  *
***** */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==n || j==1 || j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}