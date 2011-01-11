#include "bmcalc.h"

double Min(const double *Nbr, const int Total)
{
	double Minimum = Nbr[0];

	for(int i = 0; i < Total; i++)
		if( Minimum > Nbr[i] )
			Minimum = Nbr[i];

	return Minimum;
}

double Max(const double *Nbr, const int Total)
{
	double Maximum = Nbr[0];

	for(int i = 0; i < Total; i++)
		if( Maximum < Nbr[i] )
			Maximum = Nbr[i];

	return Maximum;
}

double Sum(const double *Nbr, const int Total)
{
	double S = 0;

	for(int i = 0; i < Total; i++)
		S += Nbr[i];

	return S;
}

double Average(const double *Nbr, const int Total)
{
	double avg, S = 0;

	for(int i = 0; i < Total; i++)
		S += Nbr[i];
	
	avg = S / Total;
	return avg;
}

long GreatestCommonDivisor(long Nbr1, long Nbr2)
{
	while( true )
	{
		Nbr1 = Nbr1 % Nbr2;
		if( Nbr1 == 0 )
			return Nbr2;

		Nbr2 = Nbr2 % Nbr1;
		if( Nbr2 == 0 )
			return Nbr1;
	}
}
