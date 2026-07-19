#include <iostream>
using namespace std;
int main(){
    int x = 8;
    {
        int x = 6;
    }
    cout<<x<<endl;
}