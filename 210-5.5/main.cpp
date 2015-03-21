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
	Object h[1] = {Object(3, 3)};
	PriorityQueue myPQ = PriorityQueue(h, 1, 1);
	cout << myPQ.dequeue().getID() << endl;
	
    return 0;
}
