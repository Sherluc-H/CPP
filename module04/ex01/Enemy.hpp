#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy
{
	private:
		Enemy();
		Enemy(const Enemy& en);

	protected:
		int hp;
		std::string type;

	public:
		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		std::string getType() const;
		int getHP() const;

		virtual void takeDamage(int);

};

#endif
