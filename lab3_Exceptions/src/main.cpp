#include <iostream>
#include "lab4_zuza/matrix.hpp"
//#include "sqlite3.h"
//using namespace std;

int main()
{
    

    std::cout<<"\tProgram o macierzach "<<std::endl<<
    "1. Przy korzystaniu z funkcji set i get nalezy podac numer elemntu tak jakby pierwszy element to byl 1"<<std::endl<<std::endl;


    int value_x, value_y;
    std::cin >> value_x; // >> value_y;
    Matrix test(value_x);
    Matrix m1(3,4);
    Matrix m2(3,4);
    Matrix m3(3,4);
    Matrix m4(4,3);
        m1.set (1,1,34.5);
        m1.set (1,2,34.5);
        m1.set (2,3,34.5);

    
    std::cout<<"Matrix m2 plus m1 is equal:\n";
    m2.add (m1);
    m2.print();

    std::cout<<"Matrix m4 minus m2 is equal:\n";
    m3.substract (m2);
    m3.print();

        //Ustawienie wartośći dla m4, na pózniejsze mnożenie.
        m4.set(1,2,20.5);
        m4.set(2,2,0.33);
        m4.set(1,1,4.5);
        m4.set(3,3,1.5);

    std::cout<<"Matrix m2, Matrix m4\n";
    m2.print();
    m4.print();

    std::cout<<"Matrix m2 times m4 is equal:\n";
    Matrix * pnt = (m2.multiply(m4));
    pnt->print();
    
    
    std::cout<<std::endl<<"m1.get(1,1): "<<(m1.get(1,1))<<"\n";

    //Korzystanie z plików:

    //std::string path = "C:\\Users\\zuza2\\Desktop\\Plik.txt";
    //std::string nazwa_pliku = "Plik.txt";

    //m3.store(nazwa_pliku, path);
    //Matrix m5(path);
    //m5.print();
    //œcie¿ka do wklejenia przez u¿ytkownika

    system("PAUSE");
}
