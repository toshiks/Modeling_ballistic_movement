/**
 * @file QueueWithMax.h
 * A queue template with support for functions of taking a maximum for O (1).
 *
 * The queue is on two stacks.
 * The first stack stores part of the inverted queue. The second stack stores the other part but the original queue.
 * When the second stack ends, the first stack replenishes the second stack.
 *
 * @author Anton Klochkov (tklochkov@gmail.com)
 * @date 10.05.2017
 * @version 1.0
 */

#ifndef PHIYSICS_QUEUEWITHMAX_H
#define PHIYSICS_QUEUEWITHMAX_H

#include "StackWithMax.h"

template < class T >
class QueueWithMax
{
    public:

        const T operator[] (size_t i) const;
        const size_t getSize () const;
        const T      getMax  () const;
        void push (T a);
        T pop ();

    private:

        StackWithMax < T > stackWithMax_1, stackWithMax_2;
};


template < class T >
void QueueWithMax < T >::push (T a)
{
    stackWithMax_1.push(a);
}


template < class T >
const T QueueWithMax < T >::getMax () const
{
    if ( stackWithMax_1.getSize() == 0 ) {
        return stackWithMax_2.getMax();
    }

    if ( stackWithMax_2.getSize() == 0 ) {
        return stackWithMax_1.getMax();
    }

    return std::max(stackWithMax_1.getMax(), stackWithMax_2.getMax());
}


template < class T >
T QueueWithMax < T >::pop ()
{
    if ( stackWithMax_2.getSize() == 0 ) {
        while ( stackWithMax_1.getSize() != 0 ) {
            stackWithMax_2.push(stackWithMax_1.top().first);
            stackWithMax_1.pop();
        }
    }
    T result = stackWithMax_2.top().first;
    stackWithMax_2.pop();

    return result;
}


template < class T >
const size_t QueueWithMax < T >::getSize () const
{
    return stackWithMax_1.getSize() + stackWithMax_2.getSize();
}


template < class T >
const T QueueWithMax < T >::operator[] (size_t i) const
{
    if ( i < stackWithMax_2.getSize()) {
        return stackWithMax_2[ i ];
    } else {
        return stackWithMax_1[ stackWithMax_1.getSize() - i + stackWithMax_2.getSize() - 1 ];
    }
}


#endif //PHIYSICS_QUEUEWITHMAX_H
