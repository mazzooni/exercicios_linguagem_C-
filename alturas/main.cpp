#include <iostream>
#include <climits>
#include <iomanip>

using namespace std;

int main()
{
    int n, cont;
    double soma, media, percentual;

    cout <<"Quantas pessoas serao digitadas?";
    cin >> n;

    string nomes[n];
    int idades[n];
    double alturas[n];

    for (int i = 0; i < n; i++) {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout <<"Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }

    soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + alturas[i];
    }
    media = soma / n;
    cout << fixed << setprecision(2);
    cout << endl <<"Altura media: " << media << endl;

    cont = 0;
    for (int i = 0; i < n; i++) {
        if(idades[i] < 16) {
            cont++;
        }
    }

    percentual = (double)cont * 100.0 / n;
    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;


    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
