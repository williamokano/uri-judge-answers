#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double nota1, nota2, nota3, nota4, notaExame, media = 0, mediaExame;
    int peso1, peso2, peso3, peso4;
    bool estaDeExame = false, alunoAprovado = true;

    /* define os pesos */
    peso1 = 2;
    peso2 = 3;
    peso3 = 4;
    peso4 = 1;

    notaExame = 7.0;

    /* Lê as 4 notas */
    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3 + nota4*peso4) / (peso1+peso2+peso3+peso4);
    media = floor(media*10)/10;
    /* checa se esta de exame */
    estaDeExame = media >= 5.0;
    alunoAprovado = media >= notaExame;

    cout << fixed << showpoint << setprecision(1);
    cout << "Media: " << floor(media*10)/10 << endl;

    if (!alunoAprovado) {
        if (estaDeExame) {
            /* :) vai goku */
            cout << "Aluno em exame." << endl;

            /* define nova nota exame */
            notaExame = 5.0;

            /* le nota do exame */
            cin >> mediaExame;
            media += mediaExame;
            media /= 2;

            cout << "Nota do exame: " << mediaExame << endl;

            alunoAprovado = media >= notaExame;

            if (alunoAprovado) {
                cout << "Aluno aprovado." << endl;
                cout << "Media final: " << floor(media*10)/10 << endl;
            } else {
                cout << "Aluno reprovado." << endl;
            }
        } else {
            cout << "Aluno reprovado." << endl;
        }
    } else {
        cout << "Aluno aprovado." << endl;
    }
    return 0;
}
