//Project created by Kevin Ramirezz
//ig @kevin_ramirezz1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

#include <locale.h>

#include <windows.h>


using namespace std;

//Cuadros / lineas 
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);


//__________________________________________________________________________________________________________________________________________________________

//-----------------------PERMUTACIONES CON REPETICON-----------------------

//__________________________________________________________________________________________________________________________________________________________

// 1.	PERMUTACION CON REPETICION 
void permutacion_con_repeticon(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	double long n, r, resultado;
		cout<<"PERMUTACION CON REPETICION: \n";
		cout<<"(n) valor";
		cout<<"(r) valor";
		
		cout<<"ingrese valor para n"<<endl;
		cin>>n;
		cout<<"ingrese valor para R"<<endl;
		cin>>r;
		
	for(resultado = 1; r > 0; r--) resultado *= n;
		cout<<"El resultado se permutacion con repticon: \n";
		
		cout<< "\n";
		cout<<"nr: "<<resultado<<endl;
    
	getch();
}



//__________________________________________________________________________________________________________________________________________________________

//-----------------------PERMUTACIONES SIN REPETICOIN-----------------------

//__________________________________________________________________________________________________________________________________________________________

// 2.	PERMUTACION SIN REPETICION N!
void permutacionn_sin_repeticionn(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	long double numero, f=1;
	
	cout<<"Ingrese un Valor que sera permutacion sin repeticion (N!) \n";
	cin>>numero;
	cout<<" \n";
	
	for (int i=1;i<=numero;i++)
	{
		f=f*i;
	}
	cout<<"Resultado de permutacion sin repeticion: ";
	cout <<"\n";
	cout<<"n!: "<<f<<endl;
	
	getch();
	
}

//__________________________________________________________________________________________________________________________________________________________

// 3.	PERMUTACION SIN REPETICION  DE UN TIPO
void permutaciones_sin_repeticoin_deuntipo(){
		
		system("cls");
		setlocale(LC_CTYPE, "Spanish");
			
		long double r, nr;
		long double p;
		long double n=1;
		long double nf=1;
		long double nrf=1;
		
		cout <<"Permutacion sin Repeticon de un tipo: \n";
		cout <<"(n) valor \n";
		cout <<"(r) valor sin repetircion \n";
		
		cout <<"		\n";
		cout <<"Ingrese valor (n)";
		cin >>n;
		cout <<"ingrese valor (r)";
		cin >>r;
		
	for (int i=1; i<=nr;i++)
	{
		nrf = nrf * i;
	}
	p=nf/nrf;
	cout<<"		\n";
	cout <<"n!	 "<<n<<"!	"<<n<<"!	"<<nf<<endl;
	cout << "resultado: "<<p<<endl;
	cout <<"(n-r)!	("<<n<<"-"<<r<<")!		"<<nr<<"!		"<<nrf<<endl;
	
	getch(); 
}

//__________________________________________________________________________________________________________________________________________________________

// 4.	PERMUTACIONES SIN REPETICION MAS DE UN TIPO
void permutaciones_sin_repeticion_masde_untipo(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	int nft, p;
	int n=1;
	int nf=1;
	int n1=1;
	int nf1=1;
	int n2=1;
	int nf2=1;
	int n3=1;
	int nf3=1;
	
	cout <<"PERMUTACION SIN REPETICION MAS DE UN TIPO: \n";
//----------
	cout <<"(n) valor \n";
	cout <<"(n1), (n2), (n3), valor sin repeticion con varios tipos \n";
	cout <<"		\n";
//----------
	cout <<"Ingrese valor para (n)";
	cin >>n;
	
	cout <<"Ingrese valor para (n1)";
	cin >>n1;
	
	cout <<"Ingrese valor para (n2)";
	cin >>n2;
	
	cout <<"Ingrese valor para (n3)";
	cin >>n3;
//----------
	for (int i=1;i<=n;i++)
	{
		nf = nf * i;	
	}
	
	for (int i=1;i<=n1;i++)
	{
		nf1 = nf1 * i;	
	}
	
	for (int i=1;i<=n2;i++)
	{
		nf2 = nf2 * i;	
	}
	
	for (int i=1;i<=n3;i++)
	{
		nf3 = nf3 * i;	
	}
	
//----------

	nft=nf1*nf2*nf3;
	p=nf/nft;
	
	cout <<"		\n";
	
	cout <<"	n!		"<<n<<"!	"<<nf<<endl;
	cout <<"	Resultado:		"<<p<<endl;
	cout <<" 	n1!		n2!		n3!		"<<nf1<<"!*	"<<nf2<<"!*	"<<nf3<<"!		"<<nft<<endl;
	
	getch();
	
}

