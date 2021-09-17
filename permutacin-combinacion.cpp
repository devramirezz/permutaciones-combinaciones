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

//Permutaciones sin Repeticion N! / N1!*N2!*N3!..

void sinrepeticion3()
{
    float i, j, h, factorial=1, numero, factorial12=1, numero2, numero3, factorial13=1, numero4, factorial14=1, operacion;
    
    cout <<"Ingrese valor de N:";
    cin >>numero;
    cout <<"Cuantos valores son para N en el denominador? Ejemplo: N=9! /N=(2! X 3! X 4!) N denominador: tiene 3 valores (2,3,4) // = ";
    cin >>numero3;

    for (i=1;i<=numero;i++) // Bucle factorial de N!* 
    {
        factorial=factorial*i;
    }
    for (j=1;j<=numero3;j++) // Bucle consulta de valores x denominador N!*
    {
        cout <<"Ingrese valores de Denominador N";
        cin >>numero4;

        for (h=1;h<=numero4;h++) // Bucle general de factorial valor R multiplicado con siguiente valor de R*
        {
            factorial14=factorial14*h;
        }
    }
    cout <<"El numero de permutaciones es: "<<factorial/factorial14<<" "<<endl;

    return;
}

//Combinaciones con Repeticion simple (N+R-1)! / R! X (N-1)!

void combiconrepetsimple()
{
    int i=1, num=1, num2=2, facto=1, opera1;

    cout <<"Ingrese valor de N: ";
    cin >>num;
    cout <<"Ingrese valor de R: ";
    cin >>num2;
    opera1=(num+num2-1);

    for (i=1;i<=opera1;i++) // Factorial de (N+R-1)!
    {
        facto=facto*i;
    }
    cout <<"Factorial de (N+R-1)! es: " <<facto<<endl;

    int j=1, facto2=1;

    for (j=1; j<=num2;j++) // Factorial de R!
    {
        facto2=facto2*j;
    }
    cout <<"Factorial de R es: " <<facto2<<endl;

    int h=1, opera, facto3=1;
    
    opera=num-1;
    cout <<"N-R = "<<num<<" -1";
    cout <<" = " <<opera<<endl;

    for (h=1;h<=opera;h++) // Facotiral de (N-1)!
    {
        facto3=facto3*h;
    }
    cout <<"Factorial de N-1 es: "<<facto3<<endl;

    int k=1, operafinal; // Multiplicacion de R! x (N-1)!

    operafinal=facto2*facto3;
    cout<<"R! x (N-1)! = "<<facto2<<" X "<<facto3;
    cout<<"="<<operafinal<<endl;

    //Divicion de (N+R-1)! / R! X (N-1)!
    cout <<"Resultado de (N+R-1)! / R! X (N-1)!: "<<facto/operafinal<<endl;
    
}

//Combinaciones con Repeticion --> (N1 XN2) <-- (N+R-1)! / R! X (N-1)!

void conbiconrepetn1Xn2()
{
    int n1xn2, acum=1, a=1;
    cout <<"Cuantas operaciones va a realizar con **(N1 XN2)<-- (N+R-1)! / R! X (N-1)! :";
    cin >>n1Xn2;

    for (a=1;a<=n1xn2;a++)
    {
        int i=1, num2=1, facto=1, opera1;
        cout <<"Ingrese valor de N: ";
        cin >>num;
        cout <<"Ingrese valor de R: ";
        cin >>num2;
        opera1=(num+num2-1);

        for (i=1;i<=opera1;i++) // Factorial de (N+R-1)!
        {
            facto=facto*i;
        }
        cout <<"Factorial de (N+R-1)! es: " <<facto<<endl;

        int j=1,facto2=1;

        for (j=1;j<=num2;j+) //Factorial de R!
        {
            facto2=facto2*j;
        }
        cout <<"Factorial de R es: "<<facto2<<endl;

        int h=1, opera, facto3=1;
        opera=num-1;
        cout <<"N-R = " <<num<<" - 1";
        cout <<" = " <<opera<<endl;
        
        for (h=1;h<=opera;h++) //Factorial de (N-1)!
        {
            cout <<"Factorial de N-1 es: "<<facto3<<endl;
        }
        int k=1, operafinal, op; // Multiplicacion de R! x (N-1)!
        operafinal=facto2*facto3;
        cout <<"R! X (N-1)! = "<<facto2<<" X " <<facto3;
        cout <<" = " <<operafinal;

        //divicion de (N+R-1)! / R! X (N-1)!
        op=facto/operafinal;
        cout<<"Resultado de (N+R-1)! / R! X (N-1)!: "<<op<<endl;
        acum=acum*op;
    }
    cout <<"El Numero de Permutaciones para --> (N1 X N2 X ...) <-- : "<<acum<<endl;
}

/*____________________________________________________________*/
// Inicio de menu

void programa1 ()
{
    cout <<"-Permutaciones con Repeticion N^r"<<endl; //complet
    conrepeticion();
    
    getch();
}

void programa2()
{
    cout <<"-Permutacines sin repeticion N!"<<endl; //complet
    sinrepeticion1();

    getch();
}

void programa3()
{
    cout <<"-Permutaciones sin repeticion N! / (N_R)!" <<endl; //complet 
    sinrepeticion2();
    getch();
}

void programa4()
{
    cout <<"-Permutacion sin Repeticon N! / N1!*N2!*N3!*---"<<endl; //complet
    sinrepeticion3();

    getch();
}

void programa5();
{
    cout <<"-Permutacin con Repeticion (SIMPLE) (N+R-1)! / R! X (N-1)!"<<endl; //complet
    combiconrepetsimple();

    getch();
}

void programa6();
{
    cout <<"-combinaciones con Repetcion -->(N1 X N2 X ...) <-- (N+R-1)! / R! X (N-1)!"<<endl; //complet
    conbiconrepetn1Xn2();

    getch();
}

void programa7();
{
    cout <<"\t1  -Permutaciones con repeticion"<<endl;
    conrepeticion();

    getch();
}

void programa8();
{
    cout <<"\t1 -Permutaciones con Repeticion "<<endl;
    conrepeticion();

    getch();
}

void programa9();
{
    coud <<"\t1 -Permutacines con Repeticion"<<endl;
    conrepeticion();

    getch();
}





//© Todos los derechos reservados
