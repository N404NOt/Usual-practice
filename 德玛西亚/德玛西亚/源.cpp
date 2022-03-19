#include<stdio.h>
int main()
{
	int a;
	char grade;
	scanf_s("%d",&a);
	rewind(stdin);
	switch (a)
	{
	case 5:grade = 'E'; break;
	case 6:grade = 'D'; break;
	case 7:grade='C'; break;
	case 8:grade='B'; break;
	case 9:
	case 10:grade='A'; break;
	default:grade = 'F';
	}
	if (grade == 'F')
	
		printf("Error!Input again!");
	
	else
		printf("Your grade is%c",grade);

	return 0;
}


