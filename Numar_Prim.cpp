/*
    Programul verifica daca un numarul este prim
*/
#include <iostream>

using namespace std;

int main()
{
    int nr, d, contor;

    /* citeste valoarea numarului */
    cin >> nr;
    /* seteaza numarul de divizori la 0 */
    contor = 0;

    /* d ia toate valorile de la 2 la jumatatea lui nr */
    for(d = 2; d <= nr/2; d++) {
        /* conditia de divizor */
        if (nr % d == 0) {
            /* creste numarul de divizori */
            contor ++;
        }
    }

    /* pasul de verificare */
    if (contor == 0 && nr != 0 && nr != 1)
        cout << "Numarul este prim\n";
    else
        cout << "Numarul NU este prim\n";

    return 0;
}
/*
Notatii Suplimentare:
- Rezolvarea se bazeaza pe algoritmul numarului de divizori
- d ia valori de la 2 la n/2 din motive de eficienta
- 0 si 1 NU sunt considerate numere prime
*/