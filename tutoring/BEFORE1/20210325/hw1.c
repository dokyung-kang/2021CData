  
{
	int month;
	//printf("지금은 몇월인가요?: ");
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
1. 월을 의미하는 정수를 하나 입력받고,
해당하는 계절 이름을 출력한다.
ex. 지금은 몇월인가요?: 12
	 winter
*/