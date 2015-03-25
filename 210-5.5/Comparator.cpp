//
//  Comparator.cpp
//  210-5.5
//
//  Created by Christopher Lucas on 3/21/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#include "Comparator.h"

bool ObjectIntCompare::prior(Object<int, int> a, Object<int, int> b) {
	return (a.getPriority() > b.getPriority());
}

