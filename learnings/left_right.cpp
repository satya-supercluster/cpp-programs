#include<iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int solution(string s) {
    int left_count = 0; // Counter for '<' characters in the window
    int right_count = 0; // Counter for '>' characters in the window
    int max_symmetric_length = 0; // Maximum symmetric length found so far
    int n = 0; // Length of the input string

    // Find the length of the input string
    while (s[n] != '\0') {
        n++;
    }

    // Initialize the window's starting position and size
    int window_start = 0;
    int window_size = 0;

    // Iterate through the string
    for (int i = 0; i < n; i++) {
        if (s[i] == '<') {
            left_count++;
        } else if (s[i] == '>') {
            right_count++;
        } else { // Encountered a question mark '?'
            // Try replacing '?' with '<'
            left_count++;
            // Try replacing '?' with '>'
            right_count++;

            // Shrink the window if necessary
            while (left_count < right_count) {
                if (s[window_start] == '<') {
                    left_count--;
                } else {
                    right_count--;
                }
                window_start++;
                window_size--;
            }
        }

        // Update the maximum symmetric length
        if (left_count == right_count && window_size > max_symmetric_length) {
            max_symmetric_length = window_size;
        }

        window_size++;
    }

    return max_symmetric_length * 2; // Double the length as we are counting '?' as two characters.
}

int main() {
    string s;
    cin>>s;

    cout<<solution(s)<<endl;

    return 0;
}
