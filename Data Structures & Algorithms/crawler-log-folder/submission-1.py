class Solution:
    def minOperations(self, logs: List[str]) -> int:
        # maybe for every x add +1 to count, for every ../ add -1
        count = 0
        for i in range(len(logs)):
            if logs[i] != "./" and logs[i] != "../":
                count += 1
            elif logs[i] == "../" and count > 0:
                count -= 1
        return count

