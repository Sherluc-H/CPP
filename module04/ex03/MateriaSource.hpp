#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& ms);
		MateriaSource &operator=(const MateriaSource& ms);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria	**materias;
		int		nb_of_mat;
};

#endif
