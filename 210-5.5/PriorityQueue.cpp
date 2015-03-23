//
//  PriorityQueue.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/21/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue(Object* h, int num, int max) : maxHeap(heap<Object, ObjectCompare>(h, num, max)){}

void PriorityQueue::enqueue(Object obj){
	maxHeap.insert(obj);
}

Object PriorityQueue::dequeue() {
	return maxHeap.removefirst();
}

void PriorityQueue::changeWeight(int ObjectID, int newPriority){
	Object* listOfAllObjects = new Object[maxHeap.size()];
	int size = maxHeap.size();
	for (int i = 0; i < size; i++) {
		Object obj = maxHeap.removefirst();
		if (obj.getID() == ObjectID) {
			obj = Object(ObjectID, newPriority);
		}
		listOfAllObjects[i] = obj;
	}
	for (int i = 0; i < size; i++) {
		maxHeap.insert(listOfAllObjects[i]);
	}
	delete [] listOfAllObjects;
}