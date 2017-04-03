/* Home Work */

# include <stdlib.h>
 
# include "math_func.h"
 
unsigned long fact(unsigned long n) {
	unsigned long fac = 1;
	for (unsigned long i = 1; i <= n; ++i){
		if (i != 0)
			fac *= i;
	}
	return fac;
}
 
unsigned long fibo(unsigned long n) {
	unsigned long	o=1, z=0;
	for(unsigned long i=1; i < n; ++i){
		o += z;
		z = o - z;
	}
	return n > 1 ? o : n;
}
 
unsigned long int_sqrt(unsigned long n) {
	
	unsigned long x = 0;
	unsigned long temp = 0;

	while (x * x  < n + 1) {
		temp = x;
		++x;
	}
	return temp;



}
 
unsigned long digit_number(unsigned long n) {
  
	if (n == 0)
		return 1;

  unsigned long len = 0;
  
  while (n != 0) {
	  n /= 10;
	  len += 1;
  }

  return len;
}

unsigned long binary_digit_number(unsigned long n) {
	
	if (n == 0)
		return 1;
	unsigned long len = 0;

	while (n != 0) {
		n = n / 2;
		++len;
	}
	return len;
}
 
unsigned long power_of_2(unsigned long n) {

	unsigned long x = 1;

	for (unsigned long i = 0; i < n; ++i) {
		x *= 2;
	}
	return x;
}
 
unsigned long divisor_sum(unsigned long n) {
	if (n == 0)
		return 1;
	
	unsigned long cpt = 0;
	for (unsigned long i = 1; i < n; ++i) {
		if (n % i == 0)
			cpt += i;
	}
	return cpt;
}
