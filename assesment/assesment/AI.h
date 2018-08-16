#pragma once
#include <iostream>
#include <ctime>
#include <random>
#include <string>





class AI
{
private:
	// all values and inputs 
	int randomValue = 0;
	int AIGuess = 0;
	int AIAnswer = 0;
	int AIPlayer = 0;
	int AINumberOfGuesses = 0;
	bool AIAttempt = false;
	int min = 1;
	int max = 1000;
	
	// a binary search which works in way like an AI
public:
	AI()
	{
		randomValue = rand() % (max - min) + min;
	}
	void run()
	{
	std::cout << randomValue << std::endl;

		while (AIGuess != randomValue)
		{
			AIGuess = (min + max) / 2;

			if (AIGuess > randomValue)
			{
				max = AIGuess - 1;

			}
			else if (AIGuess < randomValue)
			{
				min = AIGuess + 1;
			}
			else
			{
				AIGuess = randomValue;
			}
			AINumberOfGuesses++;
		}
		//prints the AI's number of guesses
		std::cout << "AI took: " << AINumberOfGuesses << "number of guesses, can you do better? " << std::endl;
	}
 
};