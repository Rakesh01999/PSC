

---
# Distinct Binary Strings

# ✅ **Problem Understanding**

You are given a binary string **S** of length **N**.

You must perform **exactly one operation**:

* Choose an index **i** (1 ≤ i ≤ N)
* Delete **S[i]**
* The remaining parts join together

Example:

```
S = 10110
Delete S[3] → 1010
```

You must find:

```
How many DISTINCT strings of length N-1 can be formed?
```

---

# 🔍 Key Insight

The string formed after deleting index `i` is:

```
S without position i
```

We need to count how many **unique results** appear among all N possible deletions.

---

# ⭐ Core Observation

Two deletions give **the same output** if and only if:

> The deleted characters were part of equal consecutive segments.

For example:

```
1111
```

Deleting any position → always `"111"`
So answer = **1**

But:

```
100
Delete 1 → "00"
Delete 0 → "10"
Delete last 0 → "10"
Distinct strings = {"00", "10"} → answer = 2
```

---

# 🎯 Final Key Idea

The number of distinct strings after deleting one char =

### **1 + number of positions i where S[i] ≠ S[i+1]**

Why?

Consider deleting character at i:

If S[i] == S[i+1], deleting either produces **same result** (keeps same boundary).

If S[i] != S[i+1], deletion of i and i+1 leads to different results, because the boundary changes.

Thus:

```
distinct_strings = 1 + count(differences between adjacent characters)
```

Specifically:

```
ans = 1
for each i in [1 .. N-1]:
    if S[i] != S[i+1]:
        ans++
```

---

# ✔️ Example Verification

### Example 1

```
S = 100
Adjacent differences:
1 vs 0 → diff
0 vs 0 → same
Ans = 1 + 1 = 2   ✓
```

### Example 2

```
S = 1111
All equal → no diffs
Ans = 1 + 0 = 1   ✓
```

### Example 3

```
S = 10110
Differences at: 1-0, 0-1, 1-1(no), 1-0
Total = 3 differences
Ans = 1 + 3 = 4 ✓
```

---

# 🚀 C++ Solution (Optimal)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 1;  // at least 1 distinct string

        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i+1])
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
```

---

# 📊 Complexity

### **Time Complexity**

```
O(N) per test case
Total N across tests ≤ 2×10^5
→ Fully efficient
```

### **Space Complexity**

```
O(1) extra space
```

---

# 🎉 Summary

* Each deletion gives a string of length N−1.
* Many deletions can produce the same string.
* Only a boundary change (when S[i] ≠ S[i+1]) produces a new distinct string.
* Final count = **1 + number of adjacent unequal pairs**.

---


===


# Yet another SOD problem

---

# ✅ **Problem Explanation**

You are given many test cases.
For each test case, you are given two integers:

* **L**
* **R**

You must count how many numbers in the range **[L, R]** (inclusive) have:

### **Sum of digits divisible by 3**

Example:
141 → 1+4+1 = 6 → divisible by 3 ✔
140 → 1+4+0 = 5 → not divisible ✘
139 → 1+3+9 = 13 → not divisible ✘

So for range 139–141 → Answer = **1**

---

# 🧠 **How to Think About It**

You cannot iterate from L to R because:

* R ≤ 10¹⁸ (up to 18 digits)
* T ≤ 10⁴ test cases

Worst-case loop = 10⁴ × 10¹⁸ → impossible.

We need a mathematical / digit-DP based solution.

---

# 🎯 **Key Observation (Important!)**

Digit sum modulo 3 depends ONLY on:

### **number % 3**

Because:

* (sum of digits) % 3 == number % 3

This is a known property.

So instead of checking digit-sum, we can simply check:

```
x is valid if (x % 3) == 0
```

Thus the problem becomes:

> Count how many numbers in [L, R] are divisible by 3.

---

# 🔥 **Efficient Solution**

Count of multiples of 3 in range [1, X] is:

```
floor(X / 3)
```

So count in [L, R]:

```
count = floor(R/3) - floor((L-1)/3)
```

Done in **O(1) per test case**.

This works because numbers divisible by 3 occur every 3 steps:
0, 3, 6, 9, ...

---

# ✅ **C++ Solution (Fastest, handles 10¹⁸)**

```cpp
#include <bits/stdc++.h>
using namespace std;

