#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice //will use header files for exam//
{
public:
	
	int Sides;
	int getSides;
	int Roll;
	int getRoll;

	int getRoll()
	{
		return Roll;
	}
	
	int getSides()
	{
		return Sides;
	}
	

};

int main() 
{
	
	Dice d (6);               
	
	cout << d.Roll() << endl;  // Outputs a value from 1 to 6//
	if (d.getSides() != 6) {cout << "Error in GetSides().  It should return 6\n";
	return 0;}
	
	bool passed = true;
	for (int i = 0; i < 100; i++) {int x = d.Roll();
	if ( x < 1 || x > 6 ) { // Roll returned an incorrect side//
		cout << "Error in Roll() method! Roll returned " << x << endl;passed = false;break;}}
	if ( passed )cout << "Passed roll test" << endl; // Should output this message!//
	cout << d.getRoll() << endl;   // Should output 101//
}