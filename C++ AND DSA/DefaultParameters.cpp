// #include <iostream>
// using namespace std;
// void fun(int age = 18){
//     cout<<"My age is "<<age<<endl;
// }
// int main(){
//     fun(26);
//     fun();

// }

#include <iostream>
using namespace std;
int sum(int a = 2, int b = 3 , int c = 4){
    cout<<a+b+c<<endl;
}
int main(){
    sum(2,3);
    sum();
    sum(6,6,6);
}