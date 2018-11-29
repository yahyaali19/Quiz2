// Don't change the prototype or functionality of any function

#ifndef CLOCK_HEADER
#define CLOCK_HEADER

class Clock
{
public:
	~Clock();
	Clock(int hours = 0, int minutes = 0, int seconds = 0);
	// Contructor to initialize the object with the values specified by the user.
	// If no values are specified, the default values are assumed.
	void setTime(int hours, int minutes, int seconds);
	// Function to set the member variables hr, min and sec.
	// Write proper checks to handle hr, min and sec limitations
	void getTime(int& hours, int& minutes, int& seconds);
	// Function to return the time.
	Clock operator ++ ();
	// Overload the pre-increment operator
	// Post Condition: The time is incremented by one second
	bool operator <= (const Clock& otherClock) const;
	// Overload the less than or equal to operator.
	// Post Condition: Returns true if the time of this clock is less than or equal to 
	// the time of otherClock, otherwise it returns false
	bool operator == (const Clock& otherClock) const;
	// Overload the equality operator.
	// Post Condition : Returns true if the time of this clock is equal to the time of
	// the otherClock, otherwise it returns false.

private:
	int hr; // variable to store hours
	int min; // variable to store minutes
	int sec; // variable to store seconds
};

#endif // !CLOCK_HEADER

