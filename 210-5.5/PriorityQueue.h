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

class PriorityQueue {
private:
	heap<Object, ObjectCompare> maxHeap;
	
public:
	PriorityQueue(Object* h, int num, int max);
	void enqueue(Object);
	Object dequeue();
	void changeWeight(int ObjectID, int newPriority);
};


#endif /* defined(___10_5_5__PriorityQueue__) */
