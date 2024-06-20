#include <iostream>
using namespace std;

int fibo(int a);
// Pass by Value
// Pass by Reference

int main()
{
    int a;
    cin >> a; // 4 6
    cout << fibo(a);
}

int fibo(int a)
{
    if (a <= 1)
    {
        return a;
    }
    // base condition complete

    return fibo(a - 1) + fibo(a - 2);
}

