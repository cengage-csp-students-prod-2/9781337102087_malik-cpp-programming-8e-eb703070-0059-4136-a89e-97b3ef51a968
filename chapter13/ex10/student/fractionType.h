//Specification file fractionType.h 

#ifndef H_fraction
#define H_fraction
  
#include <iostream>

using namespace std;

class fractionType
{
	   // overload stream insertion and extraction operators
    friend ostream& operator<< (ostream&, const fractionType&);
    friend istream& operator>> (istream&, fractionType&);

public:
    void setFraction(int num, int den); 

    fractionType(int num = 0, int den = 1);  
     //Constructor

    fractionType operator+(fractionType rightFr); 
      //overload +
    fractionType operator*(fractionType rightFr); 
      //overload *
    fractionType operator-(fractionType rightFr); 
      //overload -
    fractionType operator/(fractionType rightFr); 
      //overload /
	
        //overload relational operators
    bool operator==(fractionType rightFr) const;
    bool operator!=(fractionType rightFr) const;
    bool operator<=(fractionType rightFr) const;
    bool operator<(fractionType rightFr) const;
    bool operator>=(fractionType rightFr) const;
    bool operator>(fractionType rightFr) const;         

private:
    int numerator;      //variable to store the numerator
    int denominator;    //variable to store the denominator
};

#endif