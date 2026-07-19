#include <iostream>
using namespace std;
void fun(int x, char ch){
    cout<<"HII"<<endl;
}
void fun(char ch, int x){
    cout<<"Hello"<<endl;
}
int main(){
    fun(65,'A');
    fun('A',65);
}