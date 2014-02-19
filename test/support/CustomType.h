#ifndef __CUSTOMTYPE_H_
#define __CUSTOMTYPE_H_

#include "Coordinate.h"

#define UNITY_TEST_ASSERT_EQUAL(expected, actual, line, message) \
	assertEqualCoordinate(expected, actual, line, message)
	
#define TEST_ASSERT_EQUAL_Coordinate(expectedCoor, actualCoor) \
					assertEqualCoordinate(expectedCoor, actualCoor, __LINE__, NULL);

void assertEqualCoordinate(Coordinate expected, Coordinate actual, int line, char *message);
	
#endif // __CUSTOMTYPE_H_