#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include "colores.h"
using namespace std;

int main(){
	int opcion, numero;
	float a, b, c, d, e, f;
	int v1, v2, v3;
	
while(opcion!=0){
	system("cls");
	cout<<LGREEN<<"***OPERACIONES MATEMATICAS***"<<endl;
	cout<<ORANGE<<"          1.3.8 BETA         "<<endl;
	cout<<WHITE<<"_____________________________"<<endl;
	cout<<" "<<endl;
	cout<<"Que tipo de problema desea resolver?"<<endl;
	cout<<"_____________________________ "<<endl;
	cout<<" "<<endl; //espacio
	cout<<"Operaciones sencillas.           (1)"<<endl;
	cout<<"(Sumas, Restas, Multiplicaciones, Divisiones)"<<endl;
	cout<<" "<<endl; //espacio
	cout<<"Problemas algebraicos.           (2)"<<endl;
	cout<<"(Raiz cuadrada, Potencias, Fracciones, Etc.)"<<endl;
	cout<<" "<<endl; //espacio
	cout<<"Salir                            (0)"<<endl;
	cout<<"_____________________________"<<endl;
	cout<<" "<<endl; //espacio
	cout<<"Ingrese una opcion: ";
	
	
	
	cin>>opcion;
	
	switch(opcion)
	{
		case 1: //(1)-Operaciones Sencillas
			cout<<CYAN<<" "<<endl; //espacio
			cout<<"____________________________________"<<endl;
			cout<<"Ahora seleccione que operacion desea resolver."<<endl;
			cout<<" "<<endl; //espacio
			cout<<"Suma de dos numeros            [ 1 ]"<<endl;
			cout<<"Resta de dos numeros           [ 2 ]"<<endl;
			cout<<"Multiplicacion de dos numeros  [ 3 ]"<<endl;
			cout<<"Division de dos numeros        [ 4 ]"<<endl;
			cout<<"____________________________________"<<endl;
			cout<<"Ingrese una opcion: ";
			cin>>numero;
			
			switch(numero)
			{
				case 1: //(1.1)-Suma
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					cout<<"Ingrese otro numero: ";
					cin>>b;
					c = a + b;
					cout<<"--------------------"<<endl; //espacio
					cout<<LGREEN<<"Resultado: "<<c<<endl;
					cout<<WHITE<<" "<<endl; //espacio
				break;
				
				case 2: //(1.2)-Resta
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					cout<<"Ingrese otro numero: ";
					cin>>b;
					c = a - b;
					cout<<"--------------------"<<endl;;
					cout<<LGREEN<<"Resultado: "<<c<<endl;
					cout<<WHITE<<" "<<endl; //espacio
				break;
				
				case 3: //(1.3)-Multiplicacion
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					cout<<"Ingrese otro numero: ";
					cin>>b;
					c = a * b;
					cout<<"--------------------"<<endl;
					cout<<LGREEN<<"Resultado: "<<c<<endl;
					cout<<WHITE<<" "<<endl; //espacio;
				break;
				
				case 4: //(1.4)-Division
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					cout<<"Ingrese otro numero: ";
					cin>>b;
					c = a / b;
					cout<<"--------------------"<<endl;
					cout<<LGREEN<<"Resultado: "<<c<<endl;
					cout<<WHITE<<" "<<endl; //espacio
				break;
			}
			system("pause");
		break;
		
		case 2: //(2)-Problemas Algebraicos
			cout<<CYAN<<" "<<endl; //espacio
			cout<<"Ahora seleccione que operacion desea resolver."<<endl;
			cout<<" "<<endl; //espacio
			cout<<"Raiz Cuadrada                  [ 1 ]"<<endl;
			cout<<"Exponente de X elevado a Y     [ 2 ]"<<endl;
			cout<<"Logaritmo                      [ 3 ]"<<endl;
			cout<<"Fracciones a Decimales         [ 4 ]"<<endl;
			cout<<"Decimales a Fracciones         [ 5 ]"<<endl;
			cout<<"Fahrenheit a Celsius           [ 6 ]"<<endl;
			cout<<"Celsius a Fahrenheit           [ 7 ]"<<endl;
			cout<<"____________________________________"<<endl;
			cout<<"Ingrese una opcion: ";
			cin>>numero;
			
			switch(numero)
			{
				case 1: //(2.1)-Raiz cuadrada
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: "<<endl;
					cin>>a;
					c = sqrt(a);
					cout<<" "<<endl; //espacio
					cout<<LGREEN<<"La Raiz cuadrada es: "<<c<<endl;
					cout<<WHITE<<" "<<endl;
				break;
				
				case 2: //(2.2)-Exponente de X elevado a Y
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero base: ";
					cin>>a;
					cout<<"Ingrese el exponente: ";
					cin>>b;
					c = pow(a,b);
					cout<<" "<<endl; //espacio
					cout<<LGREEN<<"Resultado: "<<c<<endl;
					cout<<WHITE<<" "<<endl;
				break;
				
				case 3: //(2.3)-Logaritmo
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					c = log(a);
					cout<<" "<<endl; //espacio
					cout<<LGREEN<<"El logaritmo es: "<<c<<endl;
					cout<<WHITE<<" "<<endl;
				break;
				
				case 4: //(2.4)-Fracciones a Decimales
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese el Numerador (es decir, el nuemro de arriba de la fraccion): ";
					cin>>a;
					cout<<"Ingrese el Denominador (es decir, el numero de abajo de la fraccion): ";
					cin>>b;
					c = a / b;
					cout<<" "<<endl; //espacio
					cout<<LGREEN<<"Resultado: "<<c<<endl;
					cout<<WHITE<<" "<<endl; //espacio
				break;
				
				case 5: //(2.5)-Decimales a Fracciones
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>v1;
					cout<<" "<<endl; //espacio
					switch (v1)
					{
						case 1 ... 9: //unidades
							cout<<"Resultado: "<<v1<<" enteros"<<endl;
						break;
						
						case 10 ... 99: //decenas
							cout<<"Resultado: "<<v1<<" /10"<<endl;
						break;
						
						case 100 ... 999: //centenas
							cout<<"Resultado: "<<v1<<" /100"<<endl;
						break;
						
						case 1000 ... 9999: //milecimas
							cout<<"Resultado: "<<v1<<" /1000"<<endl;
						break;
					}	
				break;
				
				case 6: //(2.6)-Fahrenheit a Celsius
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					cout<<" "<<endl; //espacio
					c = 0.555556 * (a - 32);
					cout<<LGREEN<<a<<" grados Fahrenheit son "<<c; cout<<" grados Celcius"<<endl;
					cout<<WHITE<<" "<<endl; //espacio
				break;
				
				case 7: //(2.7)-Celcius a Farenheit
					cout<<WHITE<<" "<<endl; //espacio
					cout<<"Ingrese un numero: ";
					cin>>a;
					cout<<" "<<endl; //espacio
					b = a / 5 * 9 + 32;
					cout<<LGREEN<<a<<" grados Celcius son "<<b; cout<<" grados Fahrenheit"<<endl;
					cout<<WHITE<<" "<<endl; //espacio
				break;
						
					
				
			}
			system("pause");
		break;
		
		case 0:
			cout<<" "<<endl; //espacio
			cout<<LGREEN<<"precione cualquier tecla para salir";
			cout<<WHITE<<" "<<endl; //espacio
		break;
			
			
	}

}
	
	
	
	return 0;
}
