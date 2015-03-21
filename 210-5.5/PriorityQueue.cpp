//
//  PriorityQueue.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/21/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "PriorityQueue.h"

//PriorityQueue::PriorityQueue(int max) : maxHeap(heap<Object, ObjectCompare>(new Object [max], 0, max)){}

PriorityQueue::PriorityQueue(Object* h, int num, int max) : maxHeap(heap<Object, ObjectCompare>(h, num, max)){}

void PriorityQueue::enqueue(Object obj){
	maxHeap.insert(obj);
}

Object PriorityQueue::dequeue() {
	return maxHeap.removefirst();
}

void PriorityQueue::changeWeight(int ObjectID, int newPriority){
	int pos = maxHeap.findPos(Object(ObjectID, 0));
	Assert(pos >= 0, "An object with that ID does not exist in the queue");
	maxHeap.remove(pos);
	Object reprioritized = Object(ObjectID, newPriority);
	maxHeap.insert(reprioritized);
	
}