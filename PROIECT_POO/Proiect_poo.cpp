#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <regex>
using namespace std;

void Meniu_conectare();
void Meniu_Autentificat();
void Meniu_principal();
void Meniu_contact();
void Meniu_Rezervare();
void Meniu_Istoric();
void Meniu_Autentificare();
void Meniu_Inregistrare();

class User
{
private:
    string nume, prenume, CNP, email, parola;

public:
    User(string nume, string prenume, string CNP, string email, string parola)
    {
        this->CNP = CNP;
        this->email = email;
        this->nume = nume;
        this->parola = parola;
        this->prenume = prenume;
    }
    void afisare()
    {
        cout << "Nume:" << nume << endl;
        cout << "Prenume:" << prenume << endl;
        cout << "CNP:" << CNP << endl;
        cout << "Email:" << email << endl;
    }
    string getNume()
    {
        return nume;
    }
    string getPrenume()
    {
        return prenume;
    }
    void scriere_fisier(fstream &fout)
    {
        fout << nume << endl
             << prenume << endl
             << CNP << endl
             << email << endl
             << parola << endl;
        fout << "Istoric:" << endl;
    }
};
fstream &operator>>(fstream &fin, const User &user)
{

    return fin;
}
fstream &operator<<(fstream &fout, User *u)
{
    u->scriere_fisier(fout);
    return fout;
}
void Meniu_Inregistrare()
{
    User *u;
    string nume, prenume, CNP, email, parola;
    cout << "Nume: ";
    cin >> nume;
    cout << "Prenume: ";
    cin >> prenume;
    cout << "CNP: ";
    cin >> CNP;
eticheta:
    try
    {
        cout << "Email: ";
        cin >> email;
        regex emailRegex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
        if (regex_match(email, emailRegex) == false)
        {
            throw logic_error("Adresa de email nu respecta formatul.");
        }
    }
    catch (logic_error &e)
    {
        fstream flog;
        flog.open("log.txt", ios::app);
        flog << e.what() << endl;
        cout << e.what() << endl;
        flog.close();
        goto eticheta;
    }
etiketa:
    try
    {

        cout << "Parola: ";
        cin >> parola;
        if (parola.length() < 3)
        {
            throw logic_error("Parola prea scurta");
        }
    }
    catch (logic_error &e)
    {
        fstream flog;
        flog.open("log.txt", ios::app);
        flog << e.what() << endl;
        cout << e.what() << endl;
        flog.close();
        goto etiketa;
    }
    u = new User(nume, prenume, CNP, email, parola);
    fstream f;
    f.open("Date_Utilizatori.txt", ios::app);
    f << u;
    f.close();
}
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
        Meniu_Inregistrare();
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
            Meniu_principal();
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
