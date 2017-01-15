#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

void akt1_roland()
{
    cout<<"dupacycki";
    getchar();
    exit(0);
}

void walka_prolog_roland()
{
    int cios_rolanda, cios_stwora;
    int hp_roland=500;
    int hp_stwor=100;
    int pd=0;
    cout<<"GRA: TERAZ WPROWADZIMY CIE W SYSTEM WALKI *enter*"<<endl;
    getchar();
    cout<<"GRA: OBRAZENIA KTORE ZADASZ PRZECIWNIKOWI TO OBRAZENIA LOSOWANE Z PULI TWOICH OBRAZEN *enter*"<<endl;
    getchar();
    system("cls");
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: "<<pd<<"/100             "<<endl;
    cout<<"            *HP: "<<hp_roland<<"              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"               10-20               "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"           LESNY STWOR            "<<endl;
    cout<<"              POTWOR              "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            *HP: "<<hp_stwor<<"              "<<endl;
    cout<<"           *ATAK: 5-10            "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"GRA: W KAZDEJ WALCE TABLICE STATYSTYK TWOICH I TWOJEGO PRZECIWNIKA BEDA POKAZANE *enter*"<<endl;
    getchar();
    cout<<"WCISNIJ ENTER ZEBY ZACZAC WALKE"<<endl;
    getchar();
    system("cls");

   while (hp_roland>0 && hp_stwor>0)
    {
        int blok;
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: "<<pd<<"/100             "<<endl;
    cout<<"            *HP: "<<hp_roland<<"              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"               10-20               "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"           LESNY STWOR            "<<endl;
    cout<<"              POTWOR              "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            *HP: "<<hp_stwor<<"              "<<endl;
    cout<<"           *ATAK: 5-10            "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"ZADAJ CIOS! *enter*"<<endl;
    getchar();
    srand(time(NULL));
    cios_rolanda = rand()%10+11;
    cout<<"ZADAJESZ "<<cios_rolanda<<" OBRAZEN! *enter*"<<endl;
    hp_stwor = hp_stwor - cios_rolanda;
    getchar();
    system("cls");
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: "<<pd<<"/100             "<<endl;
    cout<<"            *HP: "<<hp_roland<<"              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"               10-20               "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"           LESNY STWOR            "<<endl;
    cout<<"              POTWOR              "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            *HP: "<<hp_stwor<<"              "<<endl;
    cout<<"           *ATAK: 5-10            "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;

    srand(time(NULL));
    blok = rand()%20;
    switch(blok)
    {
      case 0:
          {
    srand(time(NULL));
    cios_rolanda = rand()%10+11;
    cout<<"BLOKUJESZ CIOS STWORA I ZADAJESZ "<<cios_rolanda<<" OBRAZEN! *enter*"<<endl;
    hp_stwor = hp_stwor - cios_rolanda;
    getchar();
    system("cls");
          } break;
      default:
          {
    srand(time(NULL));
    cios_stwora = rand()%5+6;
    cout<<"LESNY STWOR ZADAJE "<<cios_stwora<<" OBRAZEN! *enter*"<<endl;
    hp_roland = hp_roland - cios_stwora;
    getchar();
    system("cls");
          } break;
    }
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: "<<pd<<"/100             "<<endl;
    cout<<"            *HP: "<<hp_roland<<"              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"              10-20               "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"           LESNY STWOR            "<<endl;
    cout<<"              POTWOR              "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            *HP: "<<hp_stwor<<"              "<<endl;
    cout<<"           *ATAK: 5-10            "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    system("cls");


    }
    pd = pd + 15;
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: "<<pd<<"/100             "<<endl;
    cout<<"            *HP: "<<hp_roland<<"              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"               10-20               "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"           LESNY STWOR            "<<endl;
    cout<<"              POTWOR              "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            *HP: "<<hp_stwor<<"              "<<endl;
    cout<<"           *ATAK: 5-10            "<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"GRATULACJE WYGRALES! ZDOBYWASZ 15PD! *enter*"<<endl;
  getchar();
    cout<<"PROLOG ZAKONCZONY. WCISNIJ ENTER ABY PRZEJSC DO PIERWSZEGO AKTU";
    getchar();
    system("cls");
    akt1_roland();
}

