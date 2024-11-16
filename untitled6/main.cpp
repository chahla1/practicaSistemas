#include <iostream>
using namespace std;


int main() {
    int a, b, aux;
    cout<<"Escriba un valor para a: "; cin >> a;
    cout<<"Escriba un valor para b: "; cin >> b;
    aux = a;
    a = b;
    b = aux;
    cout<<"El nuevo valor de a es : "<<a<<endl;
    cout<<"El nuevo valor de b es : "<<b<<endl;
    float practica;
    float teoria;
    float participacion;
    cout<<"Cual es tu nota de practica?: "; cin >> practica;
    cout<<"Cual es tu nota de teoria?: "; cin >> teoria;
    cout<< "Cual es tu nota de participacion?: "; cin >> participacion;
    float final;
    final = practica*0.3 + teoria*0.6 + participacion*0.1;
    cout<<"La nota final es: "<<final<<endl;







}
