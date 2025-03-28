#include "gmock/gmock.h"
#include "similarityChecker.cpp"
#include <vector>
#include <string>

using namespace std;

TEST(tc1, tc2) {
	SimilarityChecker sc;
	vector<string>input = { "A", "A" };
	int expected = 60;
	int actual = sc.checkLength(input);
	EXPECT_EQ(actual, expected);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}