void prolog_roland()
{
     for(;;)
    {
    string yn;
    cout <<"AKT 0: PROLOG"<<endl;
    cout <<"CZY CHCESZ POMINAC WSTEP? Y/N"<<endl;
    yn=getch();
    transform(yn.begin(),yn.end(), yn.begin(),::toupper);
    if (yn=="Y")
    {
        cout<<"POMINALES WSTEP *enter*";
        getchar();
        system("cls");
        walka_prolog_roland();
    }
    else if (yn=="N")
    {

    cout <<"OLGIERD: ROLAND! *enter*"<< endl;
getchar();
    cout <<"OLGIERD: ROOOLAND!! *enter*"<<endl;
getchar();
    cout<<"OLGIERD: WSTAWAJ ROLAND! *enter*"<<endl;
getchar();
    cout<<"ROLAND: YYY... CO JEST? *enter*"<<endl;
getchar();
    cout<<"ROLAND: CO SIE STALO? *enter*"<<endl;
getchar();
    cout<<"OLGIERD: KURWA ROLAND JESTESMY W SRODKU LASU! *enter*"<<endl;
getchar();
    cout<<"OLGIERD: WALCZYLISMY Z LESNYM STWOREM *enter*"<<endl;
getchar();
    cout<<"OLGIERD: DOSTALES STRZALA NA MORDE I ZASNALES *enter*"<<endl;
getchar();
    cout<<"ROLAND: COOOO?!? *enter*"<<endl;
getchar();
    cout<<"ROLAND: A DOBRA! TERAZ PAMIETAM. SORY STARY NIE TRZYMALEM GARDY *enter*"<<endl;
getchar();
    cout<<"ROLAND: NIC CI NIE JEST? CO Z TYM KURWISZONEM? *enter*"<<endl;
getchar();
    cout<<"OLGIERD: ZAJEBALEM GO A CO MIALEM Z NIM ZROBIC? DAC MU NAGRODE ZA TO ZE ROZJEBAL CIE JEDNYM STRZALEM? XD *enter*"<<endl;
getchar();
    cout<<"ROLAND: W CHUJ SMIESZNE STARY... *enter*"<<endl;
getchar();
    cout<<"OLGIERD: WEZ SIE W GARSC STARY... *enter*"<<endl;
getchar();
    cout<<"OLGIERD: ZALOZE SIE ZE CALY CZAS MYSLISZ CO POWIESZ ZONIE JAK SIE DOWIE O TEJ DZIWCE W KARCZMIE *enter*"<<endl;
getchar();
    cout<<"ROLAND: ZAMKNIJ JUZ MORDE *enter*"<<endl;
getchar();
    cout<<"OLGIERD: DOBRA DOBRA... PRZEPRASZAM PANIE OBRAZALSKI *enter*"<<endl;
getchar();
    cout<<"ROLAND: DOBRA CHUJ Z TYM *enter*"<<endl;
getchar();
    cout<<"ROLAND: LEPIEJ POWIEDZ MI CO TERAZ Z TYM ZROBIMY? *enter*"<<endl;
getchar();
    cout<<"OLGIERD: Z CZYM? *enter*"<<endl;
getchar();
    cout<<"ROLAND: Z TYM ZE SIEDZIMY W SRODKU JEBANEGO LASU I NAWET NIE WIEMY KTOREDY MAMY WROCIC DO DOMU? *enter*"<<endl;
getchar();
    cout<<"ROLAND: MYSLE ZE Z TYM POWINNISMY COS ZROBIC *enter*"<<endl;
getchar();
    cout<<"ROLAND: CHYBA ZE MASZ COS WAZNEJSZEGO DO ZROBIENIA W TYM MOMENCIE? *enter*"<<endl;
getchar();
    cout<<"OLGIERD: NO W SUMIE MUSZE SIE ODLAC XD *enter*"<<endl;
getchar();
    cout<<"ROLAND: AHHH... *enter*"<<endl;
getchar();
    cout<<"ROLAND: ZASTANAWIAM SIE CZY TY KIEDYS DOROSNIESZ... *enter*"<<endl;
getchar();
    cout<<"OLGIERD: KIEDYS DOROSNE, ALE NAJPIERW... IDE SZCZAC XD *enter*"<<endl;
getchar();
    cout<<"*OLGIERD WSTAJE* *enter*"<<endl;
getchar();
    cout<<"*IDZIE ZA DRZEWO* *enter*"<<endl;
getchar();
    cout<<"*ODGLOS SIKANIA* *enter*"<<endl;
getchar();
    cout<<"ROLAND: EJ STARY... JEST JEDNA RZECZ KTORA MNIE ZASTANAWIA... *enter*"<<endl;
getchar();
    cout<<"*ODGLOS SIKANIA USTAL* *enter*"<<endl;
getchar();
    cout<<"ROLAND: EJ STARY... *enter*"<<endl;
getchar();
    cout<<"ROLAND: SKONCZ Z TYMI ZARTAMI JEBANY SMIESZKU *enter*"<<endl;
getchar();
    cout<<"*ROLAND WSTAJE* *enter*"<<endl;
getchar();
    cout<<"*IDZIE ZA DRZEWO ZA KTORYM SIKAL OLGIERD* *enter*"<<endl;
getchar();
    cout<<"ROLAND: DOBRA ZNALAZLEM CIE KONIEC ZABA... *enter*"<<endl;
getchar();
    cout<<"ROLAND: JASNY CHUJ NO NIE WIERZE *enter*"<<endl;
getchar();
    cout<<"*ROLAND ZNAJDUJE KARTECZKE PRZYBITA DO PNIA DRZEWA* *enter*"<<endl;
getchar();
    cout<<"KARTECZKA: PORWALEM TWOJEGO PRZYJACIELA HAHAHA!!! *enter*"<<endl;
getchar();
    cout<<"KARTECZKA: Z POWAZANIEM KROL CIEMNOSCI *enter*"<<endl;
getchar();
    cout<<"ROLAND: NO TO SA KURWA JAKIES ZARTY *enter*"<<endl;
getchar();
    cout<<"ROLAND: WIDZE GO!!!! BIEGNIE Z OLGIERDEM NA PLECACH!!! *enter*"<<endl;
getchar();
    cout<<"*ROLAND BIEGNIE ZA KROLEM CIEMNOSCI* *enter*"<<endl;
getchar();
    cout<<"*NA JEGO DRODZE STAJE LESNY STWOR* *enter*"<<endl;
getchar();
    cout<<"ROLAND: WYPIERDALAJ KURWA! AKURAT TERAZ MUSIALES SIE POJAWIC Z NIKAD?!?!? *enter*"<<endl;
getchar();
    cout<<"LESNY STWOR: AKRHRRRRRRR *enter*"<<endl;
getchar();
    cout<<"ROLAND: CO KURWA? *enter*"<<endl;
getchar();
    cout<<"LESNY STWOR: CHUJ CI W DUPE LAMUSIE *enter*"<<endl;
getchar();
    cout<<"LESNY STWOR: WSPOLPRACUJE Z KROLEM CIEMNOSCI I MAM CIE ZATRZYMAC!! *enter*"<<endl;
getchar();
    cout<<"ROLAND: TO NIE MOGLES TAK KURWA OD RAZU? *enter*"<<endl;
getchar();
    cout<<"LESNY STWOR: NIE XDDD *enter*"<<endl;
    getchar();
    cout<<"ROLAND: DOBRA ZARA CIE ROZJEBE I LECE PO OLIQA *enter*"<<endl;
getchar();
    system("cls");
    walka_prolog_roland();
    }
    else
    {
        cout<<"NIE MA TAKIEGO WYBORU. WCISNIJ ENTER";
        getchar();
    }
    }
}

