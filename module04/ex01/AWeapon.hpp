#ifndef AWEAPON_HPP
# define AWEAPON_HPP

class AWeapon
{
	private:
		AWeapon();
		AWeapon(const AWeapon& awp);
		AWeapon &operator=(const AWeapon& awp);

	protected:
		std::string	name;
		int		apcost;
		int		damage;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
