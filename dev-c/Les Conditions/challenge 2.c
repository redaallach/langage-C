#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	printf("entrez la valeur de x");
	scanf("%d",&x);
	if(x%2 == 0){
		printf("paire");
		
	}
	else{
		printf("impaire");
		
	}
	return 0;
}
