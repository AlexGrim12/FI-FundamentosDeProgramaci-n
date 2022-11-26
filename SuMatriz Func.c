#include <stdio.h>

#define MAX 10
int dimension(){
	int d;
	scanf("%i",&d);
	return d;
}
float pedir_datos(float vectorA[][MAX],int fil, int col){
	int i=0, j=0;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\n[%i][%i]: ",i+1,j+1);
			scanf("%f",&vectorA[i][j]);	
		}
	}
}
int impr_matriz(float vectorA[][MAX], int col, int fil){
	int i=0, j=0;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("\t %.2f",vectorA[i][j]);	
		}
		printf("\n");
	}
}
int suma_matriz(float m1[][MAX], float m2[][MAX], float m3[][MAX], int fil, int col){
	int i=0, j=0;
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			m3[i][j]=m1[i][j]+m2[i][j];	
		}
	}	
}
float maTrans(float m[][MAX], int fil, int col){
	int i=0, j=0;
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			printf("\t%.2f", m[j][i]);
		}
		printf("\n");
	}
}
int main(){
	int c1, f1, c2, f2;
	printf("Cuantas filas M1?\n");
	f1=dimension();
	printf("Cuantas columnas M1?\n");
	c1=dimension();
	printf("Cuantas filas M2?\n");
	f2=dimension();
	printf("Cuantas columnas M2?\n");
	c2=dimension();
	if((f1==f2)&&(c1==c2)){
		int M1[f1][c1], M2[f1][c1], M3[f1][c1];
		printf("Dame datos M1\n");
		pedir_datos(M1,f1,c1);
		printf("Dame datos M2\n");
		pedir_datos(M2,f1,c1);
		suma_matriz(M1,M2,M3,f1,c1);
		printf("SuMatriz\n");
		impr_matriz(M3,f1,c1);
		printf("MaTrans\n");
		maTrans(M3, f1, c1);
	}
}	







