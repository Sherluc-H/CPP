#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant: public Enemy
{
	public:
		SuperMutant();
		~SuperMutant();
		SuperMutant(const SuperMutant& spm);
		SuperMutant &operator=(const SuperMutant& spm);
		void takeDamage(int);

};

#endif
