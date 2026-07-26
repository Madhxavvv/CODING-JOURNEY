#include <iostream>
using namespace std;
int main(){
    int marks[] = {70,75,80,83,90};
    int n=sizeof(marks)/sizeof(marks[0]);
    for(int i = 0; i<n ; i++){
        cout<<marks[i]<<" ";
    }
}