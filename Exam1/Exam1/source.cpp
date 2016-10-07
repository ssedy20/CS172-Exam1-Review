/* I affirm that all code given below was written solely by me, Sarah Sedy, 
  and that any help I received adhered to the rules stated for this exam.*/
#include <iostream>
#include <string>
#include <cstdlib>
#include "Movie.h"
#include "Theater.h"
using namespace std;

int main()

{
	//following line of code will set up movie listings//
	const int MOVIECOUNT = 11; Movie movieListing[] = 
	{ Movie("Bull Durham", "Comedy", 0), 
		Movie("Ocean's Eleven", "Action", 2), 
		Movie("Monte Python's Meaning of Life", "Comedy", 5),
		Movie("Jaws", "Horror", 7),   
		Movie("Fletch", "Comedy", 10),
		Movie("Usual Suspects", "Action", 12),   
		Movie("Bull Durham", "Comedy", 14), 
		Movie("Ocean's Eleven", "Action", 16),   
		Movie("Monte Python's Meaning of Life", "Comedy", 19), 
		Movie("Jaws", "Horror", 21),  
		Movie("Usual Suspects", "Action", 23), }; 
	

	/*Following lines of code will display theater's phone number and 
	 pull up the different movies playing on the hour, if an incorrect value
	 is typed in for the hour, an error message will display*/
	Theater garland("The Garland", "509-327-2509"); for (int m = 0; m < MOVIECOUNT; m++)
	{ garland.AddMovie(movieListing[m]); }
	int errors = 0; if (garland.GetMovieForHour(-1) != "")
	{ errors++; cout << "error: not handling -1 correctly\n"; } 
	if (garland.GetMovieForHour(25) != "") { errors++; cout << "error: not handling 25 correctly\n"; } 
	if (garland.GetMovieForHour(19) != "Monte Python's Meaning of Life") 
	{ errors++; cout << "error: incorrect movie for 18th hour\n"; } 
	if (garland.GetShowTimeForGenre("Comedy") != 0) { errors++; cout << "error: incorrect Comedy\n"; }
	if (errors == 0) cout << "Passed\n";
	else cout << "Errors: " << errors << endl;
	
	return 0;
}


	