long long countDiv3(long long x) {
    return x / 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;

        long long ans = countDiv3(R) - countDiv3(L - 1);
        cout << ans << "\n";
    }
    return 0;
}
```

---

# 📈 **Time Complexity**

### Per Test Case:

```
O(1)
```

### For T test cases:

```
O(T)
T ≤ 10^4 → extremely fast
```

---

# 📦 **Space Complexity**

```
O(1)
```

No arrays, no DP table, constant extra space.

---

# ✔ Example Check

Input:

```
139 141
```

Compute:

* floor(141/3) = 47
* floor(138/3) = 46

Answer = 47 − 46 = **1** ✔

---



---

# 📌 **Problem Title: Equal Mex Splitting**


# ✅ **Problem Understanding (Explanation)**

You are given an array of size **N** for each test case.

Each element is an integer.
Your task is to compute:

### **The maximum number of elements that have the same value (either 0 or non-zero).**

In simple words:

* Count how many **zeros** are in the array
* Count how many **non-zeros** are in the array
* The answer is **the larger of these two counts**
  → `max(count_zeros, count_nonzeros)`

---

# 🎯 **Why this works?**

Because the judge’s problem is asking for the **maximum frequency** between:

* the count of `0`s
* the count of **all other values (1, 2, 3, …)**

Every value except 0 is treated the same as “non-zero”.

### So we only need:

```
non_zero_count = number of elements != 0
zero_count = N - non_zero_count
answer = max(non_zero_count, zero_count)
```

---

# 🧠 **How to Think / Problem Intuition**

1. You don’t care about the actual values except whether they are **zero** or **non-zero**
   → A major simplification.

2. Therefore:

   * If you encounter `0`, increment zero counter.
   * Otherwise, increment non-zero counter.

3. The result is simply the larger group.

---

# 🚀 **Solution Approach**

### **Step-by-step:**

1. Read the number of test cases `t`
2. For each test case:

   * Read `n`
   * Initialize `ans = 0`
   * Loop through each element:

     * If element is **non-zero**, increase `ans`
   * `zero_count = n - ans`
   * Output `max(ans, zero_count)`

That’s it!

---

# ✅ **Correct C++ Code (Accepted Solution)**

```cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t, n, k;
    cin >> t;
    while(t--) 
    {
        cin >> n;
        ll nonZero = 0;
        
        for (ll i = 0; i < n; i++) {
            cin >> k;
            if (k != 0)
                nonZero++;
        }

        ll zero = n - nonZero;
        cout << max(nonZero, zero) << "\n";
    }

    return 0;
}
```

---

# ⏱️ **Time Complexity**

* Reading `n` values takes **O(n)**
* Done for **t** test cases

### **Total Time:**

[
O\left(\sum n\right)
]
Efficient and optimal.

---

# 📦 **Space Complexity**

* Only using a few variables
* No extra data structures

### **Space:**

[
O(1)
]
Constant space.

---

# ⭐ Final Summary

| What you need | Explanation                                         |
| ------------- | --------------------------------------------------- |
| Goal          | Find the majority count between zeros and non-zeros |
| Key idea      | Only check if each number is zero or not            |
| Output        | max(zeros, non-zeros)                               |
| Time          | O(n) per test                                       |
| Space         | O(1)                                                |

---





---

# **Problem Title: XOR Equality**

---

# **Problem Statement (Simplified)**

You are given an integer **N**.
You must count how many integers **x** in the range:

[
0 \le x \le 2^N - 1
]

satisfy:

[
x \oplus (x+1) = (x+2) \oplus (x+3)
]

Where **⊕** denotes the bitwise XOR operator.

Since the answer can be very large, return it **modulo 10⁹ + 7**.

You need to answer **T** independent test cases.

---

# **How to Think About the Problem**

### **1. Understand XOR of consecutive numbers**

A known binary property:

[
x \oplus (x+1) = 2^{(\text{trailing_ones}(x) + 1)} - 1
]

The value depends **only on how many trailing 1s** are present in the binary form of x.

Example:

| x (binary) | trailing 1s | x ⊕ (x+1) |
| ---------- | ----------- | --------- |
| 1000       | 0           | 1         |
| 0111       | 3           | 15        |

---

### **2. Compare Both Sides**

We need:

[
\text{trailing_ones}(x) = \text{trailing_ones}(x+2)
]

By checking all binary cases for the last 2 bits, we get:

| x mod 4 | binary ending | valid?    |
| ------- | ------------- | --------- |
| 0       | 00            | ✔ valid   |
| 1       | 01            | ✖ invalid |
| 2       | 10            | ✔ valid   |
| 3       | 11            | ✖ invalid |

So **valid x are exactly those where the last two bits are 00 or 10**,
i.e., **x % 4 == 0 or x % 4 == 2**
→ all even x.

---

### **3. Count of Even Numbers in Range [0, 2ᶰ - 1]**

Half of the numbers in the range are even.

Count =
[
\frac{2^N}{2} = 2^{N-1}
]

Except **N = 1** special case:

Range = {0, 1} → only {0} is valid → answer = 1.

Our formula also gives:

[
2^{1-1} = 1
]

So it works for all N ≥ 1.

---

# ✔ **Final Formula**

[
\boxed{\text{Answer} = 2^{N-1} \mod (10^9 + 7)}
]

---

# **Solution Approach**

1. Precompute powers of 2 modulo (10⁹+7) up to N = 100000.
2. For each test case:

   * Output `pow2[N - 1]`.

---

# **C++ Implementation**

```cpp
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    int MAXN = 100000;
    vector<long long> pow2(MAXN + 1);
    pow2[0] = 1;

    for (int i = 1; i <= MAXN; i++) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }

    while (T--) {
        long long N;
        cin >> N;
        cout << pow2[N - 1] % MOD << "\n";
    }

    return 0;
}
```

---

# **Complexity Analysis**

### **Time Complexity**

* Precomputation: **O(N)**
* Each query: **O(1)**
  → Total: **O(N + T)**

### **Space Complexity**

* Power array: **O(N)**

---


