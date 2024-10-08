#include <iostream>
//If repeated elements are there, binary search will return the index of first occurence.

int binarysearch(int* arr, int target, int len)
{
	int low = 0;
	int high = len - 1;
	
	bool isAsc = false;
	if(arr[high] > arr[low])
		isAsc = true;
	
	while(low <= high)
	{
		//int mid = (low+high)/2;
		int mid = low + (high - low)/2;
		
		if(target == arr[mid])
		{
			return mid;
		}
		
		if(isAsc == true)
		{
			if(target > arr[mid])
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		else
		{
			if(target < arr[mid])
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		
	}

	return -1;	
}

int main()
{
	//int arr[] = {1,3,7,9,10,13,14};
	int arr[] = {4,-1,-3,-10,-11};
	
	//int target = 1;
	
	for(auto& target : arr)
	{
	
		int index = binarysearch(arr, target, sizeof(arr)/sizeof(arr[0]));
		
		std::cout << "Index of " << target << " is " << index << '\n';
		
	}
	
	int index = binarysearch(arr, 5, sizeof(arr)/sizeof(arr[0]));
		
	std::cout << "Index of " << 5 << " is " << index << '\n';
	
	return 0;
}

//https://www.youtube.com/watch?v=f6UU7V3szVw
