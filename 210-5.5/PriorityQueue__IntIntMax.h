//
//  PriorityQueue__IntInt.h
//  210-5.5
//
//  Created by Christopher Lucas on 3/31/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef ___10_5_5__PriorityQueue__IntInt__
#define ___10_5_5__PriorityQueue__IntInt__

#include <stdio.h>
#include "PriorityQueue.cpp"
#include "Object__IntInt.h"
#include "ObjectMaxCompare.cpp"

class PriorityQueue__IntIntMax {
private:
	
	PriorityQueue<int, int, ObjectMaxCompare<Object__IntInt>, Object__IntInt> pq;
	
public:
	
	PriorityQueue__IntIntMax(Object__IntInt* h, int num, int max);
	void enqueue(Object__IntInt);
	Object__IntInt dequeue();
	void changeWeight(int,int);
	int size() const;
	
};

#endif /* defined(___10_5_5__PriorityQueue__IntInt__) */
