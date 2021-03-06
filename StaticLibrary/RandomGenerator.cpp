#include "RandomGenerator.h"

shared_ptr<RandomGenerator> RandomGenerator::Instance()
{
	if (_instance == nullptr)
	{
		_instance = shared_ptr<RandomGenerator> (new RandomGenerator());
	}

	return _instance;
}

/**
 * The Randomizer constructor initializes the random number generator with the current time.
 */
RandomGenerator::RandomGenerator()
{
	srand(time(NULL));
}

/**
 * The function next() returns a random number
 *
 * @return A random number
 */
int RandomGenerator::next()
{
	int num = rand();
	return num;
}

/**
 * The function takes in two integers, min and max, and returns a random number between min and max
 *
 * @param min The minimum number that can be generated.
 * @param max The maximum number that can be generated.
 *
 * @return The random number generated.
 */
int RandomGenerator::next(int min, int max)
{
	int num = rand() % (max - min + 1) + min;
	return num;
}

/**
 * The function takes an integer as a parameter and returns a random integer between 0 and the ceiling
 *
 * @param ceiling The highest number that can be returned.
 *
 * @return The random number generated by the rand() function.
 */
int RandomGenerator::next(int ceiling)
{
	int num = rand() % ceiling;
	return num;
}