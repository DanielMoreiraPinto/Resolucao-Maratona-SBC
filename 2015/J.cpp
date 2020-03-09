#include <iostream>
#include <vector>

using namespace std;

int main() {

    int jg, r, n, maior=-1, vencedor;
    vector<vector<int>> m;
    vector<int> tp;

    cin >> jg >> r;

    for(int i=0; i < jg; i++) {
        tp.push_back(0);
    }

    for(int i=0; i < jg; i++) {
        vector<int> aux;
        for(int j=0; j < r; j++) {
            cin >> n;
            aux.push_back(n);
            tp[i] += n;
        }
        m.push_back(aux);
    }

    for(int i=0; i < jg; i++) {
        if(tp[i] >= maior) {
            maior = tp[i];
            vencedor = i;
        }
    }
    vencedor++;
    cout << vencedor;

    return 0;
}