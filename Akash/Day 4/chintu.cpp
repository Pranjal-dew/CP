#include <iostream>
using namespace std;
bool occurence(string a);
int main()
{
    string a;
    int x = 1;

    while (x == 1)
    {
        cout << endl
             << "Enter 1 to Run or 0 to Exit : ";
        cin >> x;
        switch (x)
        {
        case 1:
        { // statements_1;
            cout << "Enter string : ";
            cin >> a;
            cout << occurence(a);
            break;
        }

        case 0:
        { // statements_1;
            cout << "Program is exiting : Closed!";
            break;
        }
        }
    }
    return 0;
}

bool occurence(string a)
{
    int n = a.length();
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] == a[j])
            {
                cout << "true" << endl;
                return true;
            }
        }
    }
    cout << "false" << endl;
    return false;
}

