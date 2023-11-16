#include <bits/stdc++.h>
using namespace std;

class TrieNode {
public:
	vector<TrieNode*> m_children;
	
	TrieNode() : m_children(2, nullptr) {}
	
	~TrieNode() {
		delete m_children[0];
		delete m_children[1];
	}
	
	TrieNode* createChilldIfNotPresent(int index) {
		if (m_children[index] == nullptr) {
			m_children[index] = new TrieNode;
		}
		return m_children[index];
	}
};

class Trie {

private:
    TrieNode* m_root{new TrieNode};
    
public:
    Trie() = default;
    ~Trie() { delete m_root; }
    void insert(int num);
    int maxXor(int num) const;
};

void Trie::insert(int num) {
	auto currNode = m_root;
	int temp = 1 << 30;
	
	for (int i = 30; i >= 0; --i) {
		if ((num & temp) > 0) {
			currNode = currNode->createChilldIfNotPresent(1);
		} else {
			currNode = currNode->createChilldIfNotPresent(0);
		}
		temp = temp >> 1;
	}
}

int Trie::maxXor(int num) const {
	auto currNode = m_root;
	int temp = 1 << 30;
	int ans{};
	
	for (int i = 30; i >= 0; --i) {
		if ((num & temp) > 0) {
			if (currNode->m_children[0] != nullptr) {
				ans = ans | temp;
				currNode = currNode->m_children[0];
			} else {
				currNode = currNode->m_children[1];
			}
		} else {
			if (currNode->m_children[1] != nullptr) {
				ans = ans | temp;
				currNode = currNode->m_children[1];
			} else {
				currNode = currNode->m_children[0];
			}
		}
		temp = temp >> 1;
	}
	return ans;
}

int main() {
    int t; cin>>t; 
    while(t--){
        int n;
        cin>>n;
        vector<long long> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
	Trie trie;
	trie.insert(0);
	
	int ans{};
	int xorVal{};
	for (int num : nums) {
		xorVal ^= num;
		trie.insert(xorVal);
		ans = std::max(ans, trie.maxXor(xorVal));
	}
    cout<<ans<<endl;
    }
	return 0;
}