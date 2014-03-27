import java.math.BigInteger;
import java.util.Scanner;

public class c121
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		int n;
		int i,j;
		int count;
		boolean flag = true;
		while(cin.hasNext())
		{
			n = cin.nextInt();
			BigInteger sum = BigInteger.valueOf(0);
			BigInteger base1 = BigInteger.valueOf(1);
			BigInteger base2 = BigInteger.valueOf(1);

			for (count = 2 ,i = 0, j = 1; count < n ; count++)
			{
				sum = base1.add(base2);
				if (flag)
				{
					base1 = sum;
					flag = false;
				}
				else
				{
					base2 = sum;
					flag = true;
				}
			}
			if (n == 0)
				System.out.println("The Fibonacci number for "+n+" is 0");
			else if (n == 1|| n == 2)
				System.out.println("The Fibonacci number for "+n+" is 1");
			else
				System.out.println("The Fibonacci number for "+n+" is "+sum);
		}
	}
}