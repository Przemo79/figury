#include <iostream>
#include "prostokat.h"
#include "trojkat.h"
#include "trapez.h"
#include "romb.h"
#include "kolo.h"
#include "szescian.h"

using namespace std;

float czyMinus(float t)
{
    if (t <= 0)
    {
        do {
            cout << "Wartosc musi byc dodatnia!";
            cout << "\nPodaj poprawna wartosc: ";
            cin >> t;
            cout << endl;
        } while (t <= 0);
        return t;
    }
    else
    {
        return t;
    }
}

int main()
{
   
    int wybor = 0;
    
    do {
        system("cls");
        cout << "PROGRAM OBLICZA POLE I OBWOD DANYCH FIGUR GEOMETRYCZNYCH\n\n0 - zakoncz,\n1 - prostokat,\n2 - trojkat,\n3 - trapez,\n4 - rownoleglobok,\n5 - kolo,\n6 - szescian.\n\nJaka figure mam obliczyc?: ";
        cin >> wybor;
        if (wybor < 0 || wybor > 6)
        {
            cout << "\nNieprawidlowy wybor!";
        }
        else if (wybor == 0)
        {
            break;
        }
        else if (wybor == 1)
        {
            Prostokat p1;
            float bok_a = 0;
            float bok_b = 0;
            system("cls");

            cout << "\nPodaj dlugosc pierwszego boku (w cm): ";
            cin >> bok_a;
            bok_a = czyMinus(bok_a);
            cout << "Podaj dlugosc drugiego boku (w cm): ";
            cin >> bok_b;
            bok_b = czyMinus(bok_b);

            cout << "\nPole tego prostokata wynosi " << p1.pole(bok_a, bok_b) << " cm2, a obwod " << p1.obwod(bok_a, bok_b) << "cm.";
        }
        else if (wybor == 2)
        {
            int wyborT = 0;
            cout << "\nRodzaje trojkatow:\n1 - rownoramienny,\n2 - prostokatny,\n3 - roznoboczny.\n\nJaki trojkat chcesz obliczyc?: ";
            cin >> wyborT;

            if (wyborT == 1)
            {
                Trojkat t1;
                float bok_a = 0;
                float wysokosc = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego trojkata (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc boku, na ktory pada powyzej wpisana wysokosc (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);

                cout << "\nPole tego trojkata wynosi " << t1.pole_t1(bok_a, wysokosc) << " cm2, a obwod " << t1.obwod_t1(bok_a, wysokosc) << "cm.";
            }
            else if (wyborT == 2)
            {
                Trojkat t2;
                float bok_a = 0;
                float wysokosc = 0;
                system("cls");

                cout << "\nPodaj dlugosc pierwszej przyprostokatnej (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc drugiej przyprostokatnej (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);

                cout << "\nPole tego trojkata wynosi " << t2.pole_t2(bok_a, wysokosc) << " cm2, a obwod " << t2.obwod_t2(bok_a, wysokosc) << "cm.";
            }
            else if (wyborT == 3)
            {
                Trojkat t3;
                float bok_a = 0;
                float bok_b = 0;
                float bok_c = 0;
                float wysokosc = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego trojkata (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc boku, na ktory pada powyzej wpisana wysokosc (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);
                cout << "Podaj dlugosc drugiego boku: ";
                cin >> bok_b;
                bok_b = czyMinus(bok_b);
                cout << "Podaj dlugosc trzeciego boku: ";
                cin >> bok_c;
                bok_c = czyMinus(bok_c);

                if (bok_a + bok_b <= bok_c || bok_c + bok_a <= bok_b || bok_c + bok_b <= bok_a)
                {
                    cout << "\nPodany trojkat nie istnieje!";
                }
                else
                {
                    cout << "\nPole tego trojkata wynosi " << t3.pole_t3(bok_a, wysokosc) << " cm2, a obwod " << t3.obwod_t3(bok_a, bok_b, bok_c) << "cm.";
                }
            }
            else
            {
                cout << "\nNieprawidlowy wybor!";
            }
        }
        else if (wybor == 3)
        {
            int wyborTP = 0;
            cout << "\nRodzaje trapezow:\n1 - rownoramienny,\n2 - prostokatny,\n3 - roznoboczny.\n\nJaki trapez chcesz obliczyc?: ";
            cin >> wyborTP;

            if (wyborTP == 1)
            {
                Trapez tp1;
                float bok_a = 0;
                float bok_b = 0;
                float wysokosc = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego trapezu (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc dolnej podstawy (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);
                cout << "Podaj dlugosc gornej podstawy (w cm): ";
                cin >> bok_b;
                bok_b = czyMinus(bok_b);

                if (bok_a < bok_b)
                {
                    float zmiana = bok_a;
                    bok_a = bok_b;
                    bok_b = zmiana;
                }

                cout << "\nPole tego trapezu wynosi " << tp1.pole_tp1(bok_a, bok_b, wysokosc) << " cm2, a obwod " << tp1.obwod_tp1(bok_a, bok_b, wysokosc) << "cm.";
            }
            else if (wyborTP == 2)
            {
                Trapez tp2;
                float bok_a = 0;
                float bok_b = 0;
                float wysokosc = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego trapezu (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc dolnej podstawy (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);
                cout << "Podaj dlugosc gornej podstawy (w cm): ";
                cin >> bok_b;
                bok_b = czyMinus(bok_b);

                if (bok_a < bok_b)
                {
                    float zmiana = bok_a;
                    bok_a = bok_b;
                    bok_b = zmiana;
                }

                cout << "\nPole tego trapezu wynosi " << tp2.pole_tp2(bok_a, bok_b, wysokosc) << " cm2, a obwod " << tp2.obwod_tp2(bok_a, bok_b, wysokosc) << "cm.";
            }
            else if (wyborTP == 3)
            {
                Trapez tp3;
                float bok_a = 0;
                float bok_b = 0;
                float bok_c = 0;
                float bok_d = 0;
                float wysokosc = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego trapezu (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc dolnej podstawy (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);
                cout << "Podaj dlugosc gornej podstawy (w cm): ";
                cin >> bok_b;
                bok_b = czyMinus(bok_b);
                cout << "Podaj dlugosc pierwszego ramienia (w cm): ";
                cin >> bok_c;
                bok_c = czyMinus(bok_c);
                cout << "Podaj dlugosc drugiego ramienia (w cm): ";
                cin >> bok_d;
                bok_d = czyMinus(bok_d);

                cout << "\nPole tego trapezu wynosi " << tp3.pole_tp3(bok_a, bok_b, wysokosc) << " cm2, a obwod " << tp3.obwod_tp3(bok_a, bok_b, bok_c, bok_d, wysokosc) << "cm.";
            }
            else
            {
                cout << "\nNieprawidlowy wybor!";
            }
        }
        else if (wybor == 4)
        {
            int wyborR = 0;
            cout << "\nRodzaje rownoleglobokow\n1 - rownoleglobok,\n2 - romb.\n\nJaki rownoleglobok chcesz obliczyc?: ";
            cin >> wyborR;

            if (wyborR == 1)
            {
                Romb r1;
                float wysokosc = 0;
                float bok_a = 0;
                float bok_b = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego rownolegloboku (w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc boku, na ktory pada powyzej wpisana wysokosc (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);
                cout << "Podaj dlugosc drugiego boku: ";
                cin >> bok_b;
                bok_b = czyMinus(bok_b);

                cout << "\nPole tego rownolegloboku wynosi " << r1.pole_r1(bok_a, wysokosc) << " cm2, a obwod " << r1.obwod_r1(bok_a, bok_b) << "cm.";

            }
            else if (wyborR == 2)
            {
                Romb r2;
                float wysokosc = 0;
                float bok_a = 0;
                system("cls");

                cout << "\nPodaj wysokosc tego rombu(w cm): ";
                cin >> wysokosc;
                wysokosc = czyMinus(wysokosc);
                cout << "Podaj dlugosc boku, na ktory pada powyzej wpisana wysokosc (w cm): ";
                cin >> bok_a;
                bok_a = czyMinus(bok_a);

                cout << "\nPole tego rombu wynosi " << r2.pole_r2(bok_a, wysokosc) << " cm2, a obwod " << r2.obwod_r2(bok_a) << "cm.";
            }
        }
        else if (wybor == 5)
        {
            Kolo k1;
            float promien = 0;
            system("cls");

            cout << "\nPodaj dlugosc promienia (w cm): ";
            cin >> promien;
            promien = czyMinus(promien);

            cout << "\nPole tego kola wynosi " << k1.pole(promien) << " cm2 (" << promien * promien << "pi cm2), a obwod " << k1.obwod(promien) << "cm (" << promien * 2 << "pi cm).";
        }
        else if (wybor == 6)
        {
            Szescian s1;
            float krawedz = 0;
            system("cls");

            cout << "\nPodaj dlugosc jednej z krawedzi szescianu (w cm): ";
            cin >> krawedz;
            krawedz = czyMinus(krawedz);

            cout << "\nObwod tego szescianu wynosi " << s1.obwod(krawedz) << "cm, pole wynosi " << s1.pole(krawedz) << " cm2, a objetosc jest rowna " << s1.objetosc(krawedz) << " cm3.";
        }
        else
        {
            cout << "\nNieprawidlowy wybor!\n";
        }

        cout << "\n\n0 - powrot do menu: ";
        cin >> wybor;
        wybor++;

    } while (wybor != 0);
    
    cout << "\nProgram zakonczyl dzialanie.\n";
}