#include <iostream>
using namespace std;

int main() {
    float numero1, numero2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
    cout<<"Ingrese un numero: ";
    cin>>numero1;
    cout<<"Ingrese otro numero: ";
    cin>>numero2;
    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1 * numero2;
    division = numero1 / numero2;
    cout<<"\nLa suma es: "<< suma<<endl;
    cout<<"\nLa resta es: "<< resta<<endl;
    cout<<"\nLa multiplicacion es: "<< multiplicacion<<endl;
    cout<<"\nLa division es "<< division<<endl;

    /*Ejercicio 3: Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
 Edad: dato de tipo entero.
 Sexo: dato de tipo carácter.
 Altura en metros: dato de tipo real.*/

    int edad;
    char sexo[10];
    float altura;
    cout<<"Ingrese su edad"<<endl;
    cin>>edad;
    cout<<"Ingrese su sexo"<<endl;
    cin>>sexo;
    cout<<"Ingrese su altura"<<endl;
    cin>>altura;
    cout<<"\nSu edad es: "<<edad<<"años";
    cout<<"\nSu sexo es: "<<sexo;
    cout<<"\nSu altura es: "<<altura<<"cm";
    //Ejercicio 1: Escribe la siguiente expresión como expresión en C++: (a/b) + 1
    float a, b, resultado = 0;
    cout<<"\nIngrese un valor para a:";
    cin>>a;
    cout<<"Ingrese un valor para b:";
    cin>>b;
    resultado = a/b + 1;
    cout<<"\nEl resultado es: "<< resultado << endl;
    //Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)
    int c, d, resultado2 = 0;
    cout<<"\nIngrese un valor para c: ";
    cin>>c;
    cout<<"\nIngrese un valor para d: ";
    cin>>d;
    resultado2 = ((a + b) / (c + d));
    cout<<"\nEl resultado es: "<<resultado2<<endl;









    return 0;
}
