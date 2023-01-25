#include"Enemy.h"
#include<stdio.h>
int main()
{
	Enemy* enemy = new Enemy();
	int input;
	while (true)
	{
		printf("0or1or2or3‚ð‚¨‚µ‚Ä‚­‚¾‚³‚¢");
		scanf_s("%d", &input);
		if (input == 0)break;
		enemy->Update();
		enemy->Draw();
	}
	delete enemy;

	return 0;
}