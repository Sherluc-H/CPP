class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed &operator=(const Fixed& fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int			value;
		static const int	nb_bits = 8;
};
