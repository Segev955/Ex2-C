#include <stdio.h>
#include "my_mat.h"
#define true 1
#define false 0
#define num 10

int main() {
	char x = 'a';
	int a[num][num];
	int i,j;
	int ans;
	while (x != 'D') {
		scanf("%c", &x);
		if (x == 'A') {
			fun1(a);
		}
		if (x == 'B') {
			scanf("%d %d", &i, &j);
			if (fun2(i,j,a) == true) {
				printf ("True");
				printf("\n");
			}
			else {
				printf ("False");
				printf("\n");
			}
		}
		if (x == 'C') {
			scanf("%d %d", &i, &j);
			ans = fun3(i,j,a);
			if (fun3(i,j,a) == -1) {
				printf ("-1");
				printf("\n");
			}
			else {
				printf ("%d", ans);
				printf("\n");
			}
		}
	}
}
