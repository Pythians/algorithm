// algorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


using namespace std;

// 声明外部函数
extern void insertSort( int *, int );
extern void selectSort( int *, int );
// 数组输出
void printArr( int*, int );

int main( )
{
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
	auto tb = time( 0 );
	insertSort( arr, count );
	//cout << "With time: " << time( 0 ) - tb << endl;
	printArr( arr, count );
	system( "PAUSE" );
	return 0;
}

void printArr( int *arr, int count )
{
	for( int i = 0; i < count; i++ )
	{
		cout << " " << arr[ i ];
	}
	cout << endl;
}
