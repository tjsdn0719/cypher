#include <stdio.h>
main()
{
	char pw[22];
	int i;
	printf("암호를 입력하시오. : ");
	scanf("%s",pw);
	printf("결과 1 :");
	for(i = 0; pw[i] != NULL; i++)
		printf("%c",pw[i] + 2); 
	printf("\n결과 2 : ");
	for(i = 0; pw[i] != NULL; i++)
		printf("%c", (pw[i] * 7) % 80 + 48);
	return 0;
}	
