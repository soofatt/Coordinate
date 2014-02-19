#include "unity.h"
#include "Coordinate.h"

void assertEqualCoordinate(Coordinate expected, Coordinate actual, int line, char *message){
	UNITY_TEST_ASSERT_EQUAL_INT(expected.x, actual.x, line, NULL);
	UNITY_TEST_ASSERT_EQUAL_INT(expected.y, actual.y, line, NULL);
}
	
