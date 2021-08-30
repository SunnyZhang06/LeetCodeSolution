### 基础知识

1、哈希表概念
  - 哈希表也叫散列表，是根据key直接访问value在内存存储位置的数据结构
  - key——映射——value，这个映射函数叫做散列（哈希）函数

2、 解决散列冲突的方法
  - 开放寻址法：线性探测、二次探测
  - 链表法

3、C++中的关联式容器
  - map、set——根据元素键值自动排序，不允许有相同的键值，**底层红黑树（RBTree）实现**
  - multiset、multimap——允许键值重复，**底层红黑树（RBTree）实现**
  - unorderedmap、unorderedset——不自动排序，无重复的键值，**底层哈希表（hashtable）实现**
  - 使用**count**函数，返回被查找元素的个数。有则返回1，无则返回0（map/set中不存在相同元素，所以返回值只能是1或0）
  - 使用**find**函数，返回的是被查找元素的位置（迭代器），没有则返回map.end()
  
4、编程题中遇到的问题大多可以转化为 **建立元素到元素出现位置或次数映射关系**的问题


### 目录

- [1-两数之和](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/1-%E4%B8%A4%E6%95%B0%E4%B9%8B%E5%92%8C.cpp)（easy 【元素和出现位置映射关系】）
- [3-无重复字符的最长子串](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/3-%E6%97%A0%E9%87%8D%E5%A4%8D%E5%AD%97%E7%AC%A6%E7%9A%84%E6%9C%80%E9%95%BF%E5%AD%90%E4%B8%B2.cpp)（medium 【元素和出现位置映射关系】）
- [49-同字符词语分组](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/49-%E5%90%8C%E5%AD%97%E7%AC%A6%E8%AF%8D%E8%AF%AD%E5%88%86%E7%BB%84.cpp)（medium 【元素和元素数组映射关系】）
- [187-重复的DNA序列](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/187-%E9%87%8D%E5%A4%8D%E7%9A%84DNA%E5%BA%8F%E5%88%97.cpp)（medium 【字符串哈希】）
- [202-快乐数](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/202-%E5%BF%AB%E4%B9%90%E6%95%B0.cpp)（easy）
- [205-同构字符串](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/205-%E5%90%8C%E6%9E%84%E5%AD%97%E7%AC%A6%E4%B8%B2.cpp)（easy 【元素和出现位置映射关系】）
- [217-存在重复元素](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/217-%E5%AD%98%E5%9C%A8%E9%87%8D%E5%A4%8D%E5%85%83%E7%B4%A0.cpp)（easy 【元素和出现次数映射关系】）
- [219-存在重复元素Ⅱ](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/219-%E5%AD%98%E5%9C%A8%E9%87%8D%E5%A4%8D%E5%85%83%E7%B4%A0%E2%85%A1.cpp)（easy 【元素和出现位置映射关系】）
- [242-有效的字母异位词](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/242-%E6%9C%89%E6%95%88%E7%9A%84%E5%AD%97%E6%AF%8D%E5%BC%82%E4%BD%8D%E8%AF%8D.cpp)（easy 【元素和出现次数映射关系】）
- [290-词语模式](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/290-%E8%AF%8D%E8%AF%AD%E6%A8%A1%E5%BC%8F.cpp)（easy 【元素和出现位置映射关系】）
- [387-字符串中的第一个唯一字符](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/387-%E5%AD%97%E7%AC%A6%E4%B8%B2%E4%B8%AD%E7%9A%84%E7%AC%AC%E4%B8%80%E4%B8%AA%E5%94%AF%E4%B8%80%E5%AD%97%E7%AC%A6.cpp)（easy 【元素和出现次数映射关系】）
- [409-最长回文串](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E5%93%88%E5%B8%8C%E8%A1%A8/409-%E6%9C%80%E9%95%BF%E5%9B%9E%E6%96%87%E4%B8%B2.cpp)（easy 【元素和出现次数映射关系】）