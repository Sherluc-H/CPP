/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 22:54:25 by lhuang            #+#    #+#             */
/*   Updated: 2020/05/23 12:57:45 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>

template <class T>
typename T::iterator	easyfind(T &container, int to_find)
{
	return (std::find(container.begin(), container.end(), to_find));
}

#endif
