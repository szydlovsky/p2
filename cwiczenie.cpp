#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string b = "aBcd";
    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 'a' - 'A';
        }
    }
    for(int i = 0; i < b.length(); i++)
    {
        if(b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 'a' - 'A';
        }
    }
    cout << a << " " << b << " " << a.compare(b) << endl;

}   