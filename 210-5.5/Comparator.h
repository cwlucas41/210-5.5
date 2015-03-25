//
//  Comparator.h
//  210-5.5
//
//  Created by Christopher Lucas on 3/20/15.
//  Copyright (c) 2015 CWL. All rights reserved.
//

#ifndef ___10_5_5__Comparator__
#define ___10_5_5__Comparator__

#include <stdio.h>
#include "Object.cpp"


class ObjectIntCompare {
public:
	static bool prior(Object<int, int> a, Object<int, int> b);
};
#endif /* defined(___10_5_5__Comparator__) */
