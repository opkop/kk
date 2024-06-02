#include <iostream>
#include <climits> // for INT_MIN and INT_MAX
using namespace std;

// Function to find the minimum and maximum in an array
pair<int, int> findMinMax(int arr[], int n, int &steps) {
    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    // Initialize steps
    steps = 0;

    // Iterate through the array to find min and max
    for (int i = 0; i < n; ++i) {
        steps += 2; // Increment steps for each comparison
        if (arr[i] < minValue)
            minValue = arr[i];
        steps++; // Increment steps for assignment
        if (arr[i] > maxValue)
            maxValue = arr[i];
        steps++; // Increment steps for assignment
    }

    return make_pair(minValue, maxValue);
}

int main() {
	int a;
	cout<<"Enter a number:\n";
	cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
    	cin>>arr[i];
	}
    int n = sizeof(arr) / sizeof(arr[0]);
    int steps;

    pair<int, int> minMax = findMinMax(arr, n, steps);
    cout << "Minimum value: " << minMax.first << endl;
    cout << "Maximum value: " << minMax.second << endl;
    cout << "Number of steps: " << steps << endl;

    return 0;
}

