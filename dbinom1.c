#include <stdio.h>

int dbinom1(int n, int k){
	if ( n == k ){
		return 1;
	} else if ( k == 1 ){
		return 1;
	} else {
		return dbinom1(n-1, k) + dbinom1(n-1, k-1);
	}
}

int main(){
	int n = 33;
	int k = n/2;
	printf("value: %d\n", dbinom1(n,k));
	return 0;
}
