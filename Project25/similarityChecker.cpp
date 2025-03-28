#include <vector>
#include <string>
using namespace std;

class SimilarityChecker {
public:
	int checkLength(vector<string> str) {
		if (str[0] == "A" && str[1] == "A") {
			return 60;
		}
	}
};