#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
 
template <class T>
class Array
{
private:
    int m_length;
    T *m_data;
 
public:
    Array() : m_length(0), m_data(nullptr)
	{}
 
    Array(int length) : m_length(length)
    {
		if (m_length < 0)
			throw ElementIsOutOfTheLimits();
        m_data = new T[length];
    }
 
    ~Array()
    {
        delete[] m_data;
		m_data = nullptr;
    }
 
	class	ElementIsOutOfTheLimits : public std::exception
	{
		virtual const char*	what( ) const throw();
	};
 
    T& operator[](int index)
    {
        if (index < 0 && index >= m_length)
			throw ElementIsOutOfTheLimits();
        return m_data[index];
    }
 
    Array	&operator=( Array const &value )
	{
		if (this == &value)
			return *this;
		
		m_length = value.m_length;
		if (m_length < 0)
			throw ElementIsOutOfTheLimits();
		m_data = new T[m_length];
		for( int i = 0; i < m_length; i++)
			m_data[i] = value.m_data[i];
		return *this;
	}
	
	int getLength()
	{
		return m_length;
	}

	void	setArray(T const &elem, int i)
	{
		if (i > 0 || i >= m_length)
			throw ElementIsOutOfTheLimits();
		
		m_data[i] = elem;
	}

	void	getArray()
	{
		for (int i = 0; i < m_length; i++)
			std::cout << m_data[i] << std::endl;
	}
};


template<typename T>
const char*	Array<T>::ElementIsOutOfTheLimits::what( ) const throw()
{
	return "Error:\nThis element is out of the limits";
}

#endif