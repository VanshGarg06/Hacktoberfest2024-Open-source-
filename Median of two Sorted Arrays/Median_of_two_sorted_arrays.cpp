#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int main(){
    int arr1[MAX],arr2[MAX];
    int n1,n2;
    //Taking user input for the First Array
    cout<<"Enter the number of Elements for First array:";
    cin>>n1;
    cout<<"Enter the elements of first array in sorted ascending order:"<<endl;
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }

    //Taking user input for the Second Array
    cout<<"Enter the number of Elements for Second array:";
    cin>>n2;
    cout<<"Enter the elements of second array in sorted ascending order:"<<endl;
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    //Creating new Vector of size with addition of both array sizes
    vector<int> newarr(n1+n2);
    //Counter variable to access elements of Array
    int m=0,n=0,index=0;
    //Inserting elements of First Array in a new Vector
    while(m<n1){
        newarr[index++] = arr1[m];
        m++;
    }
    //Inserting elements of Second Array in a new Vector
    while(n<n2){
        newarr[index++] = arr2[n];
        n++;
    }
    //Sorting of the new Vector having all elements and arranging in ascending order
    sort(newarr.begin(),newarr.end());
    //Displaying merged final array
    cout<<endl<<"the merged array"<<endl;
    for(int i=0;i<(n1+n2);i++){
        cout<<newarr[i]<<" ";
    }
    int num = newarr.size();
    cout<<endl<<"Median:";
    //Checking if the size of the data is even or odd
    if(num%2!=0){
        //If the size of data input is odd then the middle element is Median
        cout<<newarr[num/2];
    }
    else{
        //If the size of data input is even then the average of middle and one ahead of middle element is median
        cout<<(newarr[num/2]+newarr[num/2 -1])/2.0;
    }

    return 0;
}


//Time Complexity: O(N)
//Space Complexity: O(1)
