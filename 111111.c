#include<iostream>
#include<math.h>
int main()
{
	float x,y;
	for(y = 1.5; y > -1.5; y -= 0.1) {
		for(x = -1.5; x < 1.5; x += 0.05) {
			float a = x * x + y * y - 1;
			if (a * a * a - x * x * y * y * y <= 0.0){
				putchar('*');
			} else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
	printf(" I LOVE YOU <3\n");
	return 0;	
}
