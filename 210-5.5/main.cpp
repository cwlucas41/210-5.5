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

int main(int argc, const char * argv[]) {
	
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
    return 0;
}