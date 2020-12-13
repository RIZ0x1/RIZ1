#include "rsa.h"

using namespace std;

int	main(int argc, char **argv)
{
	unlong	p;
	unlong	q;
	unlong	n;
	unlong	phi;
	unlong	e;

	p	= get_prime_number();
	q	= get_prime_number(p);
	n	= (p * q);
	phi	= (p - 1) * (q - 1);

	cout << "p & q: " << p << ' ' << q << '\n';
	cout << "n = " << n << '\n';
	cout << "phi = " << phi << '\n';


	return (0);
}

