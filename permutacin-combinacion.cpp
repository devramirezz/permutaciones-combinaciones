//Project created by Kevin Ramirezz
//ig @kevin_ramirezz1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

#include <windows.h>


using namespace std;

//Cuadros / lineas 
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);



// PERMUTACION CON REPETICION N^r
void conrepeticion(){
	unsigned long long int k,opera,pot,nr,pot2,opera1,opera12,operaf;
	cout<<"Si tienes N cosas y eliges R de ellas, las permutaciones posibles son: N^r"<<endl<<endl;
	cout<<"Ingrese valor de N cosas: ";
    cin>>pot;
    cout<<"Ingrese valor de r elecciones: ";
    cin>>pot2;
     for(k=1;k<=pot2;k++){
        cout<<"("<<pot<<")";
       }
    cout<<""<<endl;
    opera1=pow(pot,pot2);
    cout<<"El numero de permutaciones es: "<<opera1<<endl;
    
	getch();
}

//PERMUTACION SIN REPETICION N!
void sinrepeticion1(){
	unsigned long long int i=1,num=1,facto;
		cout<<"Ingrese valor de N: "<<endl<<endl;
        cin>>num; 
        for(i=1;i<=num;i++)
		{
            facto=facto*i;
        }
        
        cout<<"El Numero de permutaciones es: "<<facto<<""<<endl; 
}

//PERMUTACION SIN REPETICION N! / (N-R)!
void sinrepeticion2(){
	
int i,num,facto=1; //SACAMOS FACTORIAL DE N!
		cout<<"Ingrese valor de N: ";
        cin>>num;
        for(i=1;i<=num;i++)
		{
            facto=facto*i;
        }cout<<"Factorial de N! : "<<facto<<""<<endl;
        
int j,num2,facto2=1,resta,opera2;// SACAMOS FACTORIAL DE (N-R)!
        cout<<"Ingrese valor de R: ";
        cin>>num2;
        
        resta=(num-num2);
        
		cout<<"N-R = "<<resta<<endl;
		
        for(j=1;j<=resta;j++)
		{
            facto2=facto2*j;
        }
		cout<<"Factorial de (N-R)! : "<<facto2<<""<<endl;
		
		opera2=facto/facto2;
		
		cout<<"El Numero de permutaciones de "<<facto<<" / "<<facto2<<" = "<<opera2<<" "<<endl;
}

//PERMUTACIONES SIN REPETICION N! / N1!*N2!*N3!*...
void sinrepeticion3(){
    float i,j,h,factorial=1,numero,factorial2=1,numero2,numero3,factorial3=1,numero4,factorial4=1,operacion;
        cout<<"Ingrese valor de N: ";
        cin>>numero; 
        cout<<"Cuantos valores son para N en el denominador? Ejemplo: N= 9! / N= (2! X 3! X 4!) N denominador: tiene 3 valores (2,3,4) // = ";
        cin>>numero3;
        
            for(i=1;i<=numero;i++)
		{
            factorial=factorial*i;	/*Primer bucle Se genera el factorial de N!*/
        }
           for(j=1;j<=numero3;j++)/*Segundo bucle sirve para realizar la consulta de los valores X que estan en el denominador N!*/{
                cout<<"Ingrese valores del Denominador N ";
                cin>>numero4;
                for(h=1;h<=numero4;h++)/*Tercer bucle genera el factorial del valor de R ingresado y se multiplica, con quien? con el siguiente valor de R*/{
                factorial4=factorial4*h;
               }
             }
        cout<<"El Numero de permutaciones es: "<<factorial/factorial4<<""<<endl; 
        return; 
}


