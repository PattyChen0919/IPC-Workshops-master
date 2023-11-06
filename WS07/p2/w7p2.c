/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #7 (P2)
Full Name  : Pei-Ti, Chen
Student ID#: 133237222
Email      : pchen81@myseneca.ca
Section    : NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAXIMUM_PATH 70
#define MINIMUM_PATH 10
#define MAX_NUM_LIVES 10
#define MIN_NUM_LIVES 1
#define SET 5
#define MIN_NUM_MOVE 1
#define BOMB '!'
#define TREASURE '$'
#define BOTH '&'
#define NON '.'

struct PlayerInfo
{
	int num_lives;
	char character_symbol;
	int num_treasure;
	int positions[MAXIMUM_PATH];
};

struct GameInfo
{
	int max_num_move;
	int path_length;
	int bombs[MAXIMUM_PATH];
	int treasure[MAXIMUM_PATH];
};


int main(void)
{
	struct PlayerInfo player;
	struct GameInfo game;
	int i, j;
	int move;
	int treasureCount = 0;
	int flag = 1, nextMove = 1;
	char secLine[MAXIMUM_PATH];

	for (i = 0; i < MAXIMUM_PATH; i++)
	{
		player.positions[MAXIMUM_PATH] = 0;
	}

	printf("================================\n"
		   "         Treasure Hunt!\n"
		   "================================\n\n");
	printf("PLAYER Configuration\n"
		   "--------------------\n");
	printf("Enter a single character to represent the player: ");
	scanf(" %c", &player.character_symbol);

	do
	{
		printf("Set the number of lives: ");
		scanf("%d", &player.num_lives);
		if (player.num_lives < MIN_NUM_LIVES || player.num_lives > MAX_NUM_LIVES)
		{
			printf("     Must be between %d and %d!\n", MIN_NUM_LIVES, MAX_NUM_LIVES);
		}
	} while (player.num_lives < MIN_NUM_LIVES || player.num_lives > MAX_NUM_LIVES);

	player.num_treasure = 0;

	for (i = 0; i < MAXIMUM_PATH; i++)
	{
		player.positions[i] = 0;
	}
	printf("Player configuration set-up is complete\n\n");

	printf("GAME Configuration\n"
	       "------------------\n");

	do
	{
		flag = 0;
		printf("Set the path length (a multiple of %d between %d-%d): ", SET, MINIMUM_PATH, MAXIMUM_PATH);
		scanf("%d", &game.path_length);
		if (game.path_length < MINIMUM_PATH || game.path_length > MAXIMUM_PATH|| game.path_length % 5 != 0)
		{
			printf("     Must be a multiple of %d and between %d-%d!!!\n", SET, MINIMUM_PATH, MAXIMUM_PATH);
		}
		else
		{
			flag = 1;
		}
	} while (!flag);

	do {
		printf("Set the limit for number of moves allowed: ");
		scanf("%d", &game.max_num_move);
		if (game.max_num_move < player.num_lives || game.max_num_move >(int)(0.75 * game.path_length))
		{
			printf("    Value must be between %d and %d\n", player.num_lives, (int)(0.75 * game.path_length));
		} 
	} while (game.max_num_move < player.num_lives || game.max_num_move >(int)(0.75 * game.path_length));

	printf("\nBOMB Placement\n"
		   "--------------\n"
		   "Enter the bomb positions in sets of %d where a value\n", SET);
	printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path_length);

	for (i = 0; i < game.path_length; i += 5)
	{
		printf("   Positions [%2d-%2d]: ", i + 1, i + 5);

		for (j = i; j < i + 5; j++)
		{
			scanf("%d", &game.bombs[j]);
		}
	}
	printf("BOMB placement set\n");

	printf("\nTREASURE Placement\n"
		   "------------------\n"
		   "Enter the treasure placements in sets of %d where a value\n", SET);
	printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
	printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path_length);

	for (i = 0; i < game.path_length; i += 5)
	{
		printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
		for (j = i; j < i + 5; j++)
		{
			scanf("%d", &game.treasure[j]);
		}
	}
	printf("TREASURE placement set\n\n"
		   "GAME configuration set-up is complete...\n\n");

	printf("------------------------------------\n"
		   "TREASURE HUNT Configuration Settings\n"
		   "------------------------------------\n");

	printf("Player:\n");
	printf("   Symbol     : %c\n", player.character_symbol);
	printf("   Lives      : %d\n", player.num_lives);
	printf("   Treasure   : [ready for gameplay]\n");
	printf("   History    : [ready for gameplay]\n");

	printf("\nGame:\n");
	printf("   Path Length: %d\n", game.path_length);
	printf("   Bombs      : ");
	for (i = 0; i < game.path_length; i++)
	{
		printf("%d", game.bombs[i]);
	}
	printf("\n   Treasure   : ");
	for (i = 0; i < game.path_length; i++)
	{
		printf("%d", game.treasure[i]);
	}

	printf("\n\n====================================\n"
		   "~ Get ready to play TREASURE HUNT! ~\n"
		   "====================================\n\n");

	printf("  ");
	for (i = 0; i < game.path_length; i++)
	{
		secLine[i] = '-';
		printf("%c", secLine[i]);
	}
	printf("\n");
	printf("  ");
	for (i = 0; i < game.path_length; i++)
	{
		if (!((i + 1) % 10)) // (i % 10 == 0)
		{
			printf("%d", (i + 1) / 10);
		}
		else
		{
			printf("|");
		}
	}
	printf("\n");
	printf("  ");
	for (i = 0; i < game.path_length; i++)
	{
		if ((i + 1) % 10)
		{
			printf("%d", (i + 1) % 10);
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");


	printf("+---------------------------------------------------+\n");
	printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", 
		player.num_lives, treasureCount, game.max_num_move);
	printf("+---------------------------------------------------+\n");

	do
	{
		nextMove = 0;
		do
		{
			printf("Next Move [%d-%d]: ", MIN_NUM_MOVE, game.path_length);
			scanf("%d", &move);

			if (move < MIN_NUM_MOVE || move > game.path_length)
			{
				flag = 0;
				printf("  Out of Range!!!\n");
			}
			else if (move >= MIN_NUM_MOVE && move <= game.path_length)
			{
				flag = 1;
				player.positions[move - 1] = 1; // 1 means move 
			}
		} while (!flag);
		printf("\n");

		if (move >= MIN_NUM_MOVE && move <= game.path_length)
		{


			if (secLine[move - 1] != '-')
			{
				printf("===============> Dope! You've been here before!\n\n");
			}
			else if (player.positions[move - 1] && !(game.bombs[move - 1]) && !(game.treasure[move - 1]))
			{
				printf("===============> [%c] ...Nothing found here... [%c]\n\n", NON, NON);
				game.max_num_move--;
				secLine[move - 1] = NON;
			}
			else if (player.positions[move - 1] && game.bombs[move - 1] && !(game.treasure[move - 1]))
			{
				printf("===============> [%c] !!! BOOOOOM !!! [%c]\n\n", BOMB, BOMB);
				player.num_lives--;
				game.max_num_move--;
				secLine[move - 1] = BOMB;
			}
			else if (player.positions[move - 1] && game.bombs[move - 1] && game.treasure[move - 1])
			{
				printf("===============> [%c] !!! BOOOOOM !!! [%c]\n", BOTH, BOTH);
				printf("===============> [%c] $$$ Life Insurance Payout!!! [%c]\n\n", BOTH, BOTH);
				player.num_lives--;
				game.max_num_move--;
				treasureCount++;
				secLine[move - 1] = BOTH;
			}
			else if (player.positions[move - 1] && !(game.bombs[move - 1]) && game.treasure[move - 1])
			{
				printf("===============> [%c] $$$ Found Treasure! $$$ [%c]\n\n", TREASURE, TREASURE);
				game.max_num_move--;
				treasureCount++;
				secLine[move - 1] = TREASURE;
			}
			if (player.num_lives == 0)
			{
				printf("No more LIVES remaining!\n\n");
			}
			if (game.max_num_move == 0)
			{
				printf("No more MOVES remaining!\n\n");
			}
			for (i = 0; i < move - 1; i++)
			{
				printf(" ");
			}
			printf("  ");
			printf("%c\n", player.character_symbol);
		}

		printf("  ");
		for (i = 0; i < game.path_length; i++)
		{
			printf("%c", secLine[i]);
		}
		printf("\n");
		printf("  ");
		for (i = 0; i < game.path_length; i++)
		{
			if (!((i + 1) % 10)) // (i % 10 == 0)
			{
				printf("%d", (i + 1) / 10);
			}
			else
			{
				printf("|");
			}
		}
		printf("\n");
		printf("  ");
		for (i = 0; i < game.path_length; i++)
		{
			if ((i + 1) % 10)
			{
				printf("%d", (i + 1) % 10);
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");


		printf("+---------------------------------------------------+\n");
		printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n",
			    player.num_lives, treasureCount, game.max_num_move);
		printf("+---------------------------------------------------+\n");

		if (player.num_lives == 0 || game.max_num_move == 0)
		{
			nextMove = 1;
		}
	} while (!nextMove);

	printf("\n");
	printf("##################\n"
		   "#   Game over!   #\n"
		   "##################\n\n"
	   	   "You should play again and try to beat your score!\n");

	return 0;
}
