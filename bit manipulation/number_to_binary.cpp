#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string s;

    while (n)
    {
        if (n % 2 == 1)
            s += '1';
        else
            s += '0';
        n = n / 2;
    }

    reverse(s.begin(), s.end());
    cout << s << endl;

    return 0;
}