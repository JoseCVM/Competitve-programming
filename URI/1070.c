#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	if(x%2 ==0)x++;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",x,x+2,x+4,x+6,x+8,x+10);
	return 0;
}
