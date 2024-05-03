// C++ code for the above approach

#include <algorithm>
#include <iostream>
using namespace std;


struct Job {

	char id; 
	int dead; 
	int profit; 
				
};


void Sorting(Job job[],int s){
for(int i=0;i<s;i++){
  for(int j=i+1;j<s;j++){
  //descending sorting profit wise
  if(job[i].profit<job[j].profit){
  swap(job[i],job[j]);
  }
   }
 }
}
// Returns maximum profit from jobs
void printJobScheduling(Job arr[], int n)
{
	// Sort all jobs according to decreasing order of profit
	Sorting(arr,n);

	int result[n]; 
	bool slot[n]; 

	// Initialize all slots to be free
	for (int i = 0; i < n; i++)
		slot[i] = false;

	// Iterate through all given job
	for (int i = 0; i < n; i++) {
		
		for (int j =arr[i].dead - 1; j >= 0; j--) {
		
			if (slot[j] == false) {
				result[j] = i; // Add this job to result
				slot[j] = true; // Make this slot occupied
				break;
			}
		}
	}

	// Print the result
	for (int i = 0; i < n; i++)
		if (slot[i])
			cout << arr[result[i]].id << " ";
}

// Driver's code
int main()
{
	Job arr[] = { { 'a', 2, 100 },
				{ 'b', 1, 19 },
				{ 'c', 2, 27 },
				{ 'd', 1, 25 },
				{ 'e', 3, 15 } };

	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Following is maximum profit sequence of jobs "<<endl;
	printJobScheduling(arr, n);
	return 0;
}


// This code is contributed by Aditya Kumar (adityakumar129) 
