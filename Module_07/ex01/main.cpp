#include "Iter.hpp"

int main(void)
{
	int a[3] = {5, 6, 7};
	iter(a, 3, print);

	std::string b[3] = {"five", "six", "seven"};
	iter(b, 3, print);

	float c[3] = {1.3, 2432.4, -56.94};
	iter(c, 3, print);

	const int d[3] = {};
	iter(d, 3, print);
    return (0);
}