/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class ADDNATRL
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);
		try {
    		long n = sc.nextLong();
    		long ans = (long)(n*(n+1)/2);
    		
    		System.out.println(ans);
    		} catch(Exception e) {
		}
		sc.close();
	}
}