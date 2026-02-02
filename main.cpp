#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

// Prints array contents
void printArray(const int arr[], int SIZE)
{ for (int i = 0; i < SIZE; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int calculateSum(const int arr[], int SIZE)
{   int sum = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

double getAverage(int sum, int SIZE)
{
	return static_cast<double>(sum) / SIZE;
}

void addBonus(int arr[], int SIZE, int bonus)
{   for (int i = 0; i < SIZE; ++i)
	{
		arr[i] += bonus;
	}
}

int findHighest(const int arr[], int SIZE)
{   int highest = arr[0];
	for (int i = 1; i < SIZE; ++i)
	{
		if (arr[i] > highest)
		{
			highest = arr[i];
		}
	}
	return highest;
}

int countPassed(const int arr[], int SIZE)
{   int count = 0;
	for (int i = 0; i < SIZE; ++i)
	{
		if (arr[i] >= 70)
		{
			++count;
		}
	}
	return count;
}

int main()
{
	const int size = 5;
	int scores[size] = { 65, 82, 90, 45, 78 };

	// show original scores
	cout << "Original Scores: ";
	printArray(scores, size);

	// calculate sum
	int sum = calculateSum(scores, size);
	cout << "Sum of Scores: " << sum << endl;

	// calculate average
	double average = getAverage(sum, size);
	cout << std::fixed << std::setprecision(2);
	cout << "Average Score: " << average << endl;

	// add bonus points
	addBonus(scores, size, 5);
	cout << "Scores after adding bonus: ";
	printArray(scores, size);

	// Find highest score
	int highest = findHighest(scores, size);
	cout << "Highest Score: " << highest << endl;

	// students that passed
	int passedCount = countPassed(scores, size);
	cout << "Students that Passed (>=70): " << passedCount << endl;

	return 0;
}