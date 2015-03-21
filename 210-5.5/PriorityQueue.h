//
//  priorityQueue.h
//  project 5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef __project_5_5__priorityQueue__
#define __project_5_5__priorityQueue__

#include <stdio.h>
#include "heap.h"
#include "object.h"
#include "compare.h"

class PriorityQueue {
	heap<int, ObjectCompare> maxHeap;
	
public:
	void enqueue(Object);
	int dequeue();
	void changeWeight(int Object ID, int newPriority);
};

#endif /* defined(__project_5_5__priorityQueue__) */
