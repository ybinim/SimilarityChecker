#include <vector>
#include <string>
using namespace std;

const int MAX_POINT_OF_LENGTH_SIMILARITY = 60;

class SimilarityChecker {
public:
	vector<int> getLength(const vector<string>& str) {
		vector<int>ret;
		ret.push_back(str[0].size());
		ret.push_back(str[1].size());
		return ret;
	}

	int getLenthPoint(const vector<string>& str) {
		double ret;
		double max, min;
		vector<int>value = getLength(str);

		max = (value[0] > value[1]) ? value[0] : value[1];
		min = (value[0] < value[1]) ? value[0] : value[1];

		if (max == min)	return MAX_POINT_OF_LENGTH_SIMILARITY;
		if (max >= min * 2)	return 0;

		ret = (1 - ((max - min) / min)) * MAX_POINT_OF_LENGTH_SIMILARITY;
		return (int)ret;
	}
};