//__________________________________________________________________________________________________________________________________________________________

//-----------------------COMBINACIONES CON REPETICON-----------------------

//__________________________________________________________________________________________________________________________________________________________
// 5.	COMBINACIONES CON REPETICION SIMPLES 
void combinaciones_con_repeticion_simple(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	int p, n, f1;
	int r=1;
	int rf=1;
	int nf=1;
	int ff=1;
	int nr=1;
	int nrf=1;
	
	cout << "Combinaciones con pertuacion simple: \n";
	
	cout << "(n) valor \n";
	cout << "(r) elementos u objetos de n que se hace referencia: \n";
	
	cout <<"		\n";
	
	cout <<"Ingrese valor (n)";
	cin >>n;
	
	cout <<"Ingrese valor (r)";
	cin >>r;
	
	f1=n+r-1;
	nr=n-1;
	
	//-----
	
	for (int i=1;i<=r;i++)
	{
		rf = rf * i;
	}
	
	//-----
	
	for (int i=1;i<=nr;i++)
	{
		nrf = nrf * i;
	}
	
	//-----
	
	for (int i=1;i<=f1;i++)
	{
		ff = ff * i;
	}
	
	n=nrf*rf;
	p=ff/n;
	
	//-----
	
	cout << "		\n";
	cout << "	(n + r - 1 )	!	("<<n<<"+"<<r<<"-1)!	"<<f1<<"!	"<<ff<<" "<<endl;
	cout << " 	r!  (n - 1 )		"<<r<<"!("<<n<<"-1)!	 "<<r<<"!"<<nr<<"!	 "<<rf<<"*"<<nrf<<"			"<<n<<endl;
	
	//-----
	
	getch();
}



//__________________________________________________________________________________________________________________________________________________________

// 6.	COMBINACIONES CON REPETICION TIPO N1 Y N2

void combinaciones_con_repeticion_tipon1n2(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	int p, p2, p3, n1, n2, f1, f2;
	int n;
	int r=1,	r2=1;
	int rf=1,	rf2=1;
	int nf=1,	nf2=1;
	int ff=1,	ff2=1;
	int nr=1,	nr2=1;
	int nrf=1,	nrf2=1;
	
	//-----
	
	cout <<"Combinaciones con repeticion tipo n1 y n2: \n";
	
	cout <<"(n) valor \n";
	cout <<"(r) objeto de n a los cuales se hace  \n";
	
	cout <<"Ingrese valor (N1): ";
	cin >>n;
	
	cout <<"Ingrese valor (N2): ";
	cin >>n2;
	
	cout <<"Ingrese valor (R1): ";
	cin >>r;
	
	cout <<"Ingrese valor (R2): ";
	cin >>r2;
	
	//-----
	
	f1=n1+r-1;
	nr=n1+r2-1;
	nr=n1-1;
	nr2=n2-1;
	
	//-----
	
	for (int i=1;i<=r;i++)
	{
		rf	=	rf	*	i;
	}
	
	for (int i=1;i<=r2;i++)
	{
		rf2	=	rf2	*	i;
	}
	
	//--
	
	for (int i=1;i<=nr;i++)
	{
		nrf	=	nrf	*	i;
	}
	
	for (int i=1;i<=nr2;i++)
	{
		nrf2	=	nrf2	*	i;
	}
	
	//--
	
	for (int i=1;i<=f1;i++)
	{
		ff	=	ff	*	i;
	}
	
	for (int i=1;i<=f2;i++)
	{
		ff2	=	ff2	*	i;
	}
	
	//-----
	
	n=nrf*rf;
	n2=nrf2*rf2;
	p=ff/n;
	p2=ff2/n2;
	p3=p*p2;
	
	//-----
	
	cout <<"	\n";
	cout <<"	(n+r-1)!	("<<n2<<"+"<<r<<"-1)!	"<<f1<<"!	"<<f1<<"!	"<<ff<<""<<endl;
	cout <<"________________________________________________________________________		Resultado:	"<<p3<<endl;
	cout <<"	r!(n-1)!	 "<<r<<"!("<<n1<<"-1)!	"<<r<<"!"<<nr<<"!		"<<rf<<"*"<<nrf<<"			 "<<n<<endl;
	
	//-----
	
	getch();
}

//__________________________________________________________________________________________________________________________________________________________

//-----------------------COMBINACIONES SIN REPETICON-----------------------

//__________________________________________________________________________________________________________________________________________________________

