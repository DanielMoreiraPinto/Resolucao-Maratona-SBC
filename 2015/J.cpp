#include <iostream>
#include <vector>

using namespace std;

int main() {

    int j, r, n;
    vector<vector<int>> m;

    cin >> j >> r;

    for(int i=0; i < j; i++) {
        vector<int> aux;
        for(int k=0; k < r; k++) {
            cin >> n;
            aux.push_back(n);
        }
        m.push_back(aux);
    }

    

    return 0;
}