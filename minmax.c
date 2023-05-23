#include<stdio.h>

int main()
{
	int num1, num2;
	printf("请输入两个数：\n");
	scanf("%d %d", &num1, &num2);
	if(num1 > num2){
		printf("%d\n", num1);
	}
	else{
		printf("%d\n", num2);
	}
	

	return 0;
}

