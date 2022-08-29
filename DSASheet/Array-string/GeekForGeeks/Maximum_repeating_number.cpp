/*
https://practice.geeksforgeeks.org/problems/maximum-repeating-number4858/1?page=2&difficulty[]=-1&company[]=Amazon&company[]=Microsoft&company[]=Google&company[]=Samsung&company[]=MakeMyTrip&company[]=Paytm&company[]=Goldman%20Sachs&company[]=D-E-Shaw&company[]=Oracle&company[]=Facebook&company[]=Cisco&company[]=Intuit%20&company[]=Directi&company[]=Salesforce&company[]=Twitter&company[]=PayPal&company[]=Zomato&category[]=Arrays&sortBy=submissions

Given an array Arr of size N, the array contains numbers in range from 0 to K-1 where K is a positive integer and K <= N. Find the maximum repeating number in this array. If there are two or more maximum repeating numbers return the element having least value.

Example 1:

Input:
N = 4, K = 3
Arr[] = {2, 2, 1, 2}
Output: 2
Explanation: 2 is the most frequent
element.
Example 2:

Input:
N = 6, K = 3
Arr[] = {2, 2, 1, 0, 0, 1}
Output: 0
Explanation: 0, 1 and 2 all have same
frequency of 2.But since 0 is smallest,
you need to return 0.
*/

	// Returns maximum repeating element in arr[0..n-1].
	// The array elements are in range from 0 to k-1
	int maxRepeatingVector(int *arr, int n, int k) {
	    // code here
	   
	    vector<int> hash(k, 0);
	    // Iterate though input array, for every element
	    // arr[i], increment hash[arr[i]] by 1
	    for (int i = 0; i < n; i++)
	        hash[arr[i]]++;

	    // Find index of the maximum repeating element
	    int max = hash[0], result = 0;
	    for (int i = 1; i < k; i++) {
	        if (hash[i] > max) {
	            max = hash[i];
	            result = i;
	        }
	    }
	    // Return index of the maximum element
	    return result;
	}
	
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	   
	    int fre[k]={0};
	    int max=INT_MIN;
	    
	    for(int j=0;j<n;j++)
	    {
	        fre[arr[j]]++;
	    }

        
	    int result = 0;
	    for(int i=0;i<k;i++)
	    {
           
	        if(fre[i]>max)
	        {
                max=fre[i];
	            result=i;
	        }
	    }
	    
	    return result;
	}
	
	int maxRepeatinghash(int *arr, int n, int k) {
    // code here
    for(int i = 0;i < n;i++)
        arr[arr[i]%k] += k;
        
    int res = 0;
    int mx = arr[0]/k;
    for(int i = 1;i < n;i++)
    {
        if(mx < arr[i]/k)
        {
            mx = arr[i]/k;
            res = i;
        }
    }
    return res;
}