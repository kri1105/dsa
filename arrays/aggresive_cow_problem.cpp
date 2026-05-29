// Aggressive Cows

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int maxAllowedDist) {

    int cows = 1;
    int pos = stalls[0];

    for(int i = 1; i < stalls.size(); i++) {

        if(stalls[i] - pos >= maxAllowedDist) {

            cows++;
            pos = stalls[i];
        }

        if(cows == k) {
            return true;
        }
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k) {

    sort(stalls.begin(), stalls.end());

    int start = 0;
    int n = stalls.size();

    int end = stalls[n - 1] - stalls[0];

    int ans = 0;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(isPossible(stalls, k, mid)) {

            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {

    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;

    int ans = aggressiveCows(stalls, k);

    cout << "Maximum minimum distance: " << ans << endl;

    return 0;
}