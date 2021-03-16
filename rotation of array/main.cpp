// C++ program to rotate an array by
// d elements
#include <bits/stdc++.h>
using namespace std;

/*Function to left Rotate arr[] of
size n by 1*/
void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i < n - 1; i++)
		arr[i] = arr[i + 1];

	arr[n-1] = temp;
}

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

/* Driver program to test above functions */
int main(){

//     long long t;
// 	cin >> t;

// 	while(t--){
//   int *array, size,d,t;





//       cin>>size;
//   array = new int [size];
//     cin>>size;
//      cin>>d;


//     for(int i=0;i<size;i++){
//         cin>>array[i];
//     }
    long long t;
	cin >> t;

	while(t--){
	    long long n, d;
	    cin >> n >> d;
	     int a[n];
	    for(long long i = 0; i < n; i++){

	        cin >> a[i];
	    }
	// Function calling
	leftRotate(a, d, n);
	printArray(a, n);
	cout<<"\n";
}
	return 0;
}
