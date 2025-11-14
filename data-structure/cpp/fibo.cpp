using namespace std;
vector<long long> memo;

int fibo(int n, vector<int>& memo) {
    if (n <= 2) {
        return n;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int solution(int n) {
    vector<int> memo(n + 1, -1);
    return fibo(n, memo);
}