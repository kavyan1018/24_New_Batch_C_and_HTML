// #include<stdio.h>
// #include<conio.h>

// void main()
// {
//     int a,b,c;


//     printf("Enter the Cost Price :-");
//     scanf("%d",&a);

//     printf("Enter the  Selling Price :-");
//     scanf("%d",&b);


//     if (a > b)
//     {
//            printf("You are in Loss !");

//     }
//     else
//     {
//         printf("You are in profit !");
//     }   
// }


// Number is devisibal by 3 and 11 ;


#include<stdio.h>
#include<conio.h>

void main()
{
    int a;

    printf("Enter the Number which u want to divide by 3 and 11 :-");
    scanf("%d",&a);


    if ((a % 3 == 0) && (a % 11 == 0))
    {
        printf("Number is Divisiable by 3 and 11 !");
    }
    else
    {
        printf("Number is not Divisiable by 3 and 11 !");
    }
}