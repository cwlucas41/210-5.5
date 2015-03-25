//
//  PriorityQueue.h
//  210-5.5
//
//  Created by Christopher Lucas on 3/21/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef ___10_5_5__PriorityQueue__
#define ___10_5_5__PriorityQueue__

#include <stdio.h>
#include "Comparator.h"
#include "Object.h"
#include "heap.h"

template<typename E, typename Comp>
class PriorityQueue {
private:
	heap<Object, ObjectCompare> maxHeap;
	
public:
	PriorityQueue(E* h, int num, int max);
	
	//enqueues a new object
	void enqueue(E);
	
	//removes and returns the object with highest priority
	Object dequeue();
	
	//parameter: instance of Object class
	//changes the weight of all Objects with the same ID as the paramater object to the weight of the paramater object
	void changeWeight(E object);
};


#endif /* defined(___10_5_5__PriorityQueue__) */
