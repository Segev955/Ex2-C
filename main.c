#include <stdio.h>
#include "my_mat.h"
#define true 1
#define false 0
#define num 10

int main() {
	char x;
	int a[num][num];
	int i,j;
	while (x != 'D') {
		scanf("%c", &x);
		if (x == 'A') {
			a = fun1(a);
		}
		if (x == 'B') {
			scanf("%d %d", &i, &j);
			if (fun2(i,j,a) == true) {
				printf ("True");
			}
			else {
				printf ("False");
			}
		}
		if (x == 'C') {
			scanf("%d %d", &i, &j);
			ans = fun3(i,j,a);
			if (fun3(i,j) == -1) {
				printf ("-1");
			}
			else {
				print ("%d", ans);
			}
		}
	}
}
