/* Create a program that takes an odd integer n and prints a Square with Diagonals. The
grid should display a solid outer boundary along with intersecting major and minor diagonals.
Sample — Input: n = 8 ⇒ Output:
*/ 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 || i == 1 || j == n || i == n)
            {
                cout << "* ";
            }
            else
            {
                if (j == i || j == (n + 1 - i))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}