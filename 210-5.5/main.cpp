//
//  main.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include <iostream>
#include "PriorityQueue.cpp"
#include "Comparator.h"
#include "Object.cpp"

using namespace std;



int main(int argc, const char * argv[]) {
	Object<int,int>* h = new Object<int,int> [5];
	
	PriorityQueue<int,int,ObjectIntCompare> myPQ = PriorityQueue<int,int,ObjectIntCompare>(h,0,5);
	
	myPQ.enqueue(Object<int,int>(1, 4));
	myPQ.enqueue(Object<int,int>(2, 4));
	myPQ.enqueue(Object<int,int>(3, 5));
	
	myPQ.changeWeight(1,6);
	
	for (int i = 0; i < 3; i++) {
		cout << myPQ.dequeue() << endl;
	}
	
	delete [] h;
    return 0;
}
