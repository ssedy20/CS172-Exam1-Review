/* I affirm that all code given below was written solely by me, Sarah Sedy,
and that any help I received adhered to the rules stated for this exam.*/
#ifndef Theater_hpp
#define Theater_hpp
#include <stdio.h>

class Theater
{
private:
	
	string genre;
	string Name;
	string Phone;
	int hour;
	int cokePrice;
	int popcornPrice;

public:
	
	void AddMovie(Movie& Movie);
	
	string getMovieforHour()
	
	int getPopcornPrice() //returns the price of popcorn//
	{
		return popcornPrice;
	};
	int getCokePrice()//returns the price of a coke//
	{
		return cokePrice;
	}
	void getMovieforHour(int hour, string genre)
	{
		this->hour = hour;
		this->genre = genre;
	}
	void getPopcornPrice(int popcornPrice)
	{
		this->popcornPrice = popcornPrice;
	}
	void getCokePrice(int cokePrice)
	{
		this->cokePrice = cokePrice;
	}
};
#endif 