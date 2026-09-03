#include <iostream>
using namespace std;

int main()
{
    int a = 56;
    int b = 100;
    int c = 250;
    int lowest = a;
    int highest = 0;
    if (a<lowest)
    {
        lowest = a;
    }
    if (b<lowest)
    {
        lowest = b;
    }
    if (c<lowest)
    {
        lowest = c;
    }
    cout << "The lowest value is: " << lowest << endl;
	if (a > highest)
	{
		highest = a;
	}
	if (b > highest)
	{
		highest = b;
	}
	if (c > highest)
	{
		highest = c;
	}
	cout << "The highest value is: " << highest << endl;
}