void roland()
{
    string zapis1;
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"A WIEC POSTANOWILES GRAC ROLANDEM TA?"<<endl; Sleep(2000); system("cls");
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"OTO TWOJE STATYSTYKI BEDZIESZ MOGL JE ZWIEKSZAC GDY AWANSUJESZ NA KOLEJNY POZIOM"<<endl; Sleep(500);
    cout<<"__________________________________"<<endl; Sleep(500);
    cout<<"              ROLAND              "<<endl; Sleep(500);
    cout<<"             WOJOWNIK             "<<endl; Sleep(500);
    cout<<"             POZIOM 1             "<<endl; Sleep(500);
    cout<<"            PD: 0/100             "<<endl; Sleep(500);
    cout<<"            *HP: 500              "<<endl; Sleep(500);
    cout<<"          *ATAK: 10-20            "<<endl; Sleep(500);
    cout<<"       SZANSA NA BLOK - 20%       "<<endl; Sleep(500);
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl; Sleep(500);
    cout<<"              10-20               "<<endl; Sleep(1000);
    cout<<"STATYSTYKI KTORE MOZESZ PODNIESC SA ZAZNACZONE GWIAZDKA *"<<endl;
    cout<<"STATYSTYKI BEDA WYSWIETLANE CALY CZAS NA EKRANIE"<<endl;
    cout<<"CZY CHCESZ ZAPISAC TERAZ STAN GRY? Y/N";
    zapis1=getch();
    transform(zapis1.begin(),zapis1.end(), zapis1.begin(),::toupper);
    if (zapis1=="Y")
    {
        /* TUTAJ JEST DO STWORZENIA ZAPIS STANU GRY */

    system("cls");
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"OTO TWOJE STATYSTYKI BEDZIESZ MOGL JE ZWIEKSZAC GDY AWANSUJESZ NA KOLEJNY POZIOM"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: 0/100             "<<endl;
    cout<<"            *HP: 500              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"              10-20               "<<endl;
    cout<<"STATYSTYKI KTORE MOZESZ PODNIESC SA ZAZNACZONE GWIAZDKA *"<<endl;
    cout<<"STATYSTYKI BEDA WYSWIETLANE CALY CZAS NA EKRANIE"<<endl;
    cout<<"STAN GRY ZOSTAL ZAPISANY"<<endl;
    cout<<"WCISNIJ ENTER ABY ZACZAC GRE";
    getchar();
    system("cls");
    prolog_roland();
    }
    else if (zapis1=="N")
    {
    system("cls");
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"OTO TWOJE STATYSTYKI BEDZIESZ MOGL JE ZWIEKSZAC GDY AWANSUJESZ NA KOLEJNY POZIOM"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"              ROLAND              "<<endl;
    cout<<"             WOJOWNIK             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: 0/100             "<<endl;
    cout<<"            *HP: 500              "<<endl;
    cout<<"          *ATAK: 10-20            "<<endl;
    cout<<"       SZANSA NA BLOK - 20%       "<<endl;
    cout<<"*OBRAZENIA ZADAWANE PODCZAS BLOKU "<<endl;
    cout<<"              10-20               "<<endl;
    cout<<"STATYSTYKI KTORE MOZESZ PODNIESC SA ZAZNACZONE GWIAZDKA *"<<endl;
    cout<<"STATYSTYKI BEDA WYSWIETLANE CALY CZAS NA EKRANIE"<<endl;
    cout<<"STAN GRY NIE ZOSTAL ZAPISANY"<<endl;
    cout<<"WCISNIJ ENTER ABY ZACZAC GRE";
    getchar();
    system("cls");
    prolog_roland();
    }
    else
    {
        cout<<"NIE MA TAKIEGO WYBORU"<<endl;
        getchar();
        system("cls");
        roland();
    }


}

