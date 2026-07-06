/*
 * Problem: Fizz Buzz
 * Problem ID: 412
 * Difficulty: Easy
 * Language: C++
 * Runtime: 0 ms
 * Memory: 11.8 MB
 * Synced From: LeetCode
 * Date: 2026-07-06
 */

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> arr;
        for (int i = 1; i<= n; i++){
            
            if (i % 3 == 0 && i % 5 == 0){
                arr.push_back("FizzBuzz");
            }
            else if (i % 3 == 0){
                arr.push_back("Fizz");
            }
            else if (i % 5 == 0){
                arr.push_back("Buzz");
            }
            else{
                arr.push_back(to_string(i));
            }
        }
        return arr;
    }
};