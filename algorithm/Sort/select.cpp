#include "stdafx.h"

// 交换函数 
void swap( int& a, int& b )
{
	a = a^b;
	b = a^b;
	a = a^b;
}
void selectSort( int *arr, int count )
{
	if( arr == nullptr || count == 0 )
	{
		return;
	}
	for( int i = 1; i < count; i++ )
	{
		int tem = arr[ i - 1 ];
		for( int j = i; j < count; j++ )
		{
			if( tem > arr[j] )
			{
				swap( tem, arr[ j ] );
			}
		}
		arr[ i - 1 ] = tem;
	}
}