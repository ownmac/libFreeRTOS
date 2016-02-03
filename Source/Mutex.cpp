/*
 * Mutex.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: Dove
 */

#include "Mutex.hpp"

Mutex::Mutex()
{
	xMutex = xSemaphoreCreateMutex();
}

Mutex::~Mutex() {
	vSemaphoreDelete(xMutex);
}

bool Mutex::Lock(void)
{
	return (xSemaphoreTake(xMutex,( TickType_t ) 100) == pdPASS);
}
void Mutex::Unlock(void)
{
	xSemaphoreGive(xMutex);
}
