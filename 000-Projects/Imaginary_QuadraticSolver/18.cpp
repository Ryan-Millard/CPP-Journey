#include "../../std_lib_facilities.h"

void take_input(double &a, double &b, double &c);
std::pair<std::pair<double, double>, std::pair<double, double>> quadratic_roots(double a, double b, double c);

int main()
{
	double a, b, c;
	take_input(a, b, c);

	std::pair<std::pair<double, double>, std::pair<double, double>> roots = quadratic_roots(a, b, c);

	cout<<"The first root of the equation is: \n\tReal component: "<<roots.first.first
		<<"\n\tImaginary component: "<<roots.first.second<<'i'
		<<"\nThe second root of the equation is: \n\tReal component: "<<roots.second.first
		<<"\n\tImaginary component: "<<roots.second.second<<"i\n";
}

void take_input(double &a, double &b, double &c)
{
	cout<<"ENTER THE FOLLOWING:\n\ta = "; cin>>a;
	cout<<"\tb = "; cin>>b;
	cout<<"\tc = "; cin>>c;
}

std::pair<std::pair<double, double>, std::pair<double, double>> quadratic_roots(double a, double b, double c)
{
	// QUADRATIC FORMULA = (-b +- sqrt(b*b - 4*a*c))/2*a
	const double denominator = 2*a, discriminant = b*b - 4*a*c;
	std::pair<double, double> imag_part(0.0, 0.0); // default for real roots
	double abs_sqrt_discriminant = sqrt(std::abs(discriminant));

	if(discriminant > 0) // real roots
	{
		// cout<<'\n'<<"REAL\n";
		double real_part1 = (-b + abs_sqrt_discriminant);
		double real_part2 = (-b - abs_sqrt_discriminant);
		std::pair<double, double> root_plus_discriminant(real_part1 / denominator, imag_part.first);
		std::pair<double, double> root_minus_discriminant(real_part2 / denominator, imag_part.second);

		return std::make_pair(root_plus_discriminant, root_minus_discriminant);
	}

	// non-real roots
		// cout<<'\n'<<"NON_REAL\n";
	imag_part.first = abs_sqrt_discriminant/denominator;
		// cout<<'\n'<<"first imag: "<<imag_part.first<<"\n";
	imag_part.second = -abs_sqrt_discriminant/denominator;
		// cout<<'\n'<<"second imag: "<<imag_part.second<<"\n";

	std::pair<double, double> root_plus_discriminant(-b / denominator, imag_part.first);
	std::pair<double, double> root_minus_discriminant(-b / denominator, imag_part.second);

	return std::make_pair(root_plus_discriminant, root_minus_discriminant);
}
