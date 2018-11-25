#include "golf.hpp"

// non-interactive version:
//  function sets golf structure to provided name, handicap
//  using values passed as arguments to the function
void setGolf(golf& g, const char* name, int hc)
{
	strncpy(g.fullname, name, Len);
	g.handicap = hc;
}

// interactive version:
//  function solicits name and handicap from user
//  and sets the members of g to the values entered
//  returns 1 if name is entered, 0 if name is empty string
int setGolf(golf& g)
{
	std::string s;

	std::cout << "Enter name: ";
	std::getline(std::cin, s);
	strncpy(g.fullname, s.c_str(), Len);

	std::cout << "Enter handicap: ";
	std::cin >> g.handicap;
	
	return (s.size()) ? 1 : 0;
}

// function resets handicap to new value
void handicap(golf & g, int hc)
{
	g.handicap = hc;
}

// function displays contents of golf structure
void showGolf(const golf& g)
{
	std::cout << "Full name: " << g.fullname << std::endl;
	std::cout << "Handicap: " << g.handicap << std::endl;
}
