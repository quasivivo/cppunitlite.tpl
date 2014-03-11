#include "TestHarness.h"

#include <sstream>

TEST(toInt, sstream)
{
	std::stringstream ss("44");

	int value;
	ss >> value;

	CHECK_EQUAL(44, value);
}

TEST(fromInt, sstream)
{
	std::stringstream ss;

	ss << 35;

	CHECK_EQUAL("35", ss.str());
}

TEST(streamFailure, sstream)
{
	std::stringstream ss("Hello");
	
	int value;
	ss >> value;

	CHECK(!ss);
}