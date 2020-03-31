#ifndef PEON_HPP
# define PEON_HPP

# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
	public:
		~Peon();
		Peon(const Peon& p);
		Peon(std::string name);
		Peon operator=(const Peon& p);
		void getPolymorphed() const;

	private:
		Peon();
};

#endif
