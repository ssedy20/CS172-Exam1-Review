/* I affirm that all code given below was written solely by me, Sarah Sedy,
and that any help I received adhered to the rules stated for this exam.*/
#ifndef Movie_hpp
#define Movie_hpp
#include <stdio.h>

class Movie
{
private:

	string Title;
	string Genre;
	int ShowTime;
	string movieListing;

public:


	int  getShowtime()
	{
		return ShowTime;
	}; //returns the show time//
	string GetTitle()
	{
		return Title;
	}; //returns the title of the movie//
	string GetGenre()
	{
		return Genre;
	}; //returns the genre of the movie//

};

#endif