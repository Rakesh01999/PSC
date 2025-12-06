

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


