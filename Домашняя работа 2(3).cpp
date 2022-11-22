#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j, k = 1, m, n, c = 0, b, ** a;
    cout << "Количество строк m: "; cin >> m;
    cout << "Количество количество стобцов n: "; cin >> n;
    a = new int* [m];
    for (i = 0; i < m; i++)
        *(a + i) = new int[n];  // *(a + i) == a[i]

    b = m * n;

    do
    {
        for (j = c; j < n - c; j++)
        {
            if (k > b)
                break;
            a[c][j] = k++;
        }

        for (i = c + 1; i < m - c; i++)
        {
            if (k > b)
                break;
            a[i][n - c - 1] = k++;
        }

        for (j = n - c - 2; j >= c; j--)
        {
            if (k > b)
                break;
            a[m - c - 1][j] = k++;
        }

        for (i = m - c - 2; i > c; i--)
        {
            if (k > b)
                break;
            a[i][c] = k++;
        }

        c++;
    } while (k <= m * n);

    // output
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n - 1; j++)
            cout << a[i][j] << "\t";
        cout << a[i][n - 1] << "\n";
    }

    for (i = 0; i < m; i++)
        delete[] a[i];
    delete[] a;

    system("pause");
    return 0;
}
