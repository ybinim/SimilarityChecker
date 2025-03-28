#include "gmock/gmock.h"
#include "similarityChecker.cpp"
#include <vector>
#include <string>

using namespace std;

TEST(tc1, tc2) {
	SimilarityChecker sc;
	vector<string>input = { "A", "A" };
	int expected = 60;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST(tc1, ���ڼ�����) {
	SimilarityChecker sc;
	vector<string>input = { "ABC", "AD" };
	vector<int>expected = { 3, 2 };
	vector<int> actual = sc.getLength(input);
	EXPECT_EQ(actual, expected);
}

TEST(tc1, ���ڼ�2���̻�����) {
	SimilarityChecker sc;
	vector<string>input = { "A", "BB" };
	int expected = 0;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST(tc1, ���ڼ���ġ) {
	SimilarityChecker sc;
	vector<string>input = { "ABC", "ABC" };
	int expected = 60;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST(tc1, ���ڼ��κ���ġ) {
	SimilarityChecker sc;
	vector<string>input = { "AAABB", "BAA" };
	int expected = 20;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

TEST(tc1, ���ڼ��κ���ġ2) {
	SimilarityChecker sc;
	vector<string>input = { "AA", "AAE" };
	int expected = 30;
	int actual = sc.getLenthPoint(input);
	EXPECT_EQ(actual, expected);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}