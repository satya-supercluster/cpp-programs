# Bitwise Operations Cheat Sheet 🚀

## Basic Bitwise Operators
- **AND (`&`)**: Keep bits set in both operands
- **OR (`|`)**: Set bits present in either operand
- **XOR (`^`)**: Toggle bits, `x ^ x = 0`
- **NOT (`~`)**: Invert all bits
- **Left Shift (`<<`)**: Multiply by 2^n
- **Right Shift (`>>`)**: Divide by 2^n

## Essential Competitive Programming Tricks

### Number Properties
1. **Even/Odd Check**
   ```
   is_odd = x & 1   // 1 if odd, 0 if even
   ```

2. **Power of Two Check**
   ```
   is_power_of_two = (x & (x - 1)) == 0
   ```

3. **Sign Detection**
   ```
   opposite_signs = (x ^ y) < 0
   ```

### Bit Manipulation
1. **Bit Operations**
   ```
   clear_bit_i = x & ~(1 << i)     // Clear i-th bit
   set_bit_i = x | (1 << i)        // Set i-th bit
   toggle_bit_i = x ^ (1 << i)     // Toggle i-th bit
   check_bit_i = (x & (1 << i)) != 0  // Check if i-th bit is set
   ```

2. **Bit Count and Extract**
   ```
   set_bits_count = __builtin_popcount(x)  // Count set bits
   lowest_set_bit = x & -x                // Extract lowest set bit
   remove_lowest_set_bit = x & (x - 1)    // Remove lowest set bit
   ```

### Advanced Techniques
1. **Subset Generation**
   ```cpp
   // Iterate through all subsets of n elements
   for (int mask = 0; mask < (1 << n); ++mask) {
       for (int i = 0; i < n; ++i) {
           if (mask & (1 << i)) {
               // i-th element is in the subset
           }
       }
   }
   ```

2. **Fast Exponentiation**
   ```cpp
   long long fast_pow(long long base, int exp) {
       long long result = 1;
       while (exp) {
           if (exp & 1) result *= base;
           base *= base;
           exp >>= 1;
       }
       return result;
   }
   ```

3. **Unique Element Finder**
   ```cpp
   int find_unique(vector<int>& arr) {
       int unique = 0;
       for (int x : arr) unique ^= x;
       return unique;
   }
   ```

### Pro Bit Manipulation Techniques

#### Bit Tricks

1. **Bit Masking Patterns**

   ```cpp
   // Create a mask with first k bits set
   int create_mask(int k) {
       return (1 << k) - 1;
   }

   // Check if all bits are set in a number
   bool all_bits_set(int x, int k) {
       return (x & ((1 << k) - 1)) == ((1 << k) - 1);
   }
   ```

2. **Bit Interleaving**

   ```cpp
   // Interleave bits of two numbers
   unsigned int interleave_bits(unsigned int x, unsigned int y) {
       unsigned int result = 0;
       for (int i = 0; i < 32; i++) {
           result |= ((x & (1U << i)) << i) | ((y & (1U << i)) << (i + 1));
       }
       return result;
   }
   ```

3. **Rotation and Cyclic Shifts**

   ```cpp
   // Left circular rotation
   unsigned int left_rotate(unsigned int x, int n) {
       return (x << n) | (x >> (32 - n));
   }

   // Right circular rotation
   unsigned int right_rotate(unsigned int x, int n) {
       return (x >> n) | (x << (32 - n));
   }
   ```

### Bitwise Dynamic Programming

1. **State Compression**

   ```cpp
   // TSP with bitmask DP
   int tsp_bitmask(vector<vector<int>>& dist, int n) {
       vector<vector<int>> dp(1 << n, vector<int>(n, INT_MAX));
       
       // Initialize starting state
       for (int i = 0; i < n; i++) {
           dp[1 << i][i] = 0;
       }
       
       // Iterate through all possible masks
       for (int mask = 0; mask < (1 << n); mask++) {
           for (int last = 0; last < n; last++) {
               if (!(mask & (1 << last))) continue;
               
               for (int next = 0; next < n; next++) {
                   if (last == next || !(mask & (1 << next))) continue;
                   
                   int prev_mask = mask ^ (1 << last);
                   dp[mask][last] = min(dp[mask][last], 
                       dp[prev_mask][next] + dist[next][last]);
               }
           }
       }
       
       return *min_element(dp[(1 << n) - 1].begin(), dp[(1 << n) - 1].end());
   }
   ```

### Number Theory and Bit Manipulation

