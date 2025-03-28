#include "gmock/gmock.h"
#include "similarityChecker.cpp"
#include <vector>
#include <string>

using namespace std;

class SimilarityCheckerFixture : public ::testing::Test {
public:
	SimilarityChecker sc;
	vector<string>input;
};

TEST_F(SimilarityCheckerFixture, TestGetLength) {
	input = { "ABC", "AD" };
	vector<int>expected = { 3, 2 };
	vector<int> actual = sc.getLength(input);
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityCheckerFixture, TestCheckLengDiff2times) {
	input = { "A", "BB" };
	int expected = 0;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityCheckerFixture, TestGetMaxPoint) {
	input = { "ABC", "ABC" };
	int expected = 60;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityCheckerFixture, TestGetParitialPoint) {
	input = { "AAABB", "BAA" };
	int expected = 20;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST_F(SimilarityCheckerFixture, 글자수부분일치2) {
	input = { "AA", "AAE" };
	int expected = 30;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}