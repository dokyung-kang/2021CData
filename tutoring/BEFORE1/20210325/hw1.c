  
{
	int month;
	//printf("������ ����ΰ���?: ");
	scanf("%d", &month);

	if (3 <= month && month <= 5)
		printf("spring");
	else if (6 <= month && month <= 8)
		printf("summer");
	else if (9 <= month && month <= 11)
		printf("fall");
	else
		printf("winter");
}


/*
1. ���� �ǹ��ϴ� ������ �ϳ� �Է¹ް�,
�ش��ϴ� ���� �̸��� ����Ѵ�.
ex. ������ ����ΰ���?: 12
	 winter
*/