//Otávio Fernandes Caberlin - 195834
#include <stdio.h>

int main()
{
int n1,n2,n3;

scanf("%d",&n1);
scanf("%d",&n2);
scanf("%d",&n3);

printf("A = %d, B = %d, C = %d\n",n1,n2,n3);
printf("A = %10d, B = %10d, C = %10d\n",n1,n2,n3);
printf("A = %010d, B = %010d, C = %010d\n",n1,n2,n3);
printf("A = %-10d, B = %-10d, C = %-10d\n",n1,n2,n3);

return 0;
}
