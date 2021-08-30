/*
* @author：sunny
* 202、快乐数
* https://leetcode-cn.com/problems/happy-number/
* 编写一个算法来判断一个数是不是“快乐数”。一个“快乐数”定义为：对于一个正整数，
* 每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，
* 也可能是无限循环但始终变不到 1 。如果可以变为 1，那么这个数就是快乐数。
*/

/*
* 方法1：用HashSet来记录所有出现过的数字
* 思路：规律：往后面计算会出现重复数字，快乐数重复1，非快乐数重复其他数字，
*       用HashSet来记录所有出现过的数字，然后每出现一个新数字，在HashSet中查找是否存在，若不存在
*       则加入表中，若存在则跳出循环且判断此数是否为1。
*/

bool isHappy(int n) 
{	
	unordered_set<int> st;
	while(n!=1)
	{
		int sum=0;
		while(n)
		{
			sum+=(n%10)*(n%10);//从低位往高位计算平方和
			n/=10;
		}
		n=sum;
		if(st.count(n))
			break;
		st.insert(n);
	}
	return n==1;
}

/*
* 方法2：根据快乐数的特点
* 思路：也可以不用HashSet，非快乐有个特点，循环的数字中必定会有4（这里不证明）
*/
	
bool isHappy(int n) 
{
	while(n!=1 && n!=4)
	{
		int sum=0;
		while(n)
		{
			sum+=(n%10)*(n%10);
			n/=10;
		}
		n=sum;
	}
	return n==1;
}

