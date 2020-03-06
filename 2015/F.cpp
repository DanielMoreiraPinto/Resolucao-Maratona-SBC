#include <iostream>
#include <vector>

using namespace std;

unsigned long fat(unsigned long long a)
{
    unsigned long long t=1;
    int i=1;
    while(i < a) {
        t *= i;
        i++;
    }
    return t;
}

int main()
{
    
    int n, k = 0, i = 0;
    unsigned long long ff = 0, r=1;
    vector<unsigned long long> fats;

    cin >> n;

    while (r < 100000) {
        r = fat(ff);
        fats.push_back(r);
        ff++;
    }

    ff = 0;

    while(ff != n) {
        while(ff + fats[i] <= n) {
            i++;
        }
        i--;
        ff += fats[i];
        i = 0;
        k++;
    }

    cout <<  k << "\n";

    return 0;
}