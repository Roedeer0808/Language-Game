#include <stdio.h>
#include <conio.h>

#define WIDTH 11
#define HEIGHT 11

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

typedef struct Character
{
	int x;
	int y;
	const char* shape;
}Character;

char maze[HEIGHT][WIDTH] =
{
	{'1','1','1','1','1','1','1','1','1','1','1'},
	{'1','0','0','0','0','1','1','1','1','2','1'},
	{'1','1','0','1','0','0','1','1','1','0','1'},
	{'1','1','0','1','1','0','0','1','1','0','1'},
	{'1','1','0','0','1','1','0','0','1','0','1'},
	{'1','1','1','0','1','1','1','0','1','0','1'},
	{'1','1','1','0','0','0','0','1','1','0','1'},
	{'1','1','1','0','0','1','0','1','1','0','1'},
	{'1','1','1','1','1','1','0','1','1','0','1'},
	{'1','1','0','0','0','0','0','0','0','0','1'},
	{'1','1','1','1','1','1','1','1','1','1','1'},
};
// 0 -> 공백
// 1 -> ■
// 2 -> ⊙

void Render()
{
	/*
	for (int i = 0;i < HEIGHT;i++)
	{
		for (int j = 0;j < WIDTH;j++)
		{
			if (maze[i][j] == "0")
			{
				maze[i][j] = " ";
			}
			if (maze[i][j] == "1")
			{
				maze[i][j] = "■";
			}
			if (maze[i][j] == "2")
			{
				maze[i][j] = "⊙";
			}
		}
		//printf("\n");
	}

	for (int i = 0;i < HEIGHT;i++)
	{
		for (int j = 0;j < WIDTH;j++)
		{
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}*/

	//선생님 코드
	for (int i = 0;i < HEIGHT;i++)
	{
		for (int j = 0;j < WIDTH;j++)
		{
			if (maze[i][j] == '0') {
				printf(" ");
			}
			else if (maze[i][j] == '1')
			{
				printf("■");
			}
			else
			{
				printf("⊙");
			}
		}
		printf("\n");
	}
}

int main()
{
	// char maze[11][11]; 내가 만든 코드
	
	Character character = { 1,1,"★" };

	Render();

	
	/*
	// for (int i = 0;i < HEIGHT;i++)
	// {
	// 	for (int j = 0;j < WIDTH;j++)
	// 	{
	// 		printf("%c", maze[i][j]);
	// 	}
	// 	printf("\n");
	// }
	*/

	return 0;
}