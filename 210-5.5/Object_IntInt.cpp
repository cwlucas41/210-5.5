//
//  Object_IntInt.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/31/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "Object_IntInt.h"


Object__IntInt::Object__IntInt(){
	object = Object<int, int>();
}

Object__IntInt::Object__IntInt(int ID, int p){
	object = Object<int, int>(ID, p);
}

int Object__IntInt::getID() const{
	return object.getID();
}

int Object__IntInt::getPriority() const{
	return object.getPriority();
}

bool Object__IntInt::operator==(Object__IntInt other){
	return object.getID() == other.getID();
}

std::ostream& operator<<(std::ostream& out, Object__IntInt obj){
	out << "objectID is: " << obj.getID() << std::endl;
	return out;
}