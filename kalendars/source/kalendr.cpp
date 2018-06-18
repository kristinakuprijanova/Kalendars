#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "../header/kalendr.h"
#include "../header/menu.h"
using namespace std;

void kal :: datumi (){

    char *mont[] = {"Janvaris", "Februaris", "Marts", "Aprils", "Majs", "Junijs", "Julijs", "Augusts","Septembris","Oktobris", "Novembris", "Decembris"};
    int DayInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};



            system("cls");

                    cout << "_____________________________________" << endl;
                    cout << endl;
                    cout << "       KALENDARS UZ 2018 GADU!       " << endl;

            for ( month=0; month<12; month++ ) {

                    cout << endl;
                    cout <<"_____________________________________"<< endl;
                    cout << endl;
                    cout <<"                 "<<mont[month]<< endl;
                    cout << "Pirm  Otr  Tres Cet Piek  Sest Svet " << endl;

    string d[] = {"P", "C", "C", "Sv", "O", "Pk", "Sv", "T", "Se", "P", "C", "Se" }; //Katrasenesis sakas no [] dienas
    string masivs[] = {"P", "O", "T", "C" , "Pk", "Se" , "Sv"};

    do{
            j=0;
        do{

            if ( d[PirmasDienas] != masivs[j] ){
             cout << "     ";
            j++;

            }                                               //Izvade lai katrs menesis nebutu no pirmdienas

        } while( d[PirmasDienas] != masivs[j] );
            PirmasDienas++;
        }while (PirmasDienas==13);
            n=j;

        for (int i = 0; i < DayInMonth[param]; i++){            // Dienas izvade

            if ( i<10 ){cout << "  ";
           } if ( i>9 ) cout <<" ";
           if (n != 7){
                cout << i+1 <<"  ";
            }else{
                cout << "" <<endl;
                cout << i+1;
                n = 0;
            cout <<"   ";
            }
            n++;


        }param = param+1;
        n=j;
                      // lai parritu uz citu menesi
    }
}

int kalendr() {
	kal c;
    c.datumi();
    int izvele;
    cout << endl;
    cout << " lai izzietu uz galveno menu spiediet 1. " << endl;
    cin >>izvele;
    if (izvele==1) {printMenu();
    } kalendr();
}
