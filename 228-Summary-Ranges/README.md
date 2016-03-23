##Solution 1
观察输入和输出的规律，扫一遍数组。注意处理最后一次的情况即可。

##Solution 2
因为数组是排序的，可以考虑是否可以用二分的思想。这里的二分函数helper很是费解。输入的参数left是下标，right却有可能不是下标（从Discuss里看到的解法）。

**Updated**
修改了binary search的部分以保证left和right都是下标，即[left,right]。对应的，循环的条件改成left < right，左缩是left=mid（因为mid有可能是所求结果），所以得保证mid是向右偏([0,1]->1)，右缩mid-1，保证了right的含义一致（因为所求结果不可能是mid了）