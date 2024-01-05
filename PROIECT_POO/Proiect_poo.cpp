
#include <iostream>
#include <string>
#include <list>

using namespace std;

void Meniu_conectare();
void Meniu_Autentificat();
void Meniu_principal();
void Meniu_contact();
void Meniu_Rezervare();
void Meniu_Istoric();

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
        Meniu_principal();
        break;
    default:
        Meniu_conectare();
        break;
    }
}
void Meniu_contact()
{
    int opt;
    while (1)
    {
        cout << "Suport tehnic" << endl
             << "In cazul în care întâlniți dificultăți echipa de suport vă va sta la dispoziție." << endl
             << "Tot ce trebuie să faceți este să completați următorul formular în care trebuie descrisă problema." << endl
             << "Alegeți o opțiune:" << endl
             << "     1. Trimitere sesizare" << endl
             << "     2. Inapoi" << endl
             << "Optiune: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            break;
        case 2:
            break;

        default:
            break;
        }
    }
}
void Meniu_Autentificat()
{
    int opt;
    while (1)
    {
        cout << "1.Achizitie/Imprumut" << endl;
        cout << "2.Istoric" << endl;
        cout << "3.Contact" << endl;
        cout << "Optiune: ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            break;
        case 2:
            break;

        default:
            break;
        }
    }
}
void Meniu_principal()
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
