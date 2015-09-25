#include <stdio.h>

#define N 10

print_tab(int* tab, int n){
	int i;
	for (i = 0; i < n; i++){
		if (tab[i] != 0)
			printf("%d ", tab[i]);
	}
	printf("\n");
}

// copie from dans to
int copy(int* from, int* to, int n){
	int i;
	for ( i = 0; i < n; i++ ){
		to[i] = from[i];
	}
}

int dbinom1(int n, int k){
	/* On initialise le premier tableau à 1,0, ... */
	int newTab[N] = {0};
	newTab[0] = 1;
	int oldTab[N];
	print_tab(newTab, N);
	int i,j;
	for ( i = 1 ; i <= n ; i++ ){
		copy(newTab, oldTab, N);
		newTab[0] = 1;
		// calcul de la nouvelle ligne
		for ( j = 1 ; j <= i ; j++ ){
			newTab[j] = oldTab[j-1]+oldTab[j];
		}
		print_tab(newTab, N);
	}
	return newTab[k];
}

int main(){
	printf("Value: %d\n", dbinom1(N, 2));
	return 0;
}
