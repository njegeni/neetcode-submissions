class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_count = 0
        left = 0
        seen = set()
        for right, letter in enumerate(s):
            while letter in seen:
                seen.remove(s[left])
                left += 1
            seen.add(letter)
            max_count = max(max_count, right - left + 1)
        return max_count