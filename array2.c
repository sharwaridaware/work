#include <stdio.h>
int main()
{
	printf(" ABCD \n");
	int arr1[5], arr2[5];
	printf("Enter the elements of array: \n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i];
	}
	printf("\n");
	printf("Copied Array 2 is \n");
	for (int i = 0; i < 5; i++)
	{
	printf("%d\n", arr2[i]);
	}
	
	int odd = 0;
	int even = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr1[i] % 2 == 0)
	{
		even++;
	}
	else
	{
		odd++;
	}
}
	
printf("\nOdd Numbers in Array: %d\nEven Numbers in Array: %d\n", odd, even);
printf("\nReverse Array is\n");
for (int i = 4 ; i >= 0; i--)
{
	printf("%d\n", arr1[i]);
}
printf("\n");
int arr3[3][3];
printf("Enter the Elements of 2D Array\n");
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
	scanf("%d", &arr3[i][j]);
	}
}
printf("\n");
int pos = 0, neg = 0, zero = 0;
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
	if (arr3[i][j] > 0)
	{
		pos++;
	}
	else if (arr3[i][j] < 0)
	{
		neg++;
	}
	else
	{
		zero++;
	}
}
}
printf("In 2D array \nPositive Elements: %d\nNegative Elements: %d\nZero Elements: %d\n", pos,
neg, zero);

return 0;
}
