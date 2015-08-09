#include "stdafx.h"

void insertSort( int * arr, int count )
{
	if( arr == nullptr || count == 0 )
	{
		return;
	}
	for( int i = 0; i < count; i++ )
	{
		int tem = arr[ i ];
		int j = i;
		while( j > 0 && tem > arr[ j - 1 ] )
		{
			arr[ j ] = arr[ j - 1 ];
			--j;
		}
		arr[ j ] = tem;
	}
}