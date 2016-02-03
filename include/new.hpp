/*
 * new.hpp
 *
 *  Created on: Feb 2, 2016
 *      Author: Dove
 */

#ifndef INCLUDE_NEW_HPP_
#define INCLUDE_NEW_HPP_




void *operator new(size_t size);
void *operator new[](size_t size);
void operator delete(void *p);
void operator delete[](void *p);

#endif /* INCLUDE_NEW_HPP_ */
