#include "Move.hpp"

Move::Move(double a, double b) : x(a), y(b) {} // sets x, y to a, b

double Move::getX() const
{
	return x;
}

double Move::getY() const
{
	return y;
}

void Move::showmove() const              // shows current x, y values
{
	std::cout << "X=" << x << std::endl;
	std::cout << "Y=" << y << std::endl;
}

Move Move::add(const Move & m) const // this function adds x of m to x of invoking object to get new x,
// adds y of m to y of invoking object to get new y, creates a new
// move object initialized to new x, y values and returns it
{
	Move obj(x + m.getX(), y + m.getY());

	return obj;
}

void Move::reset(double a, double b) // resets x,y to a, b
{
	x = a;
	y = b;
}