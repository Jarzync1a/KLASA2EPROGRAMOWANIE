#define _USE_MATH_DEFINES
#include <iostream>

//LotOfTasks

/*
Podstawy programowania:
1. Program obliczaj¹cy œredni¹ arytmetyczn¹ dwóch liczb. */
void task1()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsz¹ liczbe:";
    std::cin >> firstNumber;

    std::cout << "Podaj pierwsz¹ liczbe:";
    std::cin >> secondNumber;

    std::cout << "srednia arytmetyczna dwóch podanych liczb równa sie : " << (firstNumber + secondNumber) / 2;
}

/*
2. Program obliczaj¹cy pole prostok¹ta. */
void task2()
{
    int firstSide, secondSide;

    std::cout << "Podaj pierwszy bok prostok¹ta:";
    std::cin >> firstSide;

    std::cout << "Podaj drugi bok prostok¹ta:";
    std::cin >> secondSide;

    std::cout << "Pole prostok¹ta równa siê:" << firstSide * secondSide;
}

/*
3. Program obliczaj¹cy objêtoœæ sto¿ka.*/
void task3()
{
    int figureRadius, figureHeight;

    std::cout << "Podaj promieñ podstawy sto¿ka:";
    std::cin >> figureRadius;

    std::cout << "Podaj promieñ podstawy sto¿ka:";
    std::cin >> figureHeight;

    std::cout << "Pole sto¿ka wynosi:" << 2 * M_PI * figureRadius * figureHeight / 3;
}

/*
4. Program obliczaj¹cy pole ko³a.*/
void task4()
{
    int circleRadius;

    std::cout << "Podaj promieñ ko³a:";
    std::cin >> circleRadius;

    std::cout << "Pole ko³a wynosi:" << 2 * M_PI * circleRadius;


}

/*
5. Program obliczaj¹cy wartoœæ wyra¿enia a^2 + b^2 */
void task5()
{
    int a, b;

    std::cout << "Podaj wartoœæ a:";
    std::cin >> a;

    std::cout << "Podaj wartoœæ b:";
    std::cin >> b;

    std::cout << "wartoœæ wyra¿enia a^2 + b^2 jest równa:" << a * a + b * b;
}

/*
6. Program obliczaj¹cy pole trójk¹ta o podstawie b i wysokoœci h */
void task6()
{
    int baseOfTheFigure, heightOfthefigure;

    std::cout << "Podaj podstawe trójk¹ta:";
    std::cin >> baseOfTheFigure;

    std::cout << "Podaj wysokoœæ trójk¹ta:";
    std::cin >> heightOfthefigure;

    std::cout << "Pole trójk¹ta wynosi:" << baseOfTheFigure * heightOfthefigure / 2;
}

/*
7. Program obliczaj¹cy objêtoœæ kuli o promieniu r */
void task7()
{
    int radiusOfTheBall;

    std::cout << "Podaj promieñ kuli:";
    std::cin >> radiusOfTheBall;

    std::cout << "objetoœæ kuli wynosi:" << 4 * M_PI * radiusOfTheBall * radiusOfTheBall * radiusOfTheBall / 3;
}

/*
8. Program obliczaj¹cy pole trapezu o podstawach a i b oraz wysokoœci h */
void task8()
{
    int firstBase, secondBase, heightOfFigure;

    std::cout << "Podaj pierwsz¹ podstawe trapezu:";
    std::cin >> firstBase;

    std::cout << "Podaj drug¹ podstawe trapezu:";
    std::cin >> secondBase;

    std::cout << "Podaj wysokoœæ trapezu:";
    std::cin >> heightOfFigure;

    std::cout << "Pole trapezzu wynosi:" << (firstBase + secondBase) * heightOfFigure / 2;
}

/*
9. Program obliczaj¹cy œredni¹ wa¿on¹ trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
Instrukcja If: */
void task9()
{
    int 
}

/*
10. Program sprawdzaj¹cy czy podana liczba jest parzysta czy nieparzysta */
void task10()
{

}

/*
11. Program sprawdzaj¹cy czy podana liczba jest dodatnia, ujemna czy równa zero */
void task11()
{

}

/*
12. Program sprawdzaj¹cy czy podany rok jest rokiem przestêpnym
13. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
14. Program sprawdzaj¹cy czy podane has³o jest poprawne (np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
15.Program sprawdzaj¹cy czy podana data jest poprawna (np. sprawdzaj¹c, czy dzieñ jest z zakresu od 1 do 31, miesi¹c od 1 do 12 itd.)
16. Program wyœwietlaj¹cy odpowiedni komunikat w zale¿noœci od podanej temperatury (np. "ciep³o" dla temperatury powy¿ej 20 stopni Celsjusza, "ch³odno" dla temperatury poni¿ej 10 stopni Celsjusza itd.)
Pêtle:
17. Program sprawdzaj¹cy czy podana liczba jest liczb¹ pierwsz¹ (czyli tak¹, która dzieli siê tylko przez 1 i przez siebie sam¹)
18. Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
19. Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
20. Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹ (czyli tak¹, której suma dzielników (z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
Pêtla for:
21. Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
22. Program obliczaj¹cy sumê liczb od 1 do 100
23. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
24. Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
25. Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.).
26. Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
27. Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
28. Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
29. Program wyœwietlaj¹cy na ekranie kolejne potêgi 2 od 2^0 do 2^10 (np. 2^0, 2^1, 2^2 itd.)
30. Program wyœwietlaj¹cy na ekranie kolejne elementy ci¹gu a_n = a_{n-1} + a_{n-2}, gdzie a_0=1, a_1=1 (ci¹g ten zaczyna siê od 1, 1, 2, 3, 5, 8, 13 itd.).
Pêtla do-while:
31. Program pytaj¹cy u¿ytkownika o has³o i wyœwietlaj¹cy komunikat "has³o poprawne" lub "has³o niepoprawne" dopóki u¿ytkownik nie poda poprawnego has³a (np. "abc123").
32. Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
Trudniejsze zadania:
33. Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).
34. Program obliczaj¹cy najwiêkszy wspólny dzielnik (NWD) dwóch liczb
35. Program obliczaj¹cy najmniejsz¹ wspóln¹ wielokrotnoœæ (NWW) dwóch liczb.
36. Program wyci¹gaj¹cy informacje z numeru PESEL
37. Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
Dla zaawansowanych:
38. Program implementuj¹cy algorytm generowania liczb pseudolosowych (np. algorytm Mersenne Twister).
39. Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
40. Algorytm szyfrowania Morse'a - algorytm szyfruj¹cy, w którym ka¿da litera w tekœcie jest zamieniana na ci¹g znaków "+" i "-", zgodny z kodem Morse'a.
41. Napisz program, który pobiera od u¿ytkownika dwie macierze kwadratowe o takim samym rozmiarze i wyœwietla ich iloczyn.
42. Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
43. Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
44. Napisz grê kó³ko i krzy¿yk.
*/

int main()
{
    setlocale(LC_CTYPE, "polish");
    //float pi = 2 * M_PI * promieñ;
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    //task14();
    //task15();
    //task16();
    //task17();
    //task18();
    //task19();
    //task20();
    //task21();
    //task22();
    //task23();
    //task24();
    //task25();
    //task26();
    //task27();
    //task28();
    //task29();
    //task30();
}