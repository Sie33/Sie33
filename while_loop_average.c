#include <stdio.h>
/** this program allow the user to input number and obtain an avarage 
 * while loop
 */
int main(void)
{
	int i = 0;
	int total = 0;
	int avarage = 0;
	int number = 0;
	int total_numbers = 0;
printf("how many values to you want to enter: ");
scanf("%d" &total_numbers);	
	
while (i <= total_numbers)
{
	printf("enter number %d: " i+1);
		scanf("%d" &number);
	total = total + number;	
		i++;
}
printf("total: %d" total);
printf("avarage: %d" total/total_numbers);

return 0;
}
