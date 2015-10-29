#include <iostream>
#include <streambuf>
#include <strstream>
#include <cstdio>
#include <cmath>

using namespace std;

class Dia {
private:
    int secondsInAMinute    = 60;
    int secondsInAnHour     = 60 * secondsInAMinute;
    int secondsInADay       = 24 * secondsInAnHour;

public:
    int dia;
    int hora;
    int minuto;
    int segundo;

    int getSeconds() {
        return  segundo +
                minuto  * secondsInAMinute +
                hora    * secondsInAnHour +
                dia     * secondsInADay;
    }

    int diff(Dia d) {
        return abs(getSeconds() - d.getSeconds());
    }

    friend istream& operator>>(istream &input, Dia &d) {
        string temp;

        getline(input, temp);
        sscanf(temp.c_str(), "Dia %d", &d.dia);

        getline(input, temp);
        sscanf(temp.c_str(), "%d : %d : %d", &d.hora, &d.minuto, &d.segundo);

        return input;
    }

    friend ostream& operator<<(ostream& output, Dia &d) {
        output << "Dia: " << d.dia << endl;
        output << "Hora: " << d.hora<< endl;
        output << "Minuto: " << d.minuto << endl;
        output << "Segundo: " << d.segundo << endl;
    }
};

class Tempo {
private:
    int secondsInAMinute    = 60;
    int secondsInAnHour     = 60 * secondsInAMinute;
    int secondsInADay       = 24 * secondsInAnHour;
public:
    int dias;
    int horas;
    int minutos;
    int segundos;

    Tempo(int seconds) {
        dias = floor(seconds / secondsInADay);

        int hourSeconds = seconds % secondsInADay;
        horas = floor(hourSeconds / secondsInAnHour);


        int minuteSeconds = hourSeconds % secondsInAnHour;
        minutos = floor(minuteSeconds / secondsInAMinute);

        int remainingSeconds = minuteSeconds % secondsInAMinute;
        segundos = ceil(remainingSeconds);
    }
};

/* solucao 1061 */
int main()
{
    Dia inicio, termino;
    cin >> inicio >> termino;
    int diferenca = termino.diff(inicio);

    Tempo diff(diferenca);

    cout << diff.dias << " dia(s)" << endl;
    cout << diff.horas << " hora(s)" << endl;
    cout << diff.minutos << " minuto(s)" << endl;
    cout << diff.segundos << " segundo(s)" << endl;

    return 0;
}
