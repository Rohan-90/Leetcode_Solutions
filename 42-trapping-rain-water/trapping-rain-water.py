class Solution:
    def trap(self, height: List[int]) -> int:
        if not height:
            return 0

        n = len(height)
        maxHeight = height[0]
        maxleft = 0
        index = 0

        # Find the maximum height and its index
        for i in range(1, n):
            if maxHeight < height[i]:
                maxHeight = height[i]
                index = i

        water = 0

        # Calculate trapped water on the left side of the highest bar
        for i in range(index):
            if maxleft > height[i]:
                water += maxleft - height[i]
            else:
                maxleft = height[i]

        maxright = 0

        # Calculate trapped water on the right side of the highest bar
        for i in range(n-1, index, -1):
            if maxright > height[i]:
                water += maxright - height[i]
            else:
                maxright = height[i]

        return water