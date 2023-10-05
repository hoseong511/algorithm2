//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
//#include <x86intrin.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <random>

#define PI 3.141592653589793L
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
#define RINIT mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;
//using namespace __gnu_pbds;

struct chash {
    static inline uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    inline size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
 
    inline size_t operator()(const pair<uint64_t, uint64_t> &v) const {
        chash int_hasher;
        return int_hasher(v.first) * 31 + int_hasher(v.second);
    }
};

//template <class K>
//using hash_set = gp_hash_table<K, null_type, chash>;

const char nl = '\n';

typedef long long ll;
typedef long double ld;
// typedef unsigned int uint;
typedef unsigned long long ull;

const ll inf = 1e9 + 10;
const ll inf2 = 1e18 + 99LL;
const ld inf3 = 1e17;
const ll mod = 1e9+7, mod2 = 998244353;
const ld eps = 1e-15;
const bool local = false;

RINIT;

int main() {
    FAST;
    
    const ll M = 1234567891;
    
    int n;
    string s;
    cin >> n >> s;
    
    ll p = 1;
    ll ans = 0;
    
    for (int i = 0; i < n; i++) {
        ans = (ans + (s[i] - 'a' + 1) * p) % M;
        p = p * 31 % M;
    }
    
    cout << ans << nl;
}