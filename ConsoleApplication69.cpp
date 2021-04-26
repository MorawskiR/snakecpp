
#include <iostream>

bool GameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void Setup()
{
    GameOver = false;
	dir = STOP;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}
void Draw()
{
	system("cls"); 
	for (int i = 0; i < width +2 ; i++)
		std::cout << "#";
	std::cout << "\n";

	for (size_t i = 0; i < height; i++)
	{
		for (size_t j = 0; j < width; j++)
		{
			if (j==0)
				std::cout << "#";
			if (i == y && j == x)
				std::cout << "O";
			else if (i == fruitY && j == fruitX)
				std::cout << "F";
			else
				std::cout << " ";

			if (j == (width - 1))
				std::cout << "#";
		}
		std::cout << "\n";
	}
	for (size_t i = 0; i < width + 2 ; i++)
	{ 
		std::cout << "#";
	}
	std::cout << "\n";
}
void Input()
{ 

}
void Logic()
{

}

#include <iostream>

int main()
{
    Setup();
	while (!GameOver)
	{
		Draw();
		Input();
		Logic();
	}
}

