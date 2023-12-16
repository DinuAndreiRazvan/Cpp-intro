/*
    Programul afiseaza numarul de divizori ai unui numar numar natural
*/
#include <iostream>

using namespace std;

int main()
{
    int nr, d, contor;

    /* citeste valoarea numarului */
    cin >> nr;
    /* seteaza contorul la 0 */
    contor = 0;

    /* d ia toate valorile de la 1 la nr */
    for(d = 1; d <= nr; d++) {
        /* conditia de divizor */
        if (nr % d == 0) {
            /* creste numarul de divizori */
            contor ++;
        }
    }

    /* afisarea numarului de divizori */
    cout << contor << "\n";

    return 0;
}