void prolog_anna()
{
    cout<<"elo smieciarzu kutasiarzu";
}


void anna()
{
    string zapis1;
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"A WIEC POSTANOWILES GRAC ANNA TA?"<<endl; Sleep(2000); system("cls");
    cout<<"OTO TWOJE STATYSTYKI BEDZIESZ MOGL JE ZWIEKSZAC GDY AWANSUJESZ NA KOLEJNY POZIOM"<<endl; Sleep(500);
    cout<<"__________________________________"<<endl; Sleep(500);
    cout<<"               ANNA               "<<endl; Sleep(500);
    cout<<"             KAPLANKA             "<<endl; Sleep(500);
    cout<<"             POZIOM 1             "<<endl; Sleep(500);
    cout<<"            PD: 0/100             "<<endl; Sleep(500);
    cout<<"            *HP: 300              "<<endl; Sleep(500);
    cout<<"          *ATAK: 30-60            "<<endl; Sleep(500);
    cout<<"    SZANSA NA ULECZENIE - 20%     "<<endl; Sleep(500);
    cout<<"        *LECZONE HP: 20-40        "<<endl; Sleep(1000);
    cout<<"STATYSTYKI KTORE MOZESZ PODNIESC SA ZAZNACZONE GWIAZDKA *"<<endl;
    cout<<"CZY CHCESZ ZAPISAC TERAZ STAN GRY? Y/N";
    zapis1=getch();
    transform(zapis1.begin(),zapis1.end(), zapis1.begin(),::toupper);
     if (zapis1=="Y")
    {
        /* TUTAJ JEST DO STWORZENIA ZAPIS STANU GRY */

    system("cls");
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"OTO TWOJE STATYSTYKI BEDZIESZ MOGL JE ZWIEKSZAC GDY AWANSUJESZ NA KOLEJNY POZIOM"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"               ANNA               "<<endl;
    cout<<"             KAPLANKA             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: 0/100             "<<endl;
    cout<<"            *HP: 300              "<<endl;
    cout<<"          *ATAK: 30-60            "<<endl;
    cout<<"    SZANSA NA ULECZENIE - 20%     "<<endl;
    cout<<"        *LECZONE HP: 20-40        "<<endl;
    cout<<"STATYSTYKI KTORE MOZESZ PODNIESC SA ZAZNACZONE GWIAZDKA *"<<endl;
    cout<<"STATYSTYKI BEDA WYSWIETLANE CALY CZAS NA EKRANIE"<<endl;
    cout<<"STAN GRY ZOSTAL ZAPISANY"<<endl;
    cout<<"WCISNIJ ENTER ABY ZACZAC GRE";
    getchar();
    system("cls");
    prolog_anna();
    }
    else if (zapis1=="N")
    {
    system("cls");
    cout<<"AKT 0: POKAZ POSTACI"<<endl;
    cout<<"OTO TWOJE STATYSTYKI BEDZIESZ MOGL JE ZWIEKSZAC GDY AWANSUJESZ NA KOLEJNY POZIOM"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"               ANNA               "<<endl;
    cout<<"             KAPLANKA             "<<endl;
    cout<<"             POZIOM 1             "<<endl;
    cout<<"            PD: 0/100             "<<endl;
    cout<<"            *HP: 300              "<<endl;
    cout<<"          *ATAK: 30-60            "<<endl;
    cout<<"    SZANSA NA ULECZENIE - 20%     "<<endl;
    cout<<"        *LECZONE HP: 20-40        "<<endl;
    cout<<"STATYSTYKI KTORE MOZESZ PODNIESC SA ZAZNACZONE GWIAZDKA *"<<endl;
    cout<<"STATYSTYKI BEDA WYSWIETLANE CALY CZAS NA EKRANIE"<<endl;
    cout<<"STAN GRY NIE ZOSTAL ZAPISANY"<<endl;
    cout<<"WCISNIJ ENTER ABY ZACZAC GRE";
    getchar();
    system("cls");
    prolog_anna();
    }
    else
    {
        cout<<"NIE MA TAKIEGO WYBORU"<<endl;
        getchar();
        system("cls");
        anna();
    }
}

