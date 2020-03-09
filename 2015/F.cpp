//resolvido por Daniel Moreira Pinto 

#include <iostream>
#include <vector>

using namespace std;

//optou-se por usar unsigned long long para segurança

//função que calcula fatorial para a lógica do programa (lista crescente de fatoriais) 
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

    //faz uma lista crescente de fatoriais até o número máximo permitido na questão
    //aqui ff está sendo usado comp auxiliar, e por isso é resetado logo após
    while (r < 100000) {
        r = fat(ff);
        fats.push_back(r);
        ff++;
    }

    ff = 0;

    //até que se chegue no número desejado, encontra-se o fatorial na lista que, após a soma, chegue mais perto 
    //do número e incrementa-se o valor da saída.
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