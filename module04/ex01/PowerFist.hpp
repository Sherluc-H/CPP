#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		~PowerFist();
		PowerFist(const PowerFist& pf);
		PowerFist &operator=(const PowerFist& pf);
		void attack() const;

};

#endif