//COMBINACIONES CON REPETICION SIMPLES (N+R-1)! / R! X (N-1)!
void conbiconrepetsimple(){
	int i=1,num=1,num2=1,facto=1,opera1;
		cout<<"Ingrese valor de N:";
		cin>>num;
		cout<<"Ingrese valor de R:";
		cin>>num2;
		opera1=(num+num2-1);
		for(i=1;i<=opera1;i++){/*FACTORIAL DE (N+R-1)!*/
	            facto=facto*i;
	        }cout<<"Factorial de (N+R-1)! es: "<<facto<<endl;
			     
	int j=1,facto2=1;
        for(j=1;j<=num2;j++){/*FACTORIAL DE R!*/
            facto2=facto2*j;
        }cout<<"Factorial de R es: "<<facto2<<endl;
		   
	int h=1,opera,facto3=1;
		opera=num-1;
		cout<<"N-R = "<<num<<" - 1";
		cout<<" = "<<opera<<endl;
		for(h=1;h<=opera;h++){/*FACTORIAL DE (N-1)!*/
            facto3=facto3*h;
        }cout<<"Factorial de N-1 es: "<<facto3<<endl;
        
        
        
    int k=1,operafinal; // MULTIPLICACION DE R! X (N-1)!
		operafinal=facto2*facto3;
		cout<<"R! X (N-1)! = "<<facto2<<" X "<<facto3;
		cout<<" = "<<operafinal<<endl;
		/*DIVISION DE (N+R-1)! / R! X (N-1)! */
		cout<<"Resultado de (N+R-1)! / R! X (N-1)!: "<<facto/operafinal<<endl;
}

//COMBINACIONES CON REPETICION -->(N1 X N2)<-- (N+R-1)! / R! X (N-1)!

void conbiconrepetn1Xn2(){
	int n1Xn2,acum=1,a=1;
	cout<<"Cuantas operaciones va a realizar con -->(N1 X N2)<-- (N+R-1)! / R! X (N-1)! : ";
	cin>>n1Xn2;
	for (a=1;a<=n1Xn2;a++){
		int i=1,num=1,num2=1,facto=1,opera1;
		cout<<"Ingrese valor de N:";
		cin>>num;
		cout<<"Ingrese valor de R:";
		cin>>num2;
		opera1=(num+num2-1);
		for(i=1;i<=opera1;i++){/*FACTORIAL DE (N+R-1)!*/
	            facto=facto*i;
	        }cout<<"Factorial de (N+R-1)! es: "<<facto<<endl;
			     
		int j=1,facto2=1;
	        for(j=1;j<=num2;j++){/*FACTORIAL DE R!*/
	            facto2=facto2*j;
	        }cout<<"Factorial de R es: "<<facto2<<endl;
			   
		int h=1,opera,facto3=1;
			opera=num-1;
			cout<<"N-R = "<<num<<" - 1";
			cout<<" = "<<opera<<endl;
			for(h=1;h<=opera;h++){/*FACTORIAL DE (N-1)!*/
	            facto3=facto3*h;
	        }cout<<"Factorial de N-1 es: "<<facto3<<endl;
	        
	        
	        
	    int k=1,operafinal,op; // MULTIPLICACION DE R! X (N-1)!
			operafinal=facto2*facto3;
			cout<<"R! X (N-1)! = "<<facto2<<" X "<<facto3;
			cout<<" = "<<operafinal<<endl;
			/*DIVISION DE (N+R-1)! / R! X (N-1)! */
			op=facto/operafinal;
			cout<<"Resultado de (N+R-1)! / R! X (N-1)!: "<<op<<endl;
	acum=acum*op;
	}
	
	cout<<"El Numero de permutaciones para -->(N1 X N2 X ...)<-- : "<<acum<<endl;
}


// 

