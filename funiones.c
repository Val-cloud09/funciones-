#include <stdio.h>
#include <stdlib.h>

/*int suma(int a, int b)
{
    return a + b;
}
int main()
{

    int resul;
    resul = suma(3,5);
    printf("La suma es %d\n",resul);
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------
void cambiar(int x){
    x = 100;
}
int main(){
    int a = 5;
    cambiar(a);
    printf("%d",a);
    return 0;
}
---------------------------------------------------------------------------------------------------------------------------
void mostrar(int v[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", v[i]);
    }
}
int main(){
    int datos[5]={1,2,3,4,5};
    mostrar(datos,5);
    return 0;
}
---------------------------------------------------------------------------------------------------------------------
void mostrarMatriz(int m[2][3]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int matriz[2][3]={{1,2,3},{4,5,6,}};
    mostrarMatriz(matriz);
    return 0;
}
*/
//paso de paramtero por referencia------------------------------------------------------------------------------------
void duplicar(int *x){
    *x=(*x)*2;
}

int main(){
    int n=4;
    duplicar(&n);
    printf("%d",n);
    return 0;
}
