//
//  priorityQueue.h
//  project 5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef __project_5_5__PriorityQueue__
#define __project_5_5__PriorityQueue__

#include <stdio.h>
#include "Object.h"
#include "Comparator.h"
#include "heap.h"

class PriorityQueue {
	heap<Object, ObjectCompare> maxHeap;
	
public:
	PriorityQueue(Object* h, int num, int max);
	void enqueue(Object);
	Object dequeue();
	void changeWeight(int ObjectID, int newPriority);
};

#endif /* defined(__project_5_5__priorityQueue__) */
