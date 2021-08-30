### 基础知识

十大排序算法分类：
- 比较类排序：
	- 插入排序类：直接插入：将一个记录插入到已经排好序的有序表中<br>
	　　　　　　希尔排序：跳跃分割，局部基本有序<br>
	- 选择排序类：简单选择：找到合适的关键字再交换<br>
	　　　　　　堆排序<br>
	- 交换排序类：冒泡排序：外循环次数，内循环趟数<br>
	　　　　　　快速排序：一分为二，一大一小<br>
	- 归并排序类：两路归并：假定待排序表含有n个记录，则可视为n个有序的子表，每个子表长度为1，然后两两归并<br>
	　　　　　　多路归并
- 非比较排序：
	- 计数排序
	- 桶排序
	- 基数排序

### 排序算法性能对比分析

![表1-1](https://i.imgur.com/m6zKDEI.png)

图中名词说明：<br>
- n : 数据规模<br>
- k : “桶”的个数<br>
- In-place : 占用常数内存，不占用额外内存<br>
- Out-place : 占用额外内存
    
### 参考
1、[https://blog.csdn.net/hellozhxy/article/details/79911867](https://blog.csdn.net/hellozhxy/article/details/79911867)<br>
2、[https://blog.csdn.net/opooc/article/details/80994353](https://blog.csdn.net/opooc/article/details/80994353)<br>
3、[https://blog.csdn.net/hellozhxy/article/details/79911867](https://blog.csdn.net/hellozhxy/article/details/79911867)<br>
4、[https://blog.csdn.net/sb985/article/details/79921571](https://blog.csdn.net/sb985/article/details/79921571)<br>

### 目录

- [1-直接插入&&希尔排序](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E6%8E%92%E5%BA%8F%E7%AE%97%E6%B3%95/1-%E7%9B%B4%E6%8E%A5%E6%8F%92%E5%85%A5&&%E5%B8%8C%E5%B0%94%E6%8E%92%E5%BA%8F.cpp)
- [2-简单选择&&堆排序](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E6%8E%92%E5%BA%8F%E7%AE%97%E6%B3%95/2-%E7%AE%80%E5%8D%95%E9%80%89%E6%8B%A9&&%E5%A0%86%E6%8E%92%E5%BA%8F.cpp)
- [3-冒泡排序&&快速排序](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E6%8E%92%E5%BA%8F%E7%AE%97%E6%B3%95/3-%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F&&%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F.cpp)
- [4-归并排序](https://github.com/SunnyZhang06/LeetCodeSolution/tree/main/%E6%8E%92%E5%BA%8F%E7%AE%97%E6%B3%95/4-%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F.cpp)
