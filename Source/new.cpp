/*
 * new.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: Dove
 */


#include <cstdlib>
#include <sys/types.h>

extern "C" {
	void *pvPortMalloc( size_t xSize );
	void vPortFree( void *pv );
}

/*
 * The default pulls in 70K of garbage
 */

namespace __gnu_cxx {

  void __verbose_terminate_handler() {
    for(;;);
  }
}


/*
 * The default pulls in about 12K of garbage
 */

extern "C" void __cxa_pure_virtual() {
  for(;;);
}

/*
 * Implement C++ new/delete operators using the heap
 */

void *operator new(size_t size) {
  return pvPortMalloc(size);
}

void *operator new[](size_t size) {
  return pvPortMalloc(size);
}

void operator delete(void *p) {
	vPortFree(p);
}

void operator delete[](void *p) {
	vPortFree(p);
}



