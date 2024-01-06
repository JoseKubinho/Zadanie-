#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


void zadanie1() {
    double a, b, h, wynik;
    cout<<"Podaj d�ugo�� pierwszej podstawy (a): ";
    cin>>a;
    cout<<"Podaj d�ugo�� drugiej podstawy (b): ";
    cin>>b;
    cout<<"Podaj wysoko�� (h): ";
    cin>>h;

    wynik = 0.5 * (a + b) * h;
    cout<<"Pole trapezu: "<<wynik<<endl;
}

void zadanie2() {
    double x, wynik;
    cout<<"Podaj wartosc x: ";
    cin>>x;

    if (x<0){
        wynik=0.5*x*x+1.0/3.0*x;
    } else if(x>=0&&x<=6){
        wynik = sin(x)+1;
    } else {
        wynik=x+3;
    }

    cout<<"Wartosc y wynosi:"<<wynik<<endl;
}

void zadanie3() {
    int random = rand() % 2 + 1;
    if (random == 1) {
        cout << "Reszka" << endl;
    } else {
        cout << "Orze�" << endl;
    }
}
void zadanie4() {
    double a, b, c, pole;
    bool poprawny;

    cout << "Podaj d�ugo�� odcinka a: ";
    cin >> a;
    cout << "Podaj d�ugo�� odcinka b: ";
    cin >> b;
    cout << "Podaj d�ugo�� odcinka c: ";
    cin >> c;

    poprawny = a + b > c && a + c > b && b + c > a;

    if (poprawny) {
        double p = 0.5 * (a + b + c);
        pole = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "Mo�na zbudowa� tr�jk�t. Pole tr�jk�ta: " << pole << endl;
    } else {
        cout << "Nie mo�na zbudowa� tr�jk�ta." << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int zadanie;
    do {
        cout << "Wybierz opcje 1-4:" << endl;
        cin >> zadanie;

        switch (zadanie) {
            case 1:
                zadanie1();
                break;

            case 2:
                zadanie2();
                break;

            case 3:
                zadanie3();
                break;

            case 4:
                zadanie4();
                break;

            case 0:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Nieprawid�owy wyb�r. Spr�buj ponownie." << endl;
        }

    } while (zadanie != 0);

    return 0;
}
