#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you , char comp)
{
	//ss  ww gg 
	if (you == comp)
	{
		return 0;
	}
	//sg
	//sw
	if (you == 's' && comp == 'g')
	{
		return -1;
	}
	if (you == 's' && comp == 'w')
	{
		return 1;
	}
	//wg ws
	if (you == 'w' && comp =='g')
	{
		return 1;
	}
	if (you == 'w' && comp == 's')
	{
		return -1;
	}
	//gw gs
	if (you == 'g' && comp == 'w')
	{
		return -1;
	}
	if (you == 'g' && comp == 's')
	{
		return 1;
	}

}
int main() 
{
	char you , comp;
	int n;
	srand(time(0));
	n = rand() % 100 + 1  ;
	if (n > 33)
	{
		comp = 's';
	}
	else if (n > 33 && n < 66)
	{
		comp = 'g';
	}
	else
	{
		comp = 'w';
	}
	printf("Enter 's' for snake , 'g' for gun and 'w' for water :");
	scanf("%c",&you);
	int res= snakewatergun(you , comp);
	printf("you choose %c and computer choose %c\n",you,comp);
	if (res == 0)
	{
		printf("Game draw !!");
	}
	else if (res ==1)
	{
		printf("You Win!");
	}
	else
	{
		printf("You Lose!");
	}
}
