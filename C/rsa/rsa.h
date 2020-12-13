#ifndef RSA_H
#define RSA_H

#include <iostream>
#include <time.h>

typedef unsigned long unlong;

unlong	get_prime_number(unlong min = 0, unlong max = 100);
unlong	create_public_key(unlong p, unlong q);

#endif //RSA_H
