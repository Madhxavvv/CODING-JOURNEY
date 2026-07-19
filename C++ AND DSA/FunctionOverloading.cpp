#include <iostream>
using namespace std;
void fun(){
    cout<<"HI"<<endl;
}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
// ERROR
// void fun(int x = 7){
//     cout<<"ERROR"<<endl;
// }
int main(){
    fun();
    fun(7);

}