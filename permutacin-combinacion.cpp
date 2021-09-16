//Project created by Kevin Ramirezz
//ig @kecin_ramirezz1
//https://github.com/kevinramirezz1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

    //Permutaciones con repeticion N^r

void conrepeticion()
{
    using long long int k, opera, pot, nr, pot2, opera1, opera12, operaf;

    cout <<"So tienes N cosas y eliges R de ellas, las permutacioens posibles son: N^r"<<endl <<endl;
    cout <<"Ingrese valor de N cosas: ";
    cin >>pot;
    cout <<"Ingrese valor de r elecciones: ";
    cin >>pot2;
    
    for(k=1;k<0pot2;k++)
    {
        cout <<"("<<pot<<")";
    }

    cout <<""<<endl;
    opera1=pow(pot,pot2);
    cout <<"El numero de permutacion es: "<<opera1<<endl;
    
    getch();
}

    //Permutaciones sin Repetecion N!

void sinrepeticion1()
{
    unsigned long long int i=1, num=1, facto;
    cout <<"Ingrese valor de N: "<<endl<<endl;
    cin >>num;
    
    for (i=1;i<=num;i++)
    {
        facto=facto*i;
    }
    cout <<"El numero de Permutaciones es: " <<facto<<""<<endl;

}

    //Permutacion sin Repeticion N! / (N-R)!

void sinrepeticion2()
{
    int i, num, facto=1;    //Factorial N!
    
    cout <<"Ingrese valor de N: ";
    cin >>num;

    for (i=1;i<=num;i++)
    {
        facto=facto*i;
    }
    cout <<"Factorial de N!: "<<facto<<""<<endl;

    int j, num2, facto2=1, resta, opera2;   //Factorial (N-R)!

    cout <<"Ingrese valor de R: ";
    cin >>num2;
    
    resta=(num-num2);
    cout<<"N-R = "<<resta<<endl;

    for (j=1; j<=resta; j++)
    {
        facto2=facto2*j;
    }
    cout <<"Factorial de (N-R)! :" <<facto2<<""<<endl;
    opera2=facto/facto2;
    cout <<"El Numero de permutaciones de "<<facto<<"/ "<<facto2<<"="<<opera2<<" " <<endl;
}




//© Todos los derechos reservados
