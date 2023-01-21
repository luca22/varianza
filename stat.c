#include "stat.h"
double media(double* x, unsigned int n) {

	if (n == 0) {

		return 0.;
	}

	double res = 0.;

	for (unsigned int i = 0; i < n; i++) {

		res += x[i];

	}

	return res / n;
}


double varianza(double* x, unsigned int n) {


	if (n < 2) {

		return 0.;
	}
	
	else {

		double var = 0.;

		for (unsigned int j = 0; j < n; j++) {

			var += (x[j] - media(x, n)) * (x[j] - media(x, n));

		}

		return var / n;
	}

}