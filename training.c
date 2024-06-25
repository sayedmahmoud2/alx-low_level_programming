#include <stdio.h>
/**
* main - enrty point
* Descr: file for training
* Return: Always 0 (Success)
*/
int sum(int n1, int n2, int n3);
int main(void)
{

	int x = sum(1, 2, 3);

	printf("%d\n", x);


}

int sum(int n1, int n2, int n3)
{

	int result = n1 + n2 + n3;

	return (result);

	return (0);
}
