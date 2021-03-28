#include<stdio.h>
int find_lcm(int a, int b)  
{
    static int temp = 1;    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
int main()
{
    int a, b, lcm;
    printf("Enter frst number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    lcm = find_lcm(a,b);    // function call
    printf("LCM of %d and %d = %d", a, b, lcm);
    return 0;
}


