#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum,sub,mult,div,num;
    printf("enter two numbers \n");
    scanf("%d%d",&a,&b);
    printf("enter your choice,\n1.addition \n2.subtraction \n3.multipliction \n4.division \n");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
        sum=a+b;
        printf("addtion is: %d",sum);
        break;
        case 2:
        sub=a-b;
        printf("subtraction is: %d",sub);
        break;
        case 3:
        mult=a*b;
        printf("multipliction is: %d",mult);
        break;
        case 4:
        div=a/b;
        printf("division is: %d",div);
        break;

        default:
            printf("invalid choice");
            break;
    }
    getch();
    return 0;

}
    