#include <iostream>



using namespace std;



string PIN ;



string x;



int main()

{

    cout << "Witaj w bankomacie wybierz czynność" << endl;

    cout << "Podaj numer PIN: ";

    cin >> PIN;



    if(PIN=="2115")

    {

        cout<<"Prawidłowy PIN";

            cout << "Wybierz kwotę do wypłacenia" << endl;

            cout << "Wpisz kwotę na terminalu: " << endl;

            cin >> x;



            if( x==x )

            cout << "Proszę bardzo, poprawnie wypłaciłeś z bankomatu: " << x << endl;

            cout << "Do zobaczenia ponownie, <3";

    }

    else

    {

        cout << "Nieprawidłowy PIN" << endl;

        cout << "Spróbuj jeszcze raz" << endl;

       

    }

    return 0;

}
