#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

void S(const double x, const double eps, int& n, double& s);
void A(const double x, const int n, double& a);


int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
	int n = 0;

	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "dx="; cin >> dx;
	cout << "eps="; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << "ln(x)" << " |"
		<< setw(7) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{

		n = 0;
		a = x - 1;
		S = a;

		
		do
		{
			n++;
			R = -((n * (x - 1)) / (n + 1));
			a *= R;
			S += a;
		} while (abs(a) >= eps);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;
		
	}
	cout << "-------------------------------------------------" << endl;
	return 0;

}
void S(const double x, const double eps, int& n, double& s)
{
	n = 0;
	double a = 0;
	s = a;
	do
	{
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);

}
void A(const double x, const int n, double& a)
{
	double R = x / n;
	a*= R;
	
}