/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmickey <hmickey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 09:45:08 by hmickey           #+#    #+#             */
/*   Updated: 2022/03/07 12:54:01 by hmickey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


namespace ft
{

	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
	
	// redefine names (like in cplusplus.com/reference/vector/vector/vector/)

	typedef	T									value_type;
	typedef	Alloc								allocator_type;
	typedef typename Alloc::pointer				pointer;
	typedef typename Alloc::reference			reference;
	typedef typename Alloc::size_type			size_type;
	typedef typename Alloc::const_reference		const_reference;
	typedef typename Alloc::const_pointer		const_pointer;
	
	public:
	
		explicit vector (const allocator_type & alloc = allocator_type());
		explicit vector (size_type n, const value_type& val = value_type(),
                 const allocator_type& alloc = allocator_type()){};
		
		template <class InputIterator>
        vector (InputIterator first, InputIterator last,
                 const allocator_type& alloc = allocator_type()){};
		vector (const vector& x){};

        void    test() const;
	
	private:
	
		Alloc				_allocator;
		pointer				_start;
		pointer 			_end;
		pointer				_current;
	};
};