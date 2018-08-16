#include <cassert>
#include <fstream>
#include "AI.h"


struct scoreBoard
{
	std::string playerName;
	int score;

};




int main()
{
	srand((unsigned int)time(nullptr));
	AI bruce;

	std::cout << "Welcome to the number guessing game" << std::endl << std::endl;
	std::cout << "It's simple you guess a number between 1 and 1000, if you get it you win" << std::endl;
	std::cout << "If you guess is to big it will be told to guess lower and if you guess to low you will be told to guess higher" << std::endl;
	std::cout << "the aim is to guess the number in the least guesses" << std::endl << std::endl;
	system("pause");
	system("cls");


	bruce.run();
	

    
	std::cout << "now make your guess " << std::endl;
	std::cout << "guess " << std::endl;

	
	int randomeValue;
	int guessedNumber = 0;
	int numberOfGuesses = 0;
	int finalScore = 0;
	bool outOfOrder = true;
	const int arraySize = 5;
	std::string name;
	randomeValue = rand() % 1000 + 1;

	scoreBoard highScoreTable[arraySize];

	highScoreTable[0].playerName = "Ed";
	highScoreTable[1].playerName = "Andrew";
	highScoreTable[2].playerName = "Brent";
	highScoreTable[3].playerName = "Nat";
	highScoreTable[4].playerName = "Madi";

	for (int i = 0; i < arraySize; i++)
	{
		highScoreTable[i].score = rand();

	}

	finalScore = numberOfGuesses;


	srand((unsigned int)time(nullptr));

	while (randomeValue != guessedNumber)
	{

		std::cin >> guessedNumber;

		if (std::cin.fail())
		{
			std::cout << "you have entered an invalid value" << std::endl;
			std::cout << "guess again " << std::endl;

			std::cin.clear();

			std::cin.ignore(std::cin.rdbuf()->in_avail());
		}

		else if (guessedNumber < randomeValue)
		{
			std::cout << "too low, guess higher " << std::endl;
			std::cout << "guess again " << std::endl;
		}

		else if (guessedNumber > randomeValue)
		{
			std::cout << "too high, guess lower " << std::endl;
			std::cout << "guess again " << std::endl;
		}

		else
		{
			std::cout << "congratulations!!! you got it right " << std::endl;
		}


		numberOfGuesses++;
		scoreBoard currentPlayer;

	}
	finalScore = numberOfGuesses;

	std::cout << "It took you " << numberOfGuesses << " guess(s): " << std::endl << std::endl;
	std::cout << "What is your name?: " << std::endl;
	std::cin >> name;
	system("pause");
	system("cls");


	highScoreTable[4].score = finalScore;
	highScoreTable[4].playerName = name;

	while (outOfOrder)
	{
		outOfOrder = false;

		for (int i = 0; i < arraySize - 1; i++)
		{
			if (highScoreTable[i].score > highScoreTable[i + 1].score)
			{
				std::swap(highScoreTable[i].score, highScoreTable[i+1].score);
				std::swap(highScoreTable[i].playerName, highScoreTable[i + 1].playerName);
				outOfOrder = true;
			}
		}
	}



	for (int index = 0; index < 5; index++)
	{
		std::cout << highScoreTable[index].playerName << "\t" << highScoreTable[index].score << std::endl << std::endl;
	}


	system("pause");
		return 0;
}