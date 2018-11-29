// Don't Change the main function
#include "clock_header.h"
#include <iostream>
using namespace std;

int main()
{
	Clock myClock(5, 6, 23);
	Clock yourClock;
	int hr, min, sec;
	myClock.getTime(hr, min, sec);
	cout << "myClock Time is : " << hr << " : " << min << " : " << sec << endl;
	yourClock.setTime(hr, min, sec);
	if (myClock == yourClock)
		cout << "Both clocks are showing the same time";
	else
		cout << "Both clocks are set at different times";
	yourClock.setTime(1, 59, 59);
	myClock++;
	if (myClock <= yourClock)
		cout << "Time on myClock is less than or equal to time on yourClock";
	system("pause");
	return 0;
}