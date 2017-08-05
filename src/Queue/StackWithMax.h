/**
 * @file QueueWithMax.h
 * A stack template with support for functions of taking a maximum for O (1).
 *
 * We store the elements in the vector as a pair.
 * The first is the element itself, the second is the maximum to this element including its.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#ifndef PHIYSICS_STACKWITHMAX_H
#define PHIYSICS_STACKWITHMAX_H

#include <utility>
#include <vector>
#include <algorithm>

template < class T >
class StackWithMax
{
    public:

        const T operator[] (size_t i) const;
        const size_t getSize () const;
        const T      getMax  () const;
        std::pair < T, T > top ();
        void push (T element);
        T pop ();

    private:

        std::vector < std::pair < T, T > > data;

};


template < class T >
T StackWithMax < T >::pop ()
{
    T m = data.back().first;
    data.pop_back();

    return m;
}


template < class T >
void StackWithMax < T >::push (T element)
{
    T maximum;
    if ( data.size() == 0 ) {
        maximum = element;
    } else
        maximum = std::max(element, data.back().second);

    data.push_back(std::make_pair(element, maximum));
}


template < class T >
std::pair < T, T > StackWithMax < T >::top ()
{
    return data.back();
}


template < class T >
const size_t StackWithMax < T >::getSize () const
{
    return data.size();
}


template < class T >
const T StackWithMax < T >::getMax () const
{
    return data.back().second;
}


template < class T >
const T StackWithMax < T >::operator[] (size_t i) const
{
    return data[ data.size() - 1 - i ].first;
}

#endif //PHIYSICS_STACKWITHMAX_H
