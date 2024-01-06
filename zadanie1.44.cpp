#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int coinToss();

void zadanie1() {
    double a, b, h, wynik;
    cout<<"Podaj dlugosc pierwszej podstawy (a): ";
    cin>>a;
    cout<<"Podaj dlugosc drugiej podstawy (b): ";
    cin>>b;
    cout<<"Podaj wysokosc (h): ";
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
    int liczba_rzutow;
    cout << "Podaj ilosc rzutow moneta: ";
    cin >> liczba_rzutow;

    int reszka=0;
    int orzel=0;

    for (int i = 0; i < liczba_rzutow; ++i) {
        int wynik= coinToss();

        if (wynik==1) {
            cout<<"Reszka"<<endl;
            reszka++;
        } else {
            cout<<"Orzel"<<endl;
            orzel++;
        }
    }
    cout<<"Liczba reszek : "<<reszka<<endl;
    cout<<"Liczba orlow : "<<orzel<<endl;
}
int coinToss() {
    return rand() % 2 + 1;
}
void zadanie4() {
    double a, b, c, pole;
    bool poprawny;

    cout<<"Podaj dlugosc odcinka a: ";
    cin>>a;
    cout<<"Podaj dlugosc odcinka b: ";
    cin>>b;
    cout<<"Podaj dlugosc odcinka c: ";
    cin>>c;

    poprawny=a+b>c&&a+c>b&&b+c>a;

    if (poprawny) {
        double p=0.5*(a + b + c);
        pole= sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"Z podanych odcinkow moze zostac zbudowany trojkat: "<<pole<<endl;
    } else {
        cout<<"Trojkat z podanych odcinkow nie moze powstac"<<endl;
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
                cout << "Nieprawid³owy wybór. Spróbuj ponownie." << endl;
        }

    } while (zadanie != 0);

    return 0;
}
