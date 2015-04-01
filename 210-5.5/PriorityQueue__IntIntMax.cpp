//
//  PriorityQueue__IntInt.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/31/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "PriorityQueue__IntIntMax.h"
#include "Object__IntInt.h"


PriorityQueue__IntIntMax::PriorityQueue__IntIntMax(Object__IntInt* h, int num, int max) : pq(PriorityQueue<int, int, ObjectMaxCompare<Object__IntInt>, Object__IntInt>(h, num, max)){}

void PriorityQueue__IntIntMax::enqueue(Object__IntInt object){
	pq.enqueue(object);
}

Object__IntInt PriorityQueue__IntIntMax::dequeue() {
	return pq.dequeue();
}

void PriorityQueue__IntIntMax::changeWeight(int matchID, int newPriority){
	pq.changeWeight(matchID, newPriority);
}

int PriorityQueue__IntIntMax::size() const {
	return pq.size();
}