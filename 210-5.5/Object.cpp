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

Object::Object() : objectID(0) , priority(0) {}

int Object::getID() const{
	return objectID;
}

int Object::getPriority() const{
	return priority;
}

bool Object::operator==(Object other){
	return getID()==other.getID();
}

