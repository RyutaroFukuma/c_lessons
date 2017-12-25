#include <stdio.h>
/*

演算子
+ - * / %(余り)

*/

int main(void) {

	int x;
	x = 10 % 3; /* 1 */
	x += 3; /* 4 */	
	x ++; /* 5 */

	printf("%d\n", x);
	return 0;

}
