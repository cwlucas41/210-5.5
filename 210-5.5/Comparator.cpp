//
//  Comparator.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/21/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "Comparator.h"
 bool ObjectCompare::prior(Object a, Object b) {
	return (a.getPriority() > b.getPriority());
}

bool ObjectCompare::checkID(Object a, Object b){
	return a.getID() == b.getID();
}
