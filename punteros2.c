#include<stdio.h>
#include<stdlib.h>
int main(){
 int fil,col;
 int i,j;
 int *mat;
 int result=0;
 printf("Introduce el numero de filas:\n");
 scanf("%d",&fil);
 printf("Introduce el numero de columnas:\n");
 scanf("%d",&col);
 mat=(int *)malloc(fil*col*sizeof(int));
 for (i=0;i<fil;i++){
  for (j=0;j<col;j++){
   printf("Dame los valores:\n");
   scanf("%d",&*(mat+fil*i+j));
    result=result+*(mat+fil*i+j);
  }
 }
  printf("la suma de todos los valores es %d", result);
 free(mat);
}
