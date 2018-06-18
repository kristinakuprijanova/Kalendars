#include <iostream>
#include <stdlib.h>
#include "../header/kalendr.h"
#include "../header/atrastdat.h"
#include "../header/piezimes.h"

using namespace std;

void printMenu(){
    int izvele;
    system ("cls");
    cout << "Ievadiet ciparu lai izveletos              " << endl;
    cout << "-------------------------------------------" << endl;
    cout << " 1. Apskatities kalendaru                  " << endl;
    cout << " 2. Piezimes                               " << endl;
    cout << " 3. Atrast datumu                          " << endl;
    cout << " Kaut ko citu lai izzietu no programmas    " << endl;
    cout << "-------------------------------------------" << endl;

    cin >> izvele;

    switch (izvele){
    case 1: kalendr(); break;
    case 2: Piezimes(); break;
    case 3: atrastdat(); break;

    }
}
