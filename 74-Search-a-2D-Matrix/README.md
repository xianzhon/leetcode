## Solution
因为从左到右，从上到下都有序，所以考虑二分查找的思想。观察四个特殊角的特点，选择从右上角开始查找，因为它是这一行最大的，同时是这一列最小的数，很特别。同样地，也可以从左下角开始查找，一次比较排除一行或者一列。