#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <cmath>
 
using namespace std;
 
int main()
{
	const size_t size = 11;
	int sum = 0, vec[size];
	double avg = 0.0;
 
	srand((unsigned int)time(0));
 
	cout << "Random vector:\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << setw(5) << (vec[i] = rand() % 40 - 10);
		sum += vec[i];
	}
 
	avg = (double)sum / size;
	cout << "\n\nAvg:\n" << "    " << avg;
	cout << "\n\nAbs(N) > avg:\n";
 
	for (size_t i = 0; i < size; i++)
	{
		if (abs(vec[i]) > avg)
			cout << setw(5) << vec[i];
		else
			cout << setw(5) << "__";
	}
 
	return 0;
}
