#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << " ";
    }
}

int main()
{
    int n = 1;
    cout << "Enter a number: ";
    cin >> n;
    pattern(n);
    return 0;
}