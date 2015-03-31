//
//  main.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include <iostream>
#include "PriorityQueue.cpp"
#include "Comparator.cpp"
#include "Object.cpp"
using namespace std;

template<typename I, typename P>
void quickCheck (Object<I, P> obj) {

	typedef int objectIDType;
	typedef int priorityType;

	typedef Object<objectIDType,priorityType> PairObject;

	if (obj == PairObject(5,1) || obj == PairObject(3,1) || obj == PairObject(0,1) || obj == PairObject(-3,1) || obj == PairObject(-5,1)) {
//		cout << "All Good" << endl;
	} else {
		cout << "Incorrect Value found" << endl;
	}
}

int main(int argc, const char * argv[]) {
	
	typedef int objectIDType;
	typedef int priorityType;
	 
	typedef Object<objectIDType,priorityType> PairObject;
	typedef PriorityQueue<objectIDType, priorityType, ObjectMaxCompare<objectIDType, priorityType> > PairObjectPriorityQueue;
	
	PairObject* priorityQueueList = new PairObject[5];
	
	PairObjectPriorityQueue myPQ = PairObjectPriorityQueue(priorityQueueList,0,5);
	
	myPQ.enqueue(PairObject(-5,-10));
	myPQ.enqueue(PairObject(-3, -7));
	myPQ.enqueue(PairObject(0, 3));
	myPQ.enqueue(PairObject(3, 8));
	myPQ.enqueue(PairObject(5, -32));
	
	myPQ.changeWeight(5,999);
	
	int size = myPQ.size();
	for (int i = 0; i < size; i++) {
		quickCheck(myPQ.dequeue());
	}

	delete [] priorityQueueList;
    return 0;
}