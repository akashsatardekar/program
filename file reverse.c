#include<stdio.h>
#define DATA_SIZE 1000
int main()
{
	char data[DATA_SIZE];
	char ch, fname[30], newch[500];
    int i=0, j, COUNT=0;
	FILE *fp;      
	fp= fopen("fresh.txt","w");
	printf("enter String: ");
    fgets(data, DATA_SIZE, stdin);	
	fputs(data,fp);    
    fclose(fp);
    
    fp= fopen("fresh.txt","r");
   
    while(ch != EOF)
    {
        COUNT++;
        //putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("The content in reverse order is : ");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }    
    fclose(fp);    
    return 0;
}
