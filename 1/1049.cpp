#include <iostream>
#include <iomanip>
#include <map>
#include <string>

using namespace std;

/* solucao 1049 */
int main()
{
    map<string, map<string, map<string, string>>> mapeamento;
    mapeamento["vertebrado"]["ave"]["carnivoro"] = "aguia";
    mapeamento["vertebrado"]["ave"]["onivoro"] = "pomba";

    mapeamento["vertebrado"]["mamifero"]["onivoro"] = "homem";
    mapeamento["vertebrado"]["mamifero"]["herbivoro"] = "vaca";

    mapeamento["invertebrado"]["inseto"]["hematofago"] = "pulga";
    mapeamento["invertebrado"]["inseto"]["herbivoro"] = "lagarta";

    mapeamento["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
    mapeamento["invertebrado"]["anelideo"]["onivoro"] = "minhoca";

    string tipo1, tipo2, tipo3;
    getline(cin, tipo1);
    getline(cin, tipo2);
    getline(cin, tipo3);

    cout << mapeamento[tipo1][tipo2][tipo3] << endl;

    return 0;
}
