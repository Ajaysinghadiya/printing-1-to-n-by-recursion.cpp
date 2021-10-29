#include <iostream>
using namespace std;

void Print1ToN(int n)
{
    if (n == 0)
    {
        return;
    }
    Print1ToN(n - 1);
    cout << n << endl;
}

int main()
{
    int n;
    cout << "enter the value of n";
    cin >> n;
    Print1ToN(n);

    return 0;
}
