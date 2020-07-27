//Defining a structure employee containing the employee of an organization's information
//it has 20 employees, therefore 20 input and output and 20 array of structure


#include<stdio.h>
#include<stdlib.h>
struct employee
{
	char empname[30];
	int empage;
	int empno;
	int empsalary;
};
int main()
{
	struct employee e[20];
	int i;
    printf("Enter: \nemployee name   employee age   employee phone number   employee salary\nFor employees of the organization:\n");
	for(i=0;i<20;i++)
	{
		//fgets(e[i].empname,30,stdin);
		scanf("%s",&e[i].empname);
		scanf("%d",&e[i].empage);
		scanf("%d",&e[i].empno);
		scanf("%d",&e[i].empsalary);
	}
	printf("\nEmployee of the organization:-\n");
	printf("\n\nemployee name   employee age   employee phone number   employee salary\n\n");
	for(i=0;i<20;i++)
	{
		printf("%s  ",e[i].empname);
		printf("%d   ",e[i].empage);
		printf("%d   ",e[i].empno);
		printf("%d\n",e[i].empsalary);
		printf("\n");
	}
	return 0;
}
