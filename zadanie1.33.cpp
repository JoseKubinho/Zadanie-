#include <iostream>
#include <cmath>

using namespace std;

void zadanie1() {
int liczba;
int suma_dodatnich = 0, ilosc_dodatnich = 0;
int suma_ujemnych = 0, ilosc_ujemnych = 0;
while (true) {
cout << "Podaj liczbe calkowita (wpisz 'K' aby zakonczyc): ";
string input;
cin >> input;

if (input == "K" || input == "k") {
break;
}
liczba = std::stoi(input);

if (liczba > 0) {
suma_dodatnich += liczba;
ilosc_dodatnich++;
} else if (liczba < 0) {
suma_ujemnych += liczba;
ilosc_ujemnych++;
        }
    }
cout << "Suma liczb dodatnich: " <<suma_dodatnich <<endl;
cout << "Ilosc liczb dodatnich: " <<ilosc_dodatnich <<endl;
cout << "Suma liczb ujemnych: " <<suma_ujemnych <<endl;
cout << "Ilosc liczb ujemnych: " <<ilosc_ujemnych <<endl;

if (ilosc_ujemnych > 0) {
double srednia_ujemnych = static_cast<double>(suma_ujemnych) / ilosc_ujemnych;
cout << "Srednia arytmetyczna liczb ujemnych: " << srednia_ujemnych <<endl;
    }
}
void zadanie2() {
int liczba;
do{
cout << "Podaj liczbe calkowita (wpisz 0 aby zakonczyc): ";
cin >> liczba;
if (liczba != 0) {
cout << "Pierwiastek z liczby: " << sqrt(abs(liczba)) << endl;
}
} while (liczba != 0);
}

void zadanie3() {
int K;
cout << "Podaj liczbe calkowita K (K > 0): ";
cin >> K;
 double suma = 0.0;
for (int i = 1; i <= K; ++i) {
suma += 3 * i + 1.2 / (2 * i);
}
cout << "Suma wedlug wzoru: " << suma << endl;
}

void zadanie4() {
int liczba_pieter;
cout << "Podaj liczbe pieter w hotelu (nie mniejsza niz 1): ";
cin >> liczba_pieter;

while (liczba_pieter < 1) {
cout << "Bledna liczba pieter. Podaj liczbe pieter jeszcze raz: ";
cin >> liczba_pieter;
    }
int suma_pokoi = 0, suma_pokoi_zajetych = 0;

for (int i = 1; i <= liczba_pieter; ++i) {
if (i != 13) {
int liczba_pokoi, liczba_pokoi_zaj;

cout << "Podaj liczbe pokoi na pietrze " << i << " (nie mniej niz 5): ";
cin >> liczba_pokoi;

while (liczba_pokoi < 5) {
cout << "Bledna liczba pokoi. Podaj liczbe pokoi jeszcze raz: ";
cin >> liczba_pokoi;
}

cout << "Podaj liczbe zajetych pokoi na pietrze " << i << ": ";
cin >>liczba_pokoi_zaj ;

suma_pokoi += liczba_pokoi;
suma_pokoi_zajetych += liczba_pokoi_zaj;
}
}

cout << "Liczba pokoi w hotelu: " << suma_pokoi << endl;
cout << "Liczba zajetych pokoi: " << suma_pokoi_zajetych << endl;
cout << "Liczba wolnych pokoi: " << suma_pokoi - suma_pokoi_zajetych << endl;

if (suma_pokoi > 0) {
float procent_zaj = static_cast<float>(suma_pokoi_zajetych) / suma_pokoi * 100;
cout << "Procent zajetych pokoi: " << procent_zaj << "%" << endl;
} else {
cout << "Brak pokoi w hotelu." << endl;
    }
}

int main() {
int nrzadania;
do {
cout << "Wybierz nr zadania 1-4 (0 aby zakonczyc): ";
cin >> nrzadania;
switch (nrzadania) {
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
cout << "Program zakonczony." << endl;
break;
default:
cout << "Nieprawidlowy numer zadania." << endl;
break;
}
} while (nrzadania != 0);
return 0;
}
