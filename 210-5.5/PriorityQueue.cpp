//
//  PriorityQueue.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/21/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "PriorityQueue.h"

template<typename E, typename Comp>
PriorityQueue<E,Comp>::PriorityQueue(E* h, int num, int max) : maxHeap(heap<E, Comp>(h, num, max)){}

template<typename E, typename Comp>
void PriorityQueue<E,Comp>::enqueue(E obj){
	maxHeap.insert(obj);
}

template<typename E, typename Comp>
Object PriorityQueue<E,Comp>::dequeue() {
	return maxHeap.removefirst();
}

template<typename E, typename Comp>
void PriorityQueue<E,Comp>::changeWeight(E object){
	E* listOfAllObjects = new E[maxHeap.size()];
	int size = maxHeap.size();
	for (int i = 0; i < size; i++) {
		E obj = maxHeap.removefirst();
		if (obj==object) {
			obj = object;
		}
		listOfAllObjects[i] = obj;
	}
	for (int i = 0; i < size; i++) {
		maxHeap.insert(listOfAllObjects[i]);
	}
	delete [] listOfAllObjects;
}