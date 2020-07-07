#include <unistd.h>
#include <stdbool.h>

void ft_print_comb(void);

int main()
{
	ft_print_comb();
}

void ft_print_comb(void)
{
	char a,b,c;
	int arr1[1000], arr2[1000], arr3[1000];
	int loop = 0;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			for(int k=0; k<10; k++)
			{
				if(i != j && i != k && j != k)
				{
					int clash = 0;
					for(int l=0; l<=loop; l++)
					{
						clash = 0;
						if(i == arr1[l] || i == arr2[l] || i == arr3[l]) clash++;
						if(j == arr1[l] || j == arr2[l] || j == arr3[l]) clash++;
						if(k == arr1[l] || k == arr2[l] || k == arr3[l]) clash++;
						if(clash == 3) break;
					}
					if(clash == 3)
					{
						arr1[loop] = i;
						arr2[loop] = j;
						arr3[loop] = k;
						loop++;
						a = (char)i+48;
						b = (char)j+48;
						c = (char)k+48;
						write(1, &a, 1);
						write(1, &b, 1);
						write(1, &c, 1);
						char *com = ", ";
						write(1, &*com, 2);
					}
				}
			}
		}
	}
}
