#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string b = "aBcd";
    for(int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
    }
    for(int i = 0; i < b.length(); i++)
    {
        b[i] = tolower(b[i]);
    }
    cout << a << " " << b << " " << a.compare(b) << endl;

}   