void wybor_postaci()
{
    char postac;
 cout<<"NAJPIERW WYBIERZ W KOGO CHCESZ SIE WCIELIC:"<<endl;
 cout<<"1.ANNA - KAPLANKA, DUZE OBRAZENIA FIZYCZNE, MALO ZDROWIA, ZDOLNOSC LECZENIA"<<endl;
 cout<<"2.ROLAND - WOJOWNIK, MNIEJSZE OBRAZENIA FIZYCZNE, DUZO ZDROWIA, UMIEJETNOSC BLOKU CIOSU"<<endl;
    postac=getch();

    switch(postac)
    {

        case '1':
            {
            string yn;
            cout<<"CZY JESTES TEGO PEWNY? Y/N"<<endl;
            yn=getch();
            transform(yn.begin(),yn.end(), yn.begin(),::toupper);
            if (yn=="Y") {cout<<"A WIEC ZACZYNAJMY"; Sleep(1000); system("cls"); anna();}
            else if (yn=="N") {system("cls"); wybor_postaci();}
            else {cout<<"NIE MA TAKIEGO WYBORU"<<endl; getchar(); system("cls"); wybor_postaci();}
            } break;
        case '2':
             {
            string yn;
            cout<<"CZY JESTES TEGO PEWNY? Y/N"<<endl;
            yn=getch();
            transform(yn.begin(),yn.end(), yn.begin(),::toupper);
            if (yn=="Y") {cout<<"A WIEC ZACZYNAJMY"; Sleep(1000); system("cls"); roland();}
            else if (yn=="N") {system("cls"); wybor_postaci();}
            else {cout<<"NIE MA TAKIEGO WYBORU"<<endl; getchar(); system("cls"); wybor_postaci();}
            } break;
            default: {cout<<"NIE MA TAKIEGO WYBORU"<<endl; getchar(); system("cls"); wybor_postaci();} break;
    }
}


