#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include "../header/piezimes.h"
#include "../header/menu.h"

using namespace std;


void Piezimes(){
    int izvele;
    system ("cls");
    cout << " Ievadiet ciparu lai izveletos" << endl;
    cout << "_________________________" << endl;
    cout << "1 - Apskatit piezimes    " << endl;
    cout << "2 - Pievienot piezimes   " << endl;
    cout << "3 - Uz galveno menu      " << endl;
    cout << "_________________________" << endl;

    cin>> izvele;

    switch (izvele){
    case 1: Apskp(); break;
    case 2: Pievp();break;
    case 3: printMenu(); break;
    }
}

void Pievp() {                      // piezimes ierakstisana faila
    system ("cls");
    piezim p;
    fstream PiezimesFile;
    PiezimesFile.open ("Piezimes.txt", fstream::in | fstream::out | fstream::app);
    cout << " Ievadiet dienu un menesi izmantojot / (piemeram 1/05) ."<< endl;
    cin >> p.dat;
    cout << "Ievadiet notikumu (bez atstarpem): " << endl;
    cin >> p.notikums;
    PiezimesFile << " ";
    PiezimesFile << p.dat << "  " << p.notikums << endl;
    PiezimesFile.close();
    Piezimes();
    }


    void Apskp(){                       //lai ievaditos pizimes paraditu uz ekrana
    system ("cls");
    string d,n;
    ifstream PiezimesFile("Piezimes.txt");
    do {
    PiezimesFile >> d;
    PiezimesFile >> n;
    cout << d <<" " << n << endl;
    } while (!PiezimesFile.eof());
    cout <<"Izziet uz menu."<< endl;
    PiezimesFile.close ();
    system ("pause");
    printMenu();
}

