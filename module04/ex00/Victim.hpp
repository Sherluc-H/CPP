#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{
	public:
		~Victim();
		Victim(const Victim& v);
		Victim(std::string name);
		Victim &operator=(const Victim& v);
		std::string getName();
		virtual void getPolymorphed() const;

	protected:
		Victim();
		std::string name;
};

std::ostream &operator<<(std::ostream& os, Victim& v);

#endif
