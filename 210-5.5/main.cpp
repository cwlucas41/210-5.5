//
//  main.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include <iostream>
#include "PriorityQueue__IntIntMax.h"
#include "Object_IntInt.h"
using namespace std;

void quickCheck (Object__IntInt obj) {

	if (obj == Object__IntInt(5,1) || obj == Object__IntInt(3,1) || obj == Object__IntInt(0,1) || obj == Object__IntInt(-3,1) || obj == Object__IntInt(-5,1)) {
//		cout << "All Good" << endl;
	} else {
		cout << "Incorrect Value found" << endl;
	}
}

void Verify(Object__IntInt dequeued, int properID){
	if (dequeued.getID() != properID) {
		cout << "Error: " << dequeued << "It should be " << properID << endl;
	}
}

int main(int argc, const char * argv[]) {
	
	// first test checks membership
	Object__IntInt* priorityQueueList = new Object__IntInt[5];
	PriorityQueue__IntIntMax myPQ = PriorityQueue__IntIntMax(priorityQueueList,0,5);
	myPQ.enqueue(Object__IntInt(-5,-10));
	myPQ.enqueue(Object__IntInt(-3, -7));
	myPQ.enqueue(Object__IntInt(0, 3));
	myPQ.enqueue(Object__IntInt(3, 8));
	myPQ.enqueue(Object__IntInt(5, -32));
	myPQ.changeWeight(5,999);
	int size = myPQ.size();
	for (int i = 0; i < size; i++) {
		quickCheck(myPQ.dequeue());
	}
	delete [] priorityQueueList;
	
	// second test is more complete, a pq with 100 elements is created, each priority is changed, and then verified.
	Object__IntInt* list2 = new Object__IntInt[100];
	for (int i = 49; i >= 0; i--) {
		list2[i] = Object__IntInt(i,i);
	}
	PriorityQueue__IntIntMax pq2 = PriorityQueue__IntIntMax(list2, 50, 100);
	for (int i = 50; i < 100 ; i++) {
		pq2.enqueue(Object__IntInt(i,i));
	}
	for (int i = 0; i < 100; i++) {
		pq2.changeWeight(i, 100-i);
	}
	for (int i = 0; i < 100; i++) {
		Object__IntInt dequeued = pq2.dequeue();
		Verify(dequeued, i);
	}
	delete [] list2;
	
    return 0;
}