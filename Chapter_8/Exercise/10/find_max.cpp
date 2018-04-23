#include "std_lib_facilities.h"
//--------------------------------------------------------------------------------------
void max_heapify(const unsigned int& i, vector<int> & A, const int& heap_size)
{
	int l_index = 2*i + 1;
	int r_index = 2*i + 2;
	int largest = i;

	if (l_index < heap_size && A[l_index] > A[i])
		largest = l_index;

	if (r_index < heap_size && A[r_index] > A[largest])
		largest = r_index;

	if (largest != i)
	{
		//Swap the A[largest] with A[i]
		swap(A[i], A[largest]);
		max_heapify(largest, A, heap_size);
	}
}
//--------------------------------------------------------------------------------------
void build_heap(vector<int> & B, int heap_size)
//utility function which traves and call heapy to make max_heap
{
	for (int i = heap_size / 2 - 1; i >= 0; --i) 
		max_heapify(i,B,heap_size);
}
//--------------------------------------------------------------------------------------
int maxv(vector<int> num)
//this function makes a copy of vector form a max-heap then returns the root of max-heap
{
	build_heap(num, num.size());
	return num[0];
}
//--------------------------------------------------------------------------------------
int main()
{
	try{
		vector<int> v;
		cout<<"\nEnter integers: ";
		for(int x; cin>>x;)
			v.push_back(x);
		cout<<"\nMaximum is: "<<maxv(v)<<"\n";
		return 0;
	}
	catch(...){
		cerr<<"\nSomething is wrong\n";
		return 1;
	}
}