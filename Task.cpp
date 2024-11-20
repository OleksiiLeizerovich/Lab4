#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "uk-UA.UTF-8");
    int X[12];
    for (int i = 0; i < 12; i++)
    {
        cout << "Введіть " << i + 1 << " значення для масиву: ";
        cin >> X[i];
    }

    cout << "Новостворений масив: ";
    int k = 0;
    for (int i = 0; i < 12; i++)
    {
        cout << setw(4) << X[i] << " ";
        if (X[i] < 0)
            k++;
    }
    cout<<endl;
    if (k == 0)
    {
        cout << "Масив не містить від'ємних значень" << endl;
        return 0;
    }
    else if (k <= 2)
    {
        cout << "У масиві замало від'ємних значень" << endl;
        return 0;
    }
    int m = 0;
    for (int i = 11; i >= 0; i--)
    {
        if (X[i] < 0)
        {
            m = i;
            cout << "Останнє від'ємне число " << X[i] << ", а його індекс " << i << endl;
            break;
        }
    }
    cout<<"Новий масив"<<endl;
    int n1 = 0, n2 = 0, nc = 0;
    for (int i = 0; i < 12; i++)
    {
        cout<<setw(4)<<X[i]<<" ";
        if (X[i] < 0)
        {
            nc++;
            if (nc == 1)
                n1 = X[i];
            else if (nc == 2)
            {
                n2 = X[i];
                X[m] = n1 + n2;
            }
        }
    }
    return 0;
}