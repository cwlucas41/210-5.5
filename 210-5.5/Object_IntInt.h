//
//  Object_IntInt.h
//  210-5.5
//
//  Created by Christopher Lucas on 3/31/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef ___10_5_5__Object_IntInt__
#define ___10_5_5__Object_IntInt__

#include <stdio.h>
#include "Object.cpp"

class Object__IntInt {
	
private:
	
	Object<int, int> object;
	
public:
	
	Object__IntInt();
	Object__IntInt( int ID, int p);
	int getID() const;
	int getPriority() const;
	
	bool operator==(Object__IntInt);
	
};

#endif /* defined(___10_5_5__Object_IntInt__) */
