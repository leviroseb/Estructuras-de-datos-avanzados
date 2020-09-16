#include <iostream>
#include<time.h>
using namespace std;

void merge(int arr[], int p, int q, int r) {
  
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[p + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[q + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int l, int r) {

  if (l < r) {

    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }

  
}



void crear_arreglo(int *v, int n){
    int num,c;
    srand(time(NULL));

    for(c=1;c<=n;c++){
        num=1+rand()%(2001-1);
        v[c]=num;

    }
}

int main() {
 for(int i=100;i<4000;i=i+100){
        int *v=new int[i];
        crear_arreglo(v,i);
        mergeSort(v,0,i-1);
        delete[] v;
    }
  return 0;
}