1. **Prime Bit Sieve**

   ```cpp
   vector<int> prime_bits_sieve(int n) {
       vector<int> primes;
       vector<bool> is_prime(n + 1, true);
       is_prime[0] = is_prime[1] = false;
       
       for (int i = 2; i <= n; i++) {
           if (is_prime[i]) {
               primes.push_back(i);
               for (int j = i * i; j <= n; j += i) {
                   is_prime[j] = false;
               }
           }
       }
       
       return primes;
   }
   ```

2. **Counting Set Bits with Lookup**

   ```cpp
   // Optimized bit counting
   int count_set_bits(unsigned int x) {
       static const int BitCountLookup[16] = {
           0, 1, 1, 2, 1, 2, 2, 3, 
           1, 2, 2, 3, 2, 3, 3, 4
       };
       
       int count = 0;
       while (x) {
           count += BitCountLookup[x & 0xF];
           x >>= 4;
       }
       return count;
   }
   ```

### Competitive Programming Optimization Techniques

1. **Bit Parallel Maximum/Minimum**

   ```cpp
   // Find maximum using bit manipulation
   int bit_parallel_max(int a, int b) {
       return a ^ ((a ^ b) & -(a < b));
   }

   // Find minimum using bit manipulation
   int bit_parallel_min(int a, int b) {
       return b ^ ((a ^ b) & -(a < b));
   }
   ```

2. **Fast Primality Testing**

   ```cpp
   bool is_prime_miller_rabin(long long n) {
       if (n <= 1 || n == 4) return false;
       if (n <= 3) return true;
       
       // Miller-Rabin primality test using bit manipulation
       long long d = n - 1;
       int s = 0;
       while (d % 2 == 0) {
           d /= 2;
           s++;
       }
       
       // Test witnesses
       vector<long long> witnesses = {2, 3, 5, 7, 11, 13, 17, 19, 23};
       for (long long a : witnesses) {
           if (a >= n) break;
           long long x = pow_mod(a, d, n);
           if (x == 1 || x == n - 1) continue;
           
           bool composite = true;
           for (int r = 1; r < s; r++) {
               x = (x * x) % n;
               if (x == n - 1) {
                   composite = false;
                   break;
               }
           }
           
           if (composite) return false;
       }
       return true;
   }

   // Modular exponentiation
   long long pow_mod(long long base, long long exp, long long mod) {
       long long result = 1;
       base %= mod;
       while (exp > 0) {
           if (exp & 1) result = (result * base) % mod;
           base = (base * base) % mod;
           exp >>= 1;
       }
       return result;
   }
   ```

### Bitwise Data Structures

1. **Bit Trie for Prefix Operations**

   ```cpp
   class BitTrie {
   private:
       struct TrieNode {
           TrieNode* children[2];
           TrieNode() { 
               children[0] = children[1] = nullptr; 
           }
       };
       TrieNode* root;

   public:
       void insert(int num) {
           TrieNode* node = root;
           for (int i = 31; i >= 0; i--) {
               int bit = (num >> i) & 1;
               if (!node->children[bit]) {
                   node->children[bit] = new TrieNode();
               }
               node = node->children[bit];
           }
       }

       int max_xor(int num) {
           TrieNode* node = root;
           int max_xor_val = 0;
           for (int i = 31; i >= 0; i--) {
               int bit = (num >> i) & 1;
               if (node->children[1 - bit]) {
                   max_xor_val |= (1 << i);
                   node = node->children[1 - bit];
               } else if (node->children[bit]) {
                   node = node->children[bit];
               }
           }
           return max_xor_val;
       }
   };
   ```



### Competitive Programming Optimization Tips
- Use `__builtin_` functions for faster bit operations
- Prefer bitwise operations over arithmetic for performance
- Understand bit manipulation for dynamic programming problems
- Use bitmasks for state compression
- Practice bit manipulation problems on platforms like Codeforces

## Common Pitfalls
- Be careful with signed integer overflow
- Understand platform-specific bit representation
- Test edge cases thoroughly

## Learning Resources
- Competitive Programming 3 by Steven & Felix Halim
- Algorithms by Robert Sedgewick
- Topcoder Bitwise Manipulation Tutorial
```

## Quick Reference
- `n & (n-1)`: Remove lowest set bit
- `n & -n`: Get lowest set bit
- `__builtin_clz(x)`: Count leading zeros
- `__builtin_ctz(x)`: Count trailing zeros

## Practice Makes Perfect! 💡