// 7.	COMBINACIONES SIN REPETICION

void combinaciones_sin_repeticon(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	int r,nr;
	long double p;
	double rr=1;
	double n=1;
	double nf=1;
	long double nrf=1;
	long double rrf=1;
	
	cout <<"Combinaciones sin Repeticoin simple: \n";
	
	cout <<"Valor (n) \n";
	cout <<"Valor (r) a elegir sin repeticon \n";	
	
	cout <<"Ingrese valor para (n)";
	cin >>n;
	
	cout <<"Ingrese valor para (r)";
	cin >>r;
	
	//-----
	
	nr=n+r;
	rr=r*nr;
	p=nf/rrf;
	
	//-----
	
	for (int i=1;i<=n;i++)
	{
		nf = nf * i;
	}
	
	for (int i=1;i<=nr;i++)
	{
		nrf = nrf * i;
	}
	
	for (int i=1;i<=rr;i++)
	{
		rrf = rrf * i;
	}
	
	//-----
	
	cout <<"			\n";
	cout <<"	n!		"<<n<<"!		"<<n<<"!		"<<nf<<endl;
	cout <<"____________________________________________	Resultado:"<<p<<endl;
	cout <<"  r!(n-r)!	"<<r<<"!("<<n<<"-"<<r<<")!		"<<rr<<"!	  "<<rrf<<endl;
	
	getch();		
}

//__________________________________________________________________________________________________________________________________________________________

// 8.	COMBINACIONES SIN REPETICION TIPO (N1 X N2)

void combinaciones_sin_repeticion_tipon1n2(){
	
	system("cls");
	setlocale(LC_CTYPE, "Spanish");
	
	int r1, r2, nr, nr2;
	long double p1, p2, p3;
	double rr=1, rr2=1;
	double n1=1, n2=1;
	double nf=1, nf2=1;
	long double nrf=1, nrf2=1;
	long double rrf=1, rrf2=1;
	
	cout <<"Combinacion sin repeticon tipo n1 y n2: \n";
	
	cout <<"n1 y n2 valor a elegir \n";
	cout <<"r1 y r1 valor a elegir si repeticon \n";
	
	cout <<"	\n";
	
	cout <<"Ingrese calor para n1";
	cin >>n1;
	
	cout <<"Ingrese calor para n2";
	cin >>n2;
	
	cout <<"Ingrese calor para r1";
	cin >>r1;
	
	cout <<"Ingrese calor para r2";	
	cin >>r2;
	
	//-----
	
	nr=n1-r2;
	nr2=n2-r2;
	rr=r1*nr;
	rr2=r2*nr2;
	
	//-----
	
	for (int i=1;i<=n1;i++)
	{
		nf = nf * i;
	}
	
	for (int i=1;i<=n2;i++)
	{
		nf2 = nf2 * i;
	}
	
	//---
	
	for (int i=1;i<=nr;i++)
	{
		nrf = nrf * i;
	}
	
	for (int i=1;i<=nr2;i++)
	{
		nrf2 = nrf2 * i;
	}
	
	//---
	
	for (int i=1;i<=rr;i++)
	{
		rrf2 = rrf2 * i;
	}
	
	for (int i=1;i<=rr2;i++)
	{
		rrf2 = rrf2 * i;
	}
	
	//---
	
	p1=nf/rrf;
	p2=nf2/rrf2;
	p3=p1*p2;
	
	//---
	
	cout <<"		\n";
	cout <<"		\n";
	cout <<"		\n";
	cout <<" n!				"<<n1<<"!			"<<nf<<endl;
	cout <<"__________________________________________________Resultado:"<<p3<<endl;
	cout <<" r!(n-r)!		"<<r1<<"!("<<n1<<"-"<<r1<<")!	"<<rr<<"!	"<<rrf<<endl;
	
	getch();	
}

//__________________________________________________________________________________________________________________________________________________________

//-----------------------Seleccion - Switch -----------------------

//__________________________________________________________________________________________________________________________________________________________

// 	programas

