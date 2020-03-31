#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion: public Enemy
{
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(const RadScorpion& rds);
		RadScorpion &operator=(const RadScorpion& rds);

};

#endif
