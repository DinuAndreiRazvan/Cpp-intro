/*
    Programul afiseaza prima cifra a unui numar numar intreg
*/
#include <iostream>

using namespace std;

int main()
{
    int nr;

    /* citeste valoarea numarului */
    cin >> nr;

    /* cat timp numarul este mai mare decat 9 are mai mult de o cifra */
    while (nr > 9) {
        /* eliminam cate o cifra */
        nr = nr / 10;
    }

    /* afisarea numarului */
    cout << nr << '\n';

    return 0;
}