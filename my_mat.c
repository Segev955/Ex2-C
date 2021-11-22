#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define true 1
#define false 0
#define num 10

int fun1(int a[][]) { //if a
	for (int i = 1; i<=num; i++) {
		for (int j = 1; j<=num; j++) {
			scanf ("%d", &a[i][j]);
		}
	}
	return a;
}
int fun2(int i, int j,int a[][]) { //if b
	if (algo(a,i,j) > 0) {
		return true;
	}
	return false;
}

int fun3(int i, int j,int a[][]) { //if c
	if (algo(a,i,j) > 0) {
		return algo(a,i,j);
	}
	return -1;
}


int algo (int a[][],int b,int c) {
	//int arr[10][10] = a;
	for (int k = 1; k<=num; k++) {
		for (int i = 1; i<=num; i++) {
			for (int j = 1; j<=num; j++) {
				int x = a[i][k]+a[k][j];
				if (x == 0) {
					continue;
				}
				if (a[i][j] == 0) {
                        		a[i][j] = x;
                    		}
				if (a[i][j] > x) {
					a[i][j] = x;
				}
			}
		}
	}	
	return a[b][c];
}
