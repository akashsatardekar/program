#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;
int main()
{
	FILE *fp, *ft;
	char another, choice;
	
	struct student
	{
		char first_name[50], last_name[50];
		char course[100];
		int section;		
	};
	
	struct student e;
	char xfirst_name[50], xlast_name[50];
	long int recsize;
	
	fp=fopen("users.txt","rb+");
	
	if (fp == NULL)
	{
		fp =fopen("users.txt","wb+");
		
		if(fp == NULL)
		{
			puts("Cannot open file");
			return 0;
		}
	}
	
	
	recsize = sizeof(e);
	
	while(1)
	{
		system("cls");
		
		cout << "\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM ======\n\n\n\n"
			 << "\n \t\t\t 1. Add Records"
			 << "\n \t\t\t 2. List Records"
			 << "\n \t\t\t 3. Modify Records"
			 << "\n \t\t\t 4. Delete Records"
			 << "\n \t\t\t 5. Exit Program\n"
			 << "\n\t\t\t Select Your Choice :=> ";
		fflush(stdin);
		choice = getche();
		switch(choice)
		{
			case '1' :
				fseek(fp,0,SEEK_END);
				another = 'Y';
				while(another == 'Y' || another == 'y')
				{
					system("cls");
					cout << "Enter the First Name : ";
					cin >> e.first_name;
					cout << "Enter the Last Name : ";
					cin >>  e.last_name;
					cout << "Enter Course : ";
					cin >> e.course;
					cout << "Enter Section : ";
					cin >> e.section;
					fwrite(&e, recsize, 1,fp);
					cout << "\n Add Another account (Y/N) ";
					fflush(stdin);
					another = getchar();
				}
				break;
			case '2' :
				system("cls");
				rewind(fp);
				cout << "=== View the Records in the database ===\n";
				while (fread(&e,recsize,1,fp) == 1)
				{
					cout << "\n\n" << e.first_name << setw(10) << e.last_name << "\n\n" << e.course << setw(8) << e.section;
				}
				cout << "\n\n";
				system ("pause");
				break;
			case '3' :
				system ("cls");
				another ='Y';
				while (another == 'Y' || another =='y')
				{
					cout << "\n Enter the last name of the student : ";
					cin >> xlast_name;
					rewind(fp);
					while(fread(&e,recsize,1,fp) == 0)
					{
						if (strcmp(e.last_name,xlast_name) == 0)
						{
							cout << "Enter new First Name : ";
							cin >> e.first_name;
							cout << "Enter new Last Name : ";
							cin >>  e.last_name;
							cout << "Enter new Course : ";
							cin >> e.course;
							cout << "Enter new Section : ";
							cin >> e.section;
							fseek(fp, - recsize,SEEK_CUR);
							fwrite(&e, recsize, 1,fp);
							break;
						}
						else
							cout << "Record not Found";
					}
					cout << "\n Modify Another Record (Y/N) : ";
					fflush(stdin);
					another = getchar();
				}
				break;
			case '4':
				system("cls");
				another = 'Y';
				while (another == 'Y' || another == 'y')
				{
					cout << "\n Enter the last name of the student to be deleted: ";
					cin >> xlast_name;
					
					ft = fopen("temp.dat","wb");
					
					rewind(fp);
					while (fread (&e, recsize,1,fp)==1)
					{
						if(strcmp(e.last_name,xlast_name) != 0)
						{
							fwrite(&e ,recsize,1,ft);
						}
					}
					fclose(fp);
					fclose(ft);
					remove("user.txt");
					rename("temp.dat","users.txt");
					
					fp = fopen("user.txt","rb+");
					
					cout << "\n Delete Another Record (Y/N) : ";
					fflush(stdin);
					another = getchar();
				}
				break;
			case '5' :
				fclose(fp);
				cout << "\n\n\t\t	THANK YOU FOR USING THIS SOFTWARE\n\n";
				exit(0);
		}
	}
	system("pause");
	return 0;
}
