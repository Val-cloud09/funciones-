#include <stdio.h>
#include <stdlib.h>

void capturar(int m[3][3]){
    int i,j;
    printf("captura los arreglos\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
        }
    }
}
void mostrar(int m[3][3]){
    int i,j;
    printf("arreglos \n");
    for(i=0;i<3;i++){
            printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
    }
}
int diagonal(int m[3][3]){
    int i, suma = 0;
    for(i=0;i<3;i++){
        suma += m[i][i];
    }
    printf("\nSuma de la diagonal principal: %d\n", suma);
    return suma;
}
int main()
{

    int arreglo1[3][3]={0};

    capturar (arreglo1);
    mostrar (arreglo1);
    diagonal (arreglo1);

    FILE *archivo = fopen("diagonal.txt", "w");

    fprintf(archivo, "Elementos de la diagonal principal:\n\n");
    for(int i=0;i<3;i++){
        fprintf(archivo, "m[%d][%d] = %d\n", i, i, arreglo1[i][i]);
    }
    fprintf(archivo, "\nSuma total: %d\n", diagonal);

    fclose(archivo);
    return 0;
}
