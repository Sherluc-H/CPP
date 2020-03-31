#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		~Sorcerer();
		Sorcerer(const Sorcerer& s);
		Sorcerer(std::string name, std::string title);
		Sorcerer &operator=(const Sorcerer& s);
		std::string getName() const;
		std::string getTitle() const;
		void polymorph(Victim const &) const;

	private:
		Sorcerer();
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream& os, const Sorcerer& s);

#endif
