#include <stdio.h>
main()
{
	char pw[22];
	int i;
	printf("��ȣ�� �Է��Ͻÿ�. : ");
	scanf("%s",pw);
	printf("��� 1 :");
	for(i = 0; pw[i] != NULL; i++)
		printf("%c",pw[i] + 2); 
	printf("\n��� 2 : ");
	for(i = 0; pw[i] != NULL; i++)
		printf("%c", (pw[i] * 7) % 80 + 48);
	return 0;
}	
