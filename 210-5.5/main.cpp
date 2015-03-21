//
//  main.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include <iostream>
#include "PriorityQueue.cpp"
using namespace std;



int main(int argc, const char * argv[]) {
	Object* h = new Object [5];
	PriorityQueue myPQ = PriorityQueue(h, 0, 5);
	myPQ.enqueue(Object(1, 2));
	myPQ.enqueue(Object(2, 4));
	myPQ.enqueue(Object(3, 5));
	myPQ.changeWeight(1, 6);
	for (int i = 0; i < 3; i++) {
		cout << myPQ.dequeue().getID() << endl;
	}
	
	delete [] h;
    return 0;
}
