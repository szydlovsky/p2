#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    const int n = 7;
    char ** tab = new char*[n];
    for(int i = 0; i < n ; i++ )
    {
        char a[100];
        scanf("%s", &a);
        int len = strlen(a);
        tab[i] = new char[len];
        for(int j = 0; j < len; j++)
        {
            tab[i][j] = a[j];
        }
    }
    delete [] tab;
}