int main()
{
char wybor;

  for(;;)
{



    cout << "SUPER RPG v0.1 alfa" << endl;
    cout << "1. NOWA GRA"<<endl;
    cout << "2. WCZYTAJ GRE"<<endl;
    cout << "3. O GRZE"<<endl;
    cout << "4. AUTORZY"<<endl;
    cout << "5. WYJSCIE"<<endl;

    wybor=getch();

    switch(wybor)
    {
       case '1': system("cls"); wybor_postaci(); break;
       case '2':
       case '3':
        {
            system("cls");
            cout<<"JEST TO TEKSTOWA GRA RPG W KTOREJ WCIELASZ SIE W JEDNEGO Z DWOCH BOCHATEROW, ANNE BADZ ROLANDA"<<endl;
            cout<<"MASZ DO POKONANIA WIELE PRZECIWNOSCI LOSU, TWOIM ZADANIEM JEST URATOWAC SWOJEGO DAWNEGO PRZYJACIELA OLGIERDA"<<endl;
            cout<<"ZA KAZDEGO POKONANEGO PRZECIWNIKA DOSTAJESZ PUNKTY DOSWIADCZENIA. GDY ZDOBEDZIESZ ODPOWIEDNIA ILOSC AWANSUJESZ NA KOLEJNY POZIOM"<<endl;
            cout<<"ZA KAZDY ZDOBYTY POZIOM POSTACI DOSTAJESZ 3 PUNKTY ULEPSZEN, KTORE BEDZIESZ MOGL WYKOZYSTAC NA ULEPSZENIE POSTACI"<<endl;
            cout<<"ZAPISU STANU GRY BEDZIESZ MOGL DOKONYWAC W WYBRANYCH PRZEZ GRE MOMENTACH WIEC POSTARAJ SIE NIE ZGINAC PRZED KOLEJNYM PUNKTEM ZAPISU"<<endl;
            cout<<"MYSLE ZE POWIEDZIALEM CI JUZ WSZYSTKO, A TERAZ WCISNIJ ENTER ABY POWROCIC DO MENU";
            getchar();
            system("cls");
        }
        break;
       case '4': system("cls"); cout<<"AUTOREM TEJ SWIETNEJ GRY JEST MACIEJ GRZEGRZOLKA"<<endl;  cout<<"WCISNIJ ENTER ABY POWROCIC DO MENU"; getchar(); system("cls"); break;
       case '5': exit(0); break;

    }
}
    return 0;

}
