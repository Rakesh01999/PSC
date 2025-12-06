

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



