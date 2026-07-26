#include <iostream>
using namespace std;
int main(){
    int marks[] = {74, 96, 55, 62, 91};
    int size = sizeof(marks)/sizeof(marks[0]);
    for(int i = 0; i<size; i++){
        cout<<marks[i]<<endl;
    }
    cin>>marks[2];
    cout<<marks[2]<<endl;
}