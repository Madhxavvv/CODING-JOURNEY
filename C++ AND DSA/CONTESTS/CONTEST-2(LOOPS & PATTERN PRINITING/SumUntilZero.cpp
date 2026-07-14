/* Write a program that continuously accepts integers from standard input and calculates their cumulative sum.

The program must terminate and print the final sum as soon as the user enters the number 0.

Note:

The 0 itself should not be added to the sum.
You are guaranteed that the input stream will eventually contain a 0.
Input Format

A sequence of integers separated by spaces or newlines.
Constraints

The maximum number of inputs before encountering 0 will not exceed .
Output Format

Print a single integer representing the sum of all numbers entered before the 0. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int sum = 0;
    int n = 1;
    for(int i = 1; i>0; i++){
        cin>>n;
        if(n>1000 || n<(-1000)){
            break;
        }
        if(n==0){
            break;
        }
        sum += n;

    }
    cout<<sum;
}
