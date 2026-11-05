class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        count = 0
        for i in range(len(words)):
            for j in range(i + 1, len(words)):
                k = len(words[i])
                if words[j][:k] == words[i] and words[j][-k:] == words[i]:
                    count += 1


        return count