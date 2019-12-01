#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#define all(v) (v).begin(),(v).end()
using namespace std;
using LL = long long;
const int INF = 1e9;

bool f(LL K) {
    return 12 < K;
}

LL binary_search(LL ok, LL ng) {
    while (abs(ok - ng) > 1) {
        LL mid = (ok + ng) / 2;
        if (f(mid)) ok = mid;
        else ng = mid;
    }
    return ok;
}

TEST(Test, Test) {
    EXPECT_EQ(13, binary_search(INF, 0));
}

