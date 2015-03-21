//
//  object.cpp
//  project 5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "Object.h"

Object::Object(int Id, int p){
	objectID = Id;
	priority = p;
}

int Object::getID() const{
	return objectID;
}

int Object::getPriority() const{
	return priority;
}

void Object::setPriority(int p){
	priority = p;
}
