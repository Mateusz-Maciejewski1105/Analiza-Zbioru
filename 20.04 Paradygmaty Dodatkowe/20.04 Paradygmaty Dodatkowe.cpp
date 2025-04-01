// 20.04 Paradygmaty Dodatkowe.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n;
    char wybor;
    do
    {
        cout << "Program sprawdzajacy ile w zbiorze podanych przez uzytkowanika znajduje sie liczb najwiekszych,\ndrugich najwiekszych, najmniejszych i drugich najmniejszych" << endl;

        cout << "Podaj liczbe n: ";
        cin >> n;

        if (n <= 0) {
            cout << "Niepoprawna liczba n. Program zostanie zakonczony.\n";
            return 1;
        }

        int max = INT_MIN;
        int min = INT_MAX;
        int drugaMax = INT_MIN;
        int drugaMin = INT_MAX;
        int liczbaPowMin = 1;
        int liczbaPowMax = 1;
        int liczbaPowDrugaMax = 1;
        int liczbaPowDrugaMin = 1;

        for (int i = 0; i < n; ++i) {
            int liczba;
            cout << "Podaj liczbe " << i + 1 << ": ";
            cin >> liczba;

            if (liczba > max) {
                drugaMax = max;
                max = liczba;
                liczbaPowMax = 1;
            }
            else if (liczba == max) {
                liczbaPowMax++;
            }
            else if (liczba > drugaMax) {
                drugaMax = liczba;
            }
            else if (liczba == drugaMax) {
                liczbaPowDrugaMax++;
            }

            if (liczba < min) {
                drugaMin = min;
                min = liczba;
                liczbaPowMin = 1;
            }
            else if (liczba == min) {
                liczbaPowMin++;
            }
            else if (liczba < drugaMin) {
                drugaMin = liczba;
            }
            else if (liczba == drugaMin) {
                liczbaPowDrugaMin++;
            }
        }

        cout << "Najwieksza liczba wsrod podanych to: " << max << endl;
        cout << "Najmniejsza liczba wsrod podanych to: " << min << endl;
        cout << "Liczba powtorzen najmniejszej liczby to: " << liczbaPowMin << endl;
        cout << "Liczba powtorzen najwiekszej liczby to: " << liczbaPowMax << endl;
        cout << "Druga najwieksza liczba wsrod podanych to: " << drugaMax << endl;
        cout << "Druga najmniejsza liczba wsrod podanych to: " << drugaMin << endl;
        cout << "Liczba powtorzen drugiej najmniejszej liczby to: " << liczbaPowDrugaMin << endl;
        cout << "Liczba powtorzen drugiej najwiekszej liczby to: " << liczbaPowDrugaMax << endl;

        return 0;
        cout << "Czy chcesz sprobowac jeszcze raz? [T/N]";
        cin >> wybor;
    } while (wybor == 'T' || wybor == 't');
}

