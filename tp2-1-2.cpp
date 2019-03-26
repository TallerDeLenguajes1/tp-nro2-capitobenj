#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define N 4
#define M 5
int main(void){
	int f,c;
	int cont=0;
	double *p;
	double mt[N][M];
	//p=&mt[0][0];
	for(f=0;f<N*M;f++){
		if (f<=4)
		{
			printf("Fila:0, Columna:%d  : %u\n\r",cont , *(mt+f));
			if (cont>=4)
			{
				cont=0;
				printf("\n\r");
			}
			else{
				cont++;
			}
		}
		else if (f<=9 && f>4){
			printf("Fila:1, Columna:%d  : %u\n\r",cont , *(mt+f));
			if (cont>=4)
			{
				cont=0;
				printf("\n\r");
			}
			else{
				cont++;
			}
		}
		else if (f<=14 && f>9){
			printf("Fila:2, Columna:%d  : %u\n\r",cont , *(mt+f));
			if (cont>=4)
			{
				cont=0;
				printf("\n\r");
			}
			else{
				cont++;
			}
		}
		else if (f<=20 && f>14){
			printf("Fila:3, Columna:%d  : %u\n\r",cont , *(mt+f));
			if (cont>=4)
			{
				cont=0;
			}
			else{
				cont++;
			}
		}
	}
	return 0;
}
