//
//  object.h
//  project 5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef __project_5_5__object__
#define __project_5_5__object__

#include <stdio.h>

class Object {
private:
	int objectID;
	int priority;
	
public:
	Object(int ID, int priority);
	int getID() const;
	int getPriority() const;
	void setPriority(int);
};

#endif /* defined(__project_5_5__object__) */
