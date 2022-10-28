#include <iostream>
#include <cstdlib>
#include <ctime>

int GuessCount = 0;
int MaxGuesses = 5;

int main()
{
	srand(time(0));

	int RandomNumber;
	bool Won = false;

	std::string Difficulty;

	std::cout << "Select difficulty: ";
	std::cin >> Difficulty;

	if (Difficulty == "easy")
	{
		RandomNumber = 1 + (rand() % 50);
	}
	else if (Difficulty == "medium")
	{
		RandomNumber = 1 + (rand() % 100);
	}
	else if (Difficulty == "hard")
	{
		RandomNumber = 1 + (rand() % 500);
	}
	else
	{
		system("cls");
		system("color 04");
		std::cout << "Invalid difficulty" << std::endl;
		return 0;
	}

	system("cls");

	int Guess = 0;

	while (GuessCount + 1 <= MaxGuesses)
	{
		
		if (Guess > RandomNumber)
		{
			std::cout << "Number is lower" << std::endl;
		}

		if (Guess < RandomNumber)
		{
			std::cout << "Number is higher" << std::endl;
		}

		std::cout << "Guesses remaining: " << MaxGuesses - GuessCount << "\nEnter you guess: ";
		std::cin >> Guess;

		if (Guess == RandomNumber)
		{
			Won = true;
			break;
		}

		system("cls");
		GuessCount++;
	}

	system("cls");

	if (Won == true)
	{
		std::cout << "You won!" << std::endl;
	}

	if (Won == false)
	{
		std::cout << "You lost \nThe number was: " << RandomNumber << std::endl;
	}
}