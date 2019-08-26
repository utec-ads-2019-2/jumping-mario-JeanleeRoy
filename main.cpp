#include <iostream>

using namespace std;

int main() {
	int cases;
	scanf("%d", &cases);
	for(int j = 0; j <cases; ++j){
		int walls;
		scanf("%d", &walls);
		int prev, high = 0, down = 0;
		scanf("%d", &prev);
		for(int i=  1; i < walls; ++i){
			int curr;
			scanf("%d", &curr);
			if (prev < curr)
				++high;
			if (prev > curr)
				++down;
			prev = curr;
		}
		printf("Case %d: %d %d\n", j+1, high, down);
	}
	return EXIT_SUCCESS;
}

