#include<iostream>
using namespace std;

int particion(int *A, int p, int r)
{
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i=i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quicksort(int *A, int p, int r)
{
    if(p<r){
        int q=particion(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}


void crear_arreglo(int *A, int n){
    int c;
    srand(time(NULL));

    for(c=0;c<=n;c++){
        A[c]=rand()%1000000;

    }
}


void mostrar_arreglo(int *A, int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<"-";
    }
}


int main()
{

    int suma=0;
    int *A=new int[256]{};
    crear_arreglo(A,100);
    mostrar_arreglo(A,100);
    return 0;


}
