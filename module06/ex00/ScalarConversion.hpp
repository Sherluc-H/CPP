#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

class ScalarConversion
{
	public:
		~ScalarConversion();
		ScalarConversion(const ScalarConversion& sc);
		ScalarConversion(int nb_int);
		ScalarConversion(float nb_float);
		ScalarConversion(double nb_double);
		ScalarConversion &operator=(const ScalarConversion& sc);
		void display();
	private:
		ScalarConversion();
		char nb_char;
		int nb_int;
		float nb_float;
		double nb_double;
		
};

#endif
