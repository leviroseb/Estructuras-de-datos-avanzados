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

void ord_insercion(int v[], int n){
    int k=0;
    while(k<n){
        int t=k;
        int i;
        for(i=k;i<0&&v[i-1]>t;--i){
            v[i]=v[i-1];
        }
        v[i]=t;
        ++k;
    }
}

void insercion(int v[], int n) {
  int i, a, index;
  for (i=1; i < n; i++) {
    index = v[i];
    a = i-1;
    while (a >= 0 && v[a] > index) {
      v[a + 1] = v[a];
      a--;
    }
    v[a+1] = index;
  }
}
int main()
{
    int n,v[50];
    cout<<"Numero de elementos del array: "<<endl;
    cin>>n;
    crear_arreglo(v,n);
    mostrar_arreglo(v,n);
    insercion(v,n);
    cout<<endl;
    cout<<"Arreglo ordenado: "<<endl;
    mostrar_arreglo(v,n);
    return 0;

}
