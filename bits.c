#include <stdio.h>

int main(){
	int a, b, c, d, e, f, g, h;
	a = 54;
	b = 2;

	c = a>>2;
	d = a & b;
	e = ~a;
	f = ~b + 1;
	g = a ^ ((a ^ b ) & ((a-b) >> 31));
	h = (1 << 31) >> 31;
	printf("%d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h);
	return 0;
};


