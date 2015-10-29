#include <iostream>

using namespace std;

/* solucao 1047 */
int main()
{
    int hora_inicio, min_inicio, hora_termino, min_termino;
    int minuto_inicio, minuto_termino;
    int diferenca_minutos;
    int horas, minutos;
    cin >> hora_inicio>> min_inicio >> hora_termino >> min_termino;

    minuto_inicio = hora_inicio * 60 + min_inicio;
    minuto_termino = hora_termino * 60 + min_termino;

    /* testar se hora inicio é maior ou igual a termino, sendo, jogo terminou no outro dia */
    if (minuto_inicio >= minuto_termino) {
        minuto_termino += 24 * 60;
    }

    diferenca_minutos = minuto_termino - minuto_inicio;
    horas = diferenca_minutos / 60;
    minutos = diferenca_minutos % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}
