
#include <iostream>
#include <string>
#include <list>

using namespace std;

void Meniu_conectare()
{
    int opt;

    cout << "Alegeti optiunea: " << endl;
    cout << "1.Inregistrare" << endl;
    cout << "2.Autentificare" << endl;
    cout << "3.Resetare Parola" << endl;
    cout << "4.Inapoi" << endl;
    cin >> opt;
    switch (opt)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        Meniu_conectare();
        break;
    }
}
void Meniu_contact()
{

}
void Meniu_Autentificat()
{
    cout << "1.Achizitie/Imprumut" << endl;
    cout << "2.Istoric" << endl;
    cout << "3.Contact" << endl;
}
int Meniu_principal()
{
    int opt;
    cout << "-------------------------------" << endl;
    cout << "Bookstore app" << endl
         << endl
         << endl;
    cout << "Alegeti o optiune: " << endl;
    cout << "1.Conectare" << endl;
    cout << "2.Contact" << endl;
    cout << "-------------------------------" << endl;
    cin >> opt;
    switch (opt)
    {
    case 1:
        Meniu_conectare();
        break;
    case 2:
        Meniu_contact();
        break;
    default:
        cout << "Optiune incorecta!   Mai alege-ti o data! " << endl;
        Meniu_principal();
        break;
    }
}
int main()
{
    int opt;

    Meniu_principal();
    return 0;
}
//delete system34