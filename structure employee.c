#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
	int empno;
	char department_name[30];
    char name[30];
    int age;
    char phone_no[10];
    int salary;
} Employee;
 
int main()
{
    int i, n=3;
 
    Employee employees[n];
  
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
	{
		employees[i].empno=i; 
        printf("Employee %d:- \n",i+1);
        printf("department_name: ");
        scanf("%s",employees[i].department_name);
        printf("Name: ");
        scanf("%s",employees[i].name);
        printf("Age: ");
        scanf("%d",&employees[i].age);
        printf("Phone Number: ");
        scanf("%s",&employees[i].phone_no);
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        printf("\n");
    }
    
    printf("Name\tAge\tPhone Number\tSalary\n");    
    for(i=0; i<n; i++)
	{
        printf("%s\t",employees[i].name); 
        printf("%d\t",employees[i].age);
        printf("%s\t",employees[i].phone_no);        
        printf("%d\t",employees[i].salary); 
    	printf("\n");
    } 
    return 0; 
}
