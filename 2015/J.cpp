#include <iostream>
#include <vector>

using namespace std;

int main() {

    int jg, r, n, maior=-1, vencedor;
    vector<vector<int>> m;
    vector<int> tp;

    cin >> jg >> r;

    //inicia-se o vetor de total de pontos (cada posição representa um jogador) com 0
    for(int i=0; i < jg; i++) {
        tp.push_back(0);
    }

    //recebe-se as r jogadas de cada jogador e já adiciona-se o total de cada um no vetor de total de pontos
    for(int i=0; i < jg; i++) {
        vector<int> aux;
        for(int j=0; j < r; j++) {
            cin >> n;
            aux.push_back(n);
            tp[i] += n;
        }
        m.push_back(aux);
    }

    //percorre-se o vetor de total de pontos para ter sempre o jogador com a maior pontuação e, no caso de empate, o
    //que jogou por último
    for(int i=0; i < jg; i++) {
        if(tp[i] >= maior) {
            maior = tp[i];
            vencedor = i;
        }
    }
    //incremento na saída para ficar em numeração humana (a partir do 1)
    vencedor++;
    cout << vencedor;

    return 0;
}