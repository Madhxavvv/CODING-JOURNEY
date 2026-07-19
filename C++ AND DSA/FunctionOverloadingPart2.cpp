#include <iostream>
using namespace std;
void fun(int x){
    cout<<"HI"<<endl;
}
void fun(char x){
    cout<<"KING"<<endl;
}
void fun(double x){
    cout<<"QUEEN"<<endl;
}
int main(){
    fun(7);
    fun('A');
    fun(7.0);
}