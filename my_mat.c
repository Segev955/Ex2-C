#include <stdio.h>
#include <math.h>
#include "my_mat.h"
#define true 1
#define false 0
#define num 10
#define infinity 0

//this function gets a matrix and fill it with input from the user
void fun1(int a[num][num]) { //if a
	for (int i = 0; i<num; i++) {
		for (int j = 0; j<num; j++) {
			scanf ("%d", &a[i][j]);
		}
	}
}
//this function checks if there is a path from i to j
int fun2(int i, int j,int a[num][num]) { //if b
	if (algo(a,i,j) > 0) {
		return true;
	}
	return false;
}
//this function returns the shortest path from i to j by using the function algo if there is no path the function returns -1
int fun3(int i, int j,int a[num][num]) { //if c
	if (algo(a,i,j) > 0) {
		return algo(a,i,j);
	}
	return -1;
}

//this function calculate the distance in the graph according to the video that was recommended to solve this assigment https://www.youtube.com/watch?v=oNI0rf2P9gE
int algo (int a[num][num],int b,int c) {
	for (int k = 0; k<num; k++) {
		for (int i = 0; i<num; i++) {
			for (int j = 0; j<num; j++) {
				int x = a[i][k]+a[k][j];
				if (a[i][k] == infinity || a[k][j] == infinity) {
					x = infinity;
				}
				if (x == 0 || i == j || i == k || j == k) {
					continue;
				}
				if (a[i][j] == infinity) {
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
