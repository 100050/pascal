#include <stdio.h>
#include "ps.h"

int main() {
	int n,j,i,k;
	
	scanf("%d", &n);
	
	for (i = 0; i<=n; i++) {
		for (j =1; j<= (n-i); j++) {
			printf(" ");
		}
		for (k=0; k<=i; k++) {
			printf("%d ", C(i,k));
		}
		printf("\n");
	}
}