void programa1(){
	cout << ".- Permutaciones con Repeticion N^r" << endl; //COMPLETADO
	conrepeticion();
	getch();
}
void programa2(){
	cout << ".- Permutaciones sin repeticion N!" << endl; //COMPLETADO
	sinrepeticion1();
	getch();
}
void programa3(){
	cout << ".- Permutaciones sin Repeticion N! / (N-R)!" << endl; //COMPLETADO
	sinrepeticion2();
	getch();
}
void programa4(){
	cout << ".- Permutaciones sin Repeticion N! / N1!*N2!*N3!*... " << endl; //COMPLETADO
	sinrepeticion3();
	getch();
}
void programa5(){
	cout << ".- Combinaciones con Repeticion (Simple) (N+R-1)! / R! X (N-1)!" << endl; //COMPLETADO
	conbiconrepetsimple();
	getch();
}
void programa6(){
	cout << ".- Combinaciones con Repeticion -->(N1 X N2 X ...)<-- (N+R-1)! / R! X (N-1)!" << endl; //COMPLETADO
	conbiconrepetn1Xn2();
	getch();
}
void programa7(){
	cout << "\t1  .- Permutaciones con Repeticion" << endl;
	conrepeticion();
	getch();
}
void programa8(){
	cout << "\t1  .- Permutaciones con Repeticion" << endl;
	conrepeticion();
	getch();
}
void programa9(){
	cout << "\t1  .- Permutaciones con Repeticion" << endl;
	conrepeticion();
	getch();
}


//Menu 

void menu()
{
		system("cls");
		system("mode con: cols=80 lines25="); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
		system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,98,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
		//cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
		
		gotoxy(20,2); cout << "Calculadora de permutaciones y combinaciones" << endl<<endl;
		
        cout << "1.- Permutaciones con Repeticion N^r" << endl;
        cout << "2.- Permutaciones sin repeticion N!" << endl;
        cout << "3.- Permutaciones sin repeticion N! / (N-R)!" << endl;
        cout << "4.- Permutaciones sin repeticion mas de un tipo N! / N1!*N2!*N3!*... " << endl;
        cout << "5.- Combinaciones con Repeticion (Simple) (N+R-1)! / R! X (N-1)!" << endl;
        cout << "6.- Combinaciones con Repeticion -->(N1 X N2)<-- (N+R-1)! / R! X (N-1)! " << endl;
        cout << "7.- Combinaciones sin repeticion: Simples" << endl; 
        cout << "8.- Combinaciones sin repeticion: (N1 X N2)" << endl;
        cout << "9.- Salir" << endl<<endl;
        cout<<""<<endl<<endl;
        cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
        cout << "\t   .- Seleccionar opcion ->";
}


//Switch 
	main()
{
	int opcion;
	do{
		menu();
		cin>>opcion;
		switch(opcion){
			case 1:
				system("cls");
				programa1();
			break;
			case 2:
				system("cls");
				programa2();
			break;
			case 3:
				system("cls");
				programa3();
			break;
			case 4:
				system("cls");
				programa4();
				
			break;
			case 5:
				system("cls");
				programa5();
			break;
			case 6:
				system("cls");
				programa6();
			break;
			case 7:
				system("cls");
				programa7();
			break;
			case 8:
				system("cls");
				programa8();
			break;
			
			case 9:
			system("cls");
			cout<<"-------------------------------------------------"<<endl<<endl;	
			cout<<"\t\t Hasta pronto..."<<endl<<endl;	
			cout<<"-------------------------------------------------"<<endl<<endl<<endl<<endl;
			
			cout<<"\t\t Github"<<endl;
			cout <<"@kevinramirezz1"<<endl<<endl;
			
			cout<<"\t\t Instagram"<<endl;
			cout <<"@kevin_ramirezz1"<<endl;
			
			getch();
			exit (1);
			break;

		}
	}while(opcion!=8);
	
	getch ();
	return 0;
}


//FUNCION GOTOXY
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
 
//FUNCION QUE DIBUJA EL CUADRO
void dibujarCuadro(int x1,int y1,int x2,int y2){
	int i;
	
    for (i=x1;i<x2;i++){
		gotoxy(i,y1); cout << "\304"; //linea horizontal superior
		gotoxy(i,y2); cout << "\304"; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); cout <<"\263"; //linea vertical izquierda
		gotoxy(x2,i); cout <<"\263"; //linea vertical derecha
	}
	
    gotoxy(x1,y1); cout<< "\332"; 
    gotoxy(x1,y2); cout<< "\300";
    gotoxy(x2,y1); cout<< "\277";
    gotoxy(x2,y2); cout<< "\331";
}
//© Todos los derechos reservados
