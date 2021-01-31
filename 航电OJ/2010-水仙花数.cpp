#include <iostream>
using namespace std;
int main()
{
	int m, n;
	while ( cin >> m >> n )
	{
		int	count = 0;
		int	a[10];
		for ( int i = m; i <= n; i++ )
		{
			int bai, ge, shi;
			bai	= i / 100;
			shi	= (i - bai * 100) / 10;
			ge	= i - bai * 100 - shi * 10;
			if ( i == bai * bai * bai + ge * ge * ge + shi * shi * shi )
			{
				a[count] = i;
				count++;
			}
		}
		if ( count == 0 )
		{
			cout << "no" << endl;
		}else{
			for ( int j = 0; j < count; j++ )
			{
				cout << a[j];
				if ( j != count - 1 )
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return(0);
}
