#include<iostream>
#include<iomanip>
using namespace std;


void crear_arreglo(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<"Ingrese un numero: ";
        cin>>v[i];
    }
}

void mostrar_arreglo(int v[], int n){
    for(int i=0;i<n;i++){
        cout<<v[i]<<setw(3);
    }
}

void seleccion(int v[], int n){
    for (int i = 0; i<n-1; ++i) {
       int min = i;
       for (int c = i + 1; c<n; ++c) {
           if (v[min] > v[c]) min = c;
       }
       int aux = v[i];
       v[i] = v[min];
       v[min] = aux;
}}


int main()
{
    int n,v[50];
    cout<<"Numero de elementos del array: "<<endl;
    cin>>n;
    crear_arreglo(v,n);
    mostrar_arreglo(v,n);
    seleccion(v,n);
    cout<<endl;
    cout<<"Arreglo ordenado: "<<endl;
    mostrar_arreglo(v,n);
    return 0;

}