#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad: public ISquad
{
	public:
		Squad();
		~Squad();
		Squad(const Squad & sq);
		Squad &operator=(const Squad & sq);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
		
	private:
		ISpaceMarine**	unit;
		int		nb_of_squads;
		
};

#endif