#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    int s,i,j,o;

    do
    {

    printf("\t\tOPERACIONES DE MATRICES \n\n");
    printf("\n1 SUMA\n2 RESTA\n3 MULTIPLICACION\n4 SALIR");
    printf("\n\nQue operacion deseas realizar:");
    scanf("%d",&o);

    //SUMA();
    if(o==1)
    {
      int f,c,a,cont;
      int matrizA[10][10],matrizB[10][10],matrizC[10][10];

      printf("\ntu operacion es SUMA");
      printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
      printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
      printf("\n\ncuantas filas deseas?:");
      scanf("%d",&f);
      printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
      printf("\ncuantas columnas deseas?:");
      scanf("%d",&c);

      //MATRIZ A
           printf("\t\nINGRESANDO VALORES DE LA MATRIZ A ");
           printf("\nintroduce los valores de la columna:");
           //scanf("\n%d",&a);
           printf("\nintriduce los valores de la fila:");
           //scanf("\n%d",&a);

       for(i=1;i<=f;i++)
       {
         printf("\n\t");

        for(j=1;j<=c;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizA[i][j]=a;
        }
       }

       //MATRIZ B
           printf("\t\nINGRESANDO VALORES DE LA MATRIZ B ");
           printf("\nintroduce los valores de la columna:");
           //scanf("\n%d",&a);
           printf("\nintriduce los valores de la fila:");
           //scanf("\n%d",&a);

       for(i=1;i<=f;i++)
       {
         printf("\n\t");

        for(j=1;j<=c;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizB[i][j]=a;
        }
       }

       //OPERACION

       for(i=1;i<=f;i++)
       {

          for(j=1;j<=c;j++)
          {
             matrizC[i][j]=matrizA[i][j] + matrizB[i][j];
             printf("\nTU RESULTADO ES:");
             printf("(%i,%i):",i,j);
             printf("%i",matrizC[i][j]);
          }
       }
         getch();
         getch();
      }

      //RESTA();

    if(o==2)
    {
      int f,c,a,r;
      int matrizD[10][10],matrizE[10][10],matrizF[10][10];

      printf("\ntu operacion es RESTA");
      printf("\n1 D-E \n2 E-D");
      printf("\ncomo deseas la resta:");
      scanf("%d",&r);

      if(r==1)
      {
        printf("\n\tTU FORMA ES D-E");
        printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
        printf("\n\ncuantas filas deseas?:");
        scanf("%d",&f);
        printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
        printf("\ncuantas columnas deseas?:");
        scanf("%d",&c);

        //MATRIZ D

        printf("\t\nINGRESANDO VALORES DE LA MATRIZ D ");
        printf("\nintroduce los valores de la columna:");
        //scanf("\n%d",&a);
        printf("\nintriduce los valores de la fila:");
        //scanf("\n%d",&a);

        for(i=1;i<=f;i++)
        {
          printf("\n\t");

          for(j=1;j<=c;j++)
          {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizD[i][j]=a;
          }
        }

       //MATRIZ E

       printf("\t\nINGRESANDO VALORES DE LA MATRIZ E ");
       printf("\nintroduce los valores de la columna:");
       //scanf("\n%d",&a);
       printf("\nintriduce los valores de la fila:");
       //scanf("\n%d",&a);

       for(i=1;i<=f;i++)
       {
         printf("\n\t");

        for(j=1;j<=c;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizE[i][j]=a;
        }
       }

      //OPERACION

      for(i=1;i<=f;i++)
       {

          for(j=1
          ;j<=c;j++)
          {
             matrizF[i][j]= matrizD[i][j] - matrizE[i][j];
             printf("\nTU RESULTADO ES:");
             printf("(%i,%i):",i,j);
             printf("%i",matrizF[i][j]);
          }
       }
         getch();
         getch();
      }

      if(r==2)
      {
        printf("\n\tTU FORMA ES E-D");
        printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS");
        printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
        printf("\n\ncuantas filas deseas?:");
        scanf("%d",&f);
        printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
        printf("\ncuantas columnas deseas?:");
        scanf("%d",&c);

        //MATRIZ D

        printf("\t\nINGRESANDO VALORES DE LA MATRIZ D ");
        printf("\nintroduce los valores de la columna:");
       // scanf("\n%d",&a);
        printf("\nintriduce los valores de la fila:");
        //scanf("\n%d",&a);

        for(i=1;i<=f;i++)
        {
          printf("\n\t");

          for(j=1;j<=c;j++)
          {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizD[i][j]=a;
          }
        }

       //MATRIZ E

       printf("\t\nINGRESANDO VALORES DE LA MATRIZ E ");
       printf("\nintroduce los valores de la columna:");
       //77scanf("\n%d",&a);
       printf("\nintriduce los valores de la fila:");
       //scanf("\n%d",&a);

       for(i=1;i<=f;i++)
       {
         printf("\n\t");

        for(j=1;j<=c;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizE[i][j]=a;
        }
       }

      //OPERACION

      for(i=1;i<=f;i++)
       {

          for(j=1;j<=c;j++)
          {
             matrizF[i][j]= matrizE[i][j] - matrizD[i][j];
             printf("\nTU RESULTADO ES:");
             printf("posicion (%i,%i):",i,j);
             printf("%i",matrizF[i][j]);
          }
       }
         getch();
         getch();
      }
      }

      //MULTIPLICACION();

    if(o==3)
    {
      int m,n,o,p,i,j,k,x,a;
      int matrizX[10][10],matrizY[10][10],matrizZ[10][10];

      printf("\ntu operacion es MULTIPLICACION");
      printf("\n1 X*Y \n2 Y*X");
      printf("\ncomo deseas la MULTIPLICACION:");
      scanf("%d",&x);

      if(x==1)
      {
       printf("\n\tTU FORMA ES X*Y");
       printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS DE LA MATRIZ X");
      printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
      printf("\n\ncuantas filas deseas?:");
      scanf("%d",&m);
      printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
      printf("\ncuantas columnas deseas?:");
      scanf("%d",&n);
      printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS DE LA MATRIZ Y");
      printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
      printf("\n\ncuantas filas deseas?:");
      scanf("%d",&o);
      printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
      printf("\ncuantas columnas deseas?:");
      scanf("%d",&p);

      //MATRIZ X

       printf("\t\nINGRESANDO VALORES DE LA MATRIZ X ");
       printf("\nintroduce los valores de la columna:");
       //scanf("\n%i",&a);
       printf("\nintroduce los valores de la fila:");
       //scanf("\n%i",&a);

       for(i=1;i<=m;i++)
       {
         printf("\n\t");

        for(j=1;j<=n;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizX[i][j]=a;
        }
       }

       //MATRIZ Y

        printf("\t\nINGRESANDO VALORES DE LA MATRIZ Y ");
        printf("\nintroduce los valores de la columna:");
        //scanf("\n%d",&a);
        printf("\nintriduce los valores de la fila:");
        //scanf("\n%d",&a);

       for(i=1;i<=o;i++)
       {
         printf("\n\t");

        for(j=1;j<=p;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizY[i][j]=a;
        }
       }

       //OPERACION

       for (i=1;i<=m;i++)
{
for (j=1;j<=p;j++)
{
matrizZ[i][j]=0; /*Limpia la variable para entrar de nuevo al for*/
for (k=1;k<=n;k++)
{
matrizZ[i][j]=((matrizX[i][k] * matrizY[k][j])+ matrizZ[i][j]);
}
}
}
printf("\n\nLa matriz resultante de la multiplicacion es: \n");

/*Ciclo que imprime la matriz resultante*/
for (i=1;i<=m;i++)
{
printf("\n");

for(j=1;j<=p;j++)
{
  printf("\nTU RESULTADO ES");
  printf("(%i,%i):",i,j);
  printf(" %i ",matrizZ[i][j]);
}
}
getch();
       }

       if(x==2)
      {
       printf("\n\tTU FORMA ES X*Y");
       printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS DE LA MATRIZ X");
      printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
      printf("\n\ncuantas filas deseas?:");
      scanf("%d",&m);
      printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
      printf("\ncuantas columnas deseas?:");
      scanf("%d",&n);
      printf("\n\tINGRESANDO LOS VALORES DE LAS FILAS Y COLUMNAS DE LA MATRIZ Y");
      printf("\n\nEL RANGO DE VALORES DE LA FILA ES DE 2 A 9");
      printf("\n\ncuantas filas deseas?:");
      scanf("%d",&o);
      printf("\nEL RANGO DE VALORES DE LA COLUMNA ES DE 2 A 9");
      printf("\ncuantas columnas deseas?:");
      scanf("%d",&p);

      //MATRIZ X

       printf("\t\nINGRESANDO VALORES DE LA MATRIZ X ");
       printf("\nintroduce los valores de la columna:");
       //scanf("\n%i",&a);
       printf("\nintroduce los valores de la fila:");
       //scanf("\n%i",&a);

       for(i=1;i<=m;i++)
       {
         printf("\n\t");

        for(j=1;j<=n;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizX[i][j]=a;
        }
       }

       //MATRIZ Y

        printf("\t\nINGRESANDO VALORES DE LA MATRIZ Y ");
        printf("\nintroduce los valores de la columna:");
        //scanf("\n%d",&a);
        printf("\nintriduce los valores de la fila:");
        //scanf("\n%d",&a);

       for(i=1;i<=o;i++)
       {
         printf("\n\t");

        for(j=1;j<=p;j++)
        {
           printf("\n\t");
           printf("posicion (%i,%i):",i,j);
           scanf("%i",&a);
           matrizY[i][j]=a;
        }
       }
       }

       //0PERACION

        for (i=1;i<=m;i++)
{
for (j=1;j<=p;j++)
{
matrizZ[i][j]=0; /*Limpia la variable para entrar de nuevo al for*/
for (k=1;k<=n;k++)
{
matrizZ[i][j]=(matrizY[i][k] * matrizX[k][j])+ matrizZ[i][j];
}
}
}

printf("\n\nLa matriz resultante de la multiplicacion es: \n");

/*Ciclo que imprime la matriz resultante*/
for (i=1;i<=m;i++)
{
printf("\n");

for(j=1;j<=p;j++)
{
   printf("\nTU RESULTADO ES");
   printf("(%i,%i):",i,j);
   printf(" %i ",matrizZ[i][j]);
}
}
    getch();
      }

getchar();
}
while(o!=4);
}
