#include "Move.hpp"

int main() {
	Move m1(1, 2);
	m1.showmove();

	Move m2 = m1.add(m1);
	m2.showmove();

	return 0;
}