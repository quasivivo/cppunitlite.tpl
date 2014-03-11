#include "TestHarness.h"

#include <vector>

TEST(size, vector)
{
	std::vector<int> theInts;

	CHECK_EQUAL(0, theInts.size());
}

TEST(empty, vector)
{
	std::vector<int> theInts;

	CHECK(theInts.empty());
}

TEST(push_back, vector)
{
	std::vector<int> theInts;

	theInts.push_back(2);
	theInts.push_back(3);
	theInts.push_back(4);

	CHECK_EQUAL(3, theInts.size());
}

TEST(arrayStyleAccess, vector)
{
	std::vector<int> theInts;

	theInts.push_back(2);
	theInts.push_back(3);
	theInts.push_back(4);

	CHECK_EQUAL(2, theInts[0]);
	CHECK_EQUAL(3, theInts[1]);
	CHECK_EQUAL(4, theInts[2]);
}