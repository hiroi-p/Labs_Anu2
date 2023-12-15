#include <iostream>
#include <string>
#include <list>

using namespace std;

void Meniu_principal()
{
    cout << "-------------------------------";

    cout << "Bookstore app" << endl
         << endl
         << endl;
    cout << "Alegeti o optiune: " << endl;
    cout << "1.Conectare" << endl;
    cout << "2.Contact" << endl;
    cout << "-------------------------------"<<endl;
}
void Meniu_conectare()
{
    cout << "1.Inregistrare" << endl;
    cout << "2.Autentificare" << endl;
    cout << "3.Resetare Parola" << endl;
    cout << "4.Inapoi" << endl;
}
void Meniu_contact()
{
}
void Meniu4()
{
    cout << "1.Achizitie/Imprumut" << endl;
    cout << "2.Istoric" << endl;
    cout << "3.Contact" << endl;
}
int main()
{
    int opt;

    Meniu_principal();
    cin >> opt;
    switch (opt)
    {
    case 1:
        Meniu_conectare();
        int opt2;
        cin >> opt;
        switch (opt2)
        {
        case /* constant-expression */:
            /* code */
            break;

        default:
            break;
        }
        break;
    case 2:
        Meniu_conectare();
        break;

    default:
        break;
    }
    return 0;
}
