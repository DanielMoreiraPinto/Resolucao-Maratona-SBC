#include <iostream>
using namespace std;

int fat(int a)
{
    if(a == 1) {
        return a;
    }
    a *= fat(a-1);
}

int main()
{
    int n, k = 1, f1 = 1, f2 = 1, aux, ff;

    cin >> n;

    while(true) {
        if(fat(f1) > n) {
            break;
        }
        f1++;
    }
    f1--;
    while(f1 != n) {
        ff = fat(f1);
        cout << "f1: " << f1 << "\n";
        cin >> aux;
        while(ff + fat(f2) <= n) {
            f2++;
            cout << "f2: " << f2 << "\n";
        }
        f2--;
        f1 += f2;
        k++;
        f2 = 1;
    }
    cout << k;

    return 0;
}