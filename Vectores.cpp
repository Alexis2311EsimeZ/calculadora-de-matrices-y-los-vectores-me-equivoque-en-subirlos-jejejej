#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;
void  menu ();
void leer_opcion(int &opt);
void printVector(int Vector[], int size);
void printVectorF(double Vector[], int size);
void scanVector(int Vector[], int size);
void suma(int v1[3],int v2[3],int *ptr);
void resta(int vector1[3],int vector2[3],int *ptr);
float Escalar (int Vector[], int myV2[],int size);
 void ppVect(int Vector[3],int myVector2[3],int size);
float normaV(int Vector[],int size);
 void ppVect(int Vector[3],int Vector2[3],int size);
void unitario(int vector1[3], int *ptr, double *ptr2);
int main(){
int opt;
float n,e;
 	char rep;
int a[3] = {0,0,0};
int *ptra = &a[0];
int b[3] = {9,6,-2};
int c[3] = {0,0,0};
double cf[3] = {0.0,0.0,0.0};
int *ptrC = &c[0];
double *ptrCf = &cf[0];
	scanVector(a,3);
		scanVector(b,3);
printf("\n Vector 1\n");
printVector(a,3);
printf("\n Vector 2\n");
printVector(b,3);
  do{
  		menu ();
		leer_opcion(opt);
switch(opt){
	case 1:
	suma(a,b,ptrC);
printf("\n suma Vector 1\n");
printVector(c,3); break;
	case 2:
	resta(a,b,ptrC);
printf("\n resta Vector 1\n");
printVector(c,3); break;
	case 3:
n = normaV(a,3);
printf("\n norma Vector  %f \n",n);
break;
 	case 4:
printf(" \n Producto punto");
ppVect(a,b,3);
break;
case 5:
printf("\n \n Producto escalar");
e = Escalar(a,b,3);
printf(" \n producto escalar con raiz: %f ",e);
 break;
 	case 6:
 	printf("\n \n vector unitario \n");
unitario(a,ptra,ptrCf);
break;
default:
    printf("opcion invalida"); break;
 }
 printf("\nDesea hacer otra operacion? S N \n");
rep = getch();
} while((rep=='S') || (rep=='s'));
}
void menu(){
 printf("1. suma\n");
 printf("2. resta\n");
 printf("3. norma\n");
 printf("4. producto punto\n");
  printf("5. producto escalar\n");
   printf("6. vector unitario\n");
 }
 void leer_opcion(int& opt){
 printf("introduce una opcion");
 scanf("%d",&opt);
 }
void printVector(int Vector[],int size){
for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,Vector[i]);
	}
}
void scanVector(int Vector[],int size){
for (int i=0; i<size; i++){
	int valor;
	printf("vector[%d]: \n",i);
	scanf("%d",&valor);
	Vector[i] = valor;
	}
}
void printVectorF(double Vector[],int size){
for (int i=0; i<size; i++){
	printf("vector[%d]: %d\n",i,Vector[i]);
	}
}
void suma(int ve1[3], int ve2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = ve1[i] + ve2[i];
	}
}
void resta(int vector1[3], int vector2[3],int *ptr){
	for(int i = 0; i<3; i++){
		*(ptr+i) = vector1[i] - vector2[i];
	}
}
float normaV (int Vector[3],int size){
	float suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += Vector[i]*Vector[i];
	}printf(" norma sin raiz %f",suma);
	return sqrt(suma);
}
void ppVect (int Vector[3],int Vector2[3],int size){
	float suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += Vector[i]*Vector2[i];
	}
	printf(" \n la suma producto punto: %f", suma);
}
float Escalar (int V[3], int V2[3],int size){
	float suma=0.0;
	for(int i = 0; i<=size; i++){
		suma += V[i]*V[i] +V2[i]*V2[i];
	}printf(" \n raiz de %f",suma);
	return sqrt(suma);
}
void unitario(int v1[3],int *ptr, double *ptr2){
		float raiz=0.0;
	for(int i = 0; i<3; i++){
			raiz += v1[i]*v1[i];
	}
	float raiz2 = sqrt (raiz);
	printf(" El vector unitario es: %f \n a la menos uno 1/%f = %f \n",raiz2,raiz2,1/raiz2);
	for(int i = 0; i<3; i++){
		*(ptr2+1) = *(ptr+i) * 1/raiz2;
		printf(" el vector unitario: %d * 1/%f ",v1[i],1/raiz2);
		printf (" = %f \n",*(ptr2+1));
}
printf("\n");
}
