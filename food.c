#include <stdio.h>
int main()
{
int m=0;
printf("enter your choice: \n Pizza,Rs 239 \n Burger,Rs 129 \n Pasta,Rs 179 \n French Fries,Rs 99 \n Sandwich,Rs 149");

scanf(" %d",&m);
//passing choice in switch case
switch (m)
{
case 1:
printf("Food Item-Pizza\n");
printf("Price-Rs 239");
break;
case 2:
printf("Food Item-Burger\n");
printf("Price-Rs 129");
break;
case 3:
printf("Food Item-Pasta\n");
printf("Price-Rs 179");
break;
case 4:
printf("Food Item-French Fries\n");
printf("Price-Rs 99");
break;
case 5:
printf("Food Item-Sandwich\n");
printf("Price-Rs 149");
break;

default:
printf("Invalid input");
break;
}
return 0;
}
