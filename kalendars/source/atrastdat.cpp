#include <iostream>
#include <string>
#include <stdlib.h>
#include "../header/atrastdat.h"
#include "../header/menu.h"

using namespace std;

void Date :: dat(){
    cout << "Jus varat uzzinat kuras nedelas diena bija vai bus ievadita. " << endl;
    cout << "Ievadiet dienu: " << endl;
    cin >> D;
    cout << "Ievadiet menesi: " << endl;
    cin >> M;
    while ( M>13 ) {
        cout << "Ievadiet menesi: " << endl;
        cin>> M;
    }
    do{
        cout << "Ievadiet gadu: (no 1918)" << endl;
        cin >> Y;
    } while ( Y<1918 );


    a = ( 14 - M ) / 12;
    y = Y - a;                                                              //parbeude kura diena bus
    m = M + 12 * a - 2;
    R = 7000 + ( D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12 );
    r = R % 7;

    switch ( r ){

        case 1: cout << "Pirmdiena. " << endl; break;
        case 2: cout << "Otrdiena. " << endl; break;                    //izvade
        case 3: cout << "Tresdiena. " << endl; break;
        case 4: cout << "Ceturtdiena. " << endl; break;
        case 5: cout << "Piektdiena. " << endl; break;
        case 6: cout << "Sestdiena. " << endl; break;
        case 0: cout << "Svetdiena. " << endl; break;
    }
}
int atrastdat (){
    system ("cls");
    int atkartot;
    Date d;
    d.dat();

    cout << "Vai velies atkartot? 0-Ja, cita uz menu." << endl;
    cin >> atkartot;
    if  ( atkartot==0 ){ atrastdat();
    } printMenu();
}


