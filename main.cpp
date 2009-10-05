#include <iostream>

using std::cout;
using std::cin;

int count_zeros(long number)
{
	long temp = 5;
	long count = 0;
	
	while (temp <= number)
	{
		count += number/temp;
		temp *= 5;
	}

	return count;
}

int main (void) {
    
	long number;
	long count;

    cin>>count;

	for (long i=0; i< count; i++)
	{
		cin>>number;
		cout<<count_zeros(number)<<std::endl;
	}
	
	return 0;
}
