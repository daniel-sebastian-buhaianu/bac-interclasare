#include <iostream>
#include <fstream>
#define NMAX 499
#define MMAX 499
using namespace std;
ifstream fin("bac.txt");
int main()
{
    int m, n, i, j, x, nb, na;
    int a[NMAX], b[MMAX];
    fin >> m >> n;
    for (nb = i = 0; i < m; i++)
    {
        fin >> x;
        if (x%2) b[nb++] = x;
    }
    for (na = i = 0; i < n; i++)
    {
        fin >> x;
        if (x%2) a[na++] = x;
    }
    if (!na && !nb) cout << "nu exista";
    else
    {
        for (i = na-1, j = nb-1; i >= 0 && j >= 0;)
        {
            if (a[i] > b[j])
            {
                cout << a[i] << ' ';
                i--;
            }
            else if (b[j] > a[i])
            {
                cout << b[j] << ' ';
                j--;
            }
            else
            {
                cout << a[i] << ' ';
                i--, j--;
            }
        }
        while (i >= 0)
        {
            cout << a[i] << ' ';
            i--;
        }
        while (j >= 0)
        {
            cout << b[j] << ' ';
            j--;
        }
    }
    return 0;
}