void programa1(){
	cout << "Permutaciones con repetición" << endl; 
	permutacion_con_repeticon();
	getch();
}
void programa2(){
	cout << "Permutaciones sin repetición" << endl; 
	permutacionn_sin_repeticionn();
	getch();
}
void programa3(){
	cout << "Permutaciones sin repetición de un tipo" << endl; 
	permutaciones_sin_repeticoin_deuntipo();
	getch();
}
void programa4(){
	cout << "Permutaciones sin repetición más de un tipo" << endl; 
	permutaciones_sin_repeticion_masde_untipo();
	getch();
}
void programa5(){
	cout << "Combinaciones con repetición" << endl; 
	combinaciones_con_repeticion_simple();
	getch();
}
void programa6(){
	cout << "Combinaciones con repetición tipo (N1 X N2)" << endl; 
	combinaciones_con_repeticion_tipon1n2();
	getch();
}
void programa7(){
	cout << "Combinaciones sin repetición" << endl;
	combinaciones_sin_repeticon();
	getch();
}
void programa8(){
	cout << "Combinaciones sin repetición tipo (N1 X N2)" << endl;
	combinaciones_sin_repeticion_tipon1n2();
	getch();
}

//__________________________________________________________________________________________________________________________________________________________

//-----------------------MENÚ-----------------------

//__________________________________________________________________________________________________________________________________________________________


//Menu 

void menu()
{
		system("cls");
		
		
		system("mode con: cols=80 lines25="); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA A 80 COLUMNAS Y 25 FILAS
		system("COLOR B0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,98,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
		
		//cout<<"---------------------------------------------------------------------------------"<<endl<<endl;
		
		setlocale(LC_CTYPE, "Spanish");
	
		gotoxy(20,2); cout << "CALCULADORA - PERMUTACIONES Y COMBINACIONES" << endl<<endl;
		
        cout << "1.- Permutaciones con repetición" << endl;
        cout << "2.- Permutaciones sin repetición" << endl;
        cout << "3.- Permutaciones sin repetición de un tipo" << endl;
        cout << "4.- Permutaciones sin repetición más de un tipo" << endl;
        cout << "5.- Combinaciones con repetición" << endl;
        cout << "6.- Combinaciones con repetición tipo (N1 X N2) " << endl;
        cout << "7.- Combinaciones sin repetición" << endl; 
        cout << "8.- Combinaciones sin repetición tipo (N1 X N2)" << endl;
        
        cout << "9.- Salir" <<endl<<endl;
        cout <<"		  " <<endl<<endl;
        cout<<"____________________________________________________________________________________"<<endl<<endl;
        cout << "\t   .-  Seleccionar opción  ->";
}


//__________________________________________________________________________________________________________________________________________________________

//-----------------------Switch - Opción-----------------------

//__________________________________________________________________________________________________________________________________________________________


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
			//-__________________________________________________________________________________________________________________________________-
			case 2:
				system("cls");
				programa2();
			break;
			//-__________________________________________________________________________________________________________________________________-
			case 3:
				system("cls");
				programa3();
			break;
			///-__________________________________________________________________________________________________________________________________-
			case 4:
				system("cls");
				programa4();
			break;
			//-__________________________________________________________________________________________________________________________________-
			case 5:
				system("cls");
				programa5();
			break;
			//-__________________________________________________________________________________________________________________________________-
			case 6:
				system("cls");
				programa6();
			break;
			//-__________________________________________________________________________________________________________________________________-
			case 7:
				system("cls");
				programa7();
			break;
			//-__________________________________________________________________________________________________________________________________-
			case 8:
				system("cls");
				programa8();
			break;
			//-__________________________________________________________________________________________________________________________________-
			case 9:
			system("cls");
			cout<<"-------------------------------------------------"<<endl<<endl;	
			cout<<"\t\t Hasta pronto..."<<endl<<endl;	
			cout<<"-------------------------------------------------"<<endl<<endl<<endl<<endl;
			
			getch();
			
			cout<<"_______________________________________________________________________________"<<endl;
			
			system("cls");
			cout<<"-------------------------------------------------"<<endl<<endl;	
			cout<<"\t\t SIGUEME..."<<endl<<endl;	
			cout<<"-------------------------------------------------"<<endl<<endl<<endl<<endl;
			
			cout<<"\t\t Github"<<endl;  cout <<"\t @kevinramirezz1"<<endl<<endl;
			cout<<endl;
			cout<<"\t\t Repositorio"<<endl; cout <<"\t https://github.com/kevinramirezz1/permutaciones-combinaciones"<<endl;
			cout<<endl;
			cout<<"\t\t Instagram"<<endl;  cout <<"\t @kevin_ramirezz1"<<endl<<endl;
			cout<<endl;
			cout<<endl;
			cout<<endl;
			cout <<"\t© Todos los derechos reservados";
			
			getch();
			exit (1);
			break;

		}
	}while(opcion!=8);
	
	getch ();
	return 0;
}


//__________________________________________________________________________________________________________________________________________________________

//-----------------------funcion GOTOXY-----------------------

//__________________________________________________________________________________________________________________________________________________________


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
