#include <stdio.h>

int P(int n, int r) { // ���� 
	int a = 1;
	int i;
	if (r == 0) return 1;
	for (i = n; i > n-r; i--) {
		a *=i;
	}
	return a;
}

int C(int n, int r) { // ���� 
	int a = 1;
	int i;
	if (r == 0) return 1;
	for (i = n; i > n-r; i--) {
		a*=i;
	}
	for (i = r; i > 0; i--) {
		a/=i;
	}
	return a;
}

int PI(int n, int r) { // �ߺ����� 
	int a = 1;
	int i;
	if (r == 0) return 1;
	for (i = 0; i < r; i++) {
		a*=n;
	}
	return a;
}

int H(int n, int r) { // �ߺ����� 
	int a = 1;
	int i;
	if (r == 0) return 1;
	for (i = n+r-1; i > n-1; i--) {
		a*=i;
	}
	for (i = r; i > 0; i--) {
		a/=i;
	}
	
	return a;
}
