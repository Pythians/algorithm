# algorithm

#### 工程主目录 

***stdafx.h*** 引入需要的库文件 

***algorithm.cpp*** 测试算法

```c++
// 梅森随机数引擎
mt19937 e;
// 随机数分布 & 范围 [0,1000]
uniform_int_distribution<int>dis( 0, 1000 );
// 生成随机数组
int count = 10000;
int * arr = new int[ count ];
for( int i = 0; i < count; i++ )
{
	arr[ i ] = dis( e );
}
```

生成随机数组测试