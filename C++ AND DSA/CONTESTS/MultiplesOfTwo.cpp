/* Given an integer , write a program to print all the positive integers from  to  (inclusive) that are multiples of .

Each multiple should be printed on a new line in ascending order.

Input Format

A single integer  representing the upper limit.
Constraints

Output Format

Print the multiples of 2 from  to , with each number on a new line.
Sample Input 0

3
Sample Output 0

2
Sample Input 1

10
Sample Output 1

2
4
6
8
10
Sample Input 2

2
Sample Output 2

2 */

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
        if(i%2 == 0){
            cout<<i<<endl;
        }
    }
     
    return 0;
}