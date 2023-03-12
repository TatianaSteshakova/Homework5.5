#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Rus");

    int n, m;
    cout << "Введите количество строк и столбцов двумерного массива (через пробел): " << endl;
    cin >> n >> m;

    int** mas = new int* [n];
    for (int i = 0; i < n; i++)
    {
        mas[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Введите число mas[" << i << "][" << j << "]: ";
            cin >> mas[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = i; j < m; j++)
        {
            temp = mas[i][j];
            mas[i][j] = mas[j][i];
            mas[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%5i", mas[i][j]);
        }
        cout << endl;
    }
}
