char arr[4] = { '+', '-' , '*' , '/' };

int sum = 0;//the total
int test(int a, int b, int c, int d)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				//calculate
				switch (arr[i])
				{
				case '+':
						sum = a + b;
						break;
				case '-':
					sum = a - b;
					break;
				case '*':
					sum = a * b;
					break;
				case '/':
					sum = a / b;
					break;

				}
				switch (arr[j])
				{
				case '+':
					sum += c;
					break;
				case '-':
					sum -= c;
					break;
				case '*':
					sum *= c;
					break;
				case '/':
					sum /= c;
					break;

				}
				switch (arr[k])
				{
				case '+':
					sum += d;
					break;
				case '-':
					sum -= d;
					break;
				case '*':
					sum *= d;
					break;
				case '/':
					sum /= d;
					break;
				}
				if (sum == 24);
				return 1;
			}
		}
	}

	return 0;
}
