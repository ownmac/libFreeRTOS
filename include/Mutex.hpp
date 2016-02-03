/*
 * Mutex.h
 *
 *  Created on: Feb 2, 2016
 *      Author: Dove
 */

#ifndef SOURCE_MUTEX_H_
#define SOURCE_MUTEX_H_

#include <FreeRTOS.h>
#include <semphr.h>
#include <new.hpp>


class Mutex {
public:
	Mutex();
	virtual ~Mutex();
	bool Lock(void);
	void Unlock(void);
protected:
	SemaphoreHandle_t xMutex;
};

#endif /* SOURCE_MUTEX_H_ */
