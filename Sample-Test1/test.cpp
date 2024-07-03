#include "pch.h"
#include "../PrimeFactor/prime-factors.cpp"
#include <vector>
#include "test.h"

using namespace std;

TEST(PrimeFactorTests, Of1) {
	PrimeFactor prime_factor;
	vector<int> expects = {};
	EXPECT_EQ(expects, prime_factor.of(1));
}

TEST(PrimeFactorTests, Of2) {
	PrimeFactor prime_factor;
	vector<int> expects = {2};
	EXPECT_EQ(expects, prime_factor.of(2));
}

