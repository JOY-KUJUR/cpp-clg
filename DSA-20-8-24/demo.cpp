#include<iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 56, 6, 789, 9, 8, 2, 34};
    
    cout << "Enter the number to find its index in the array: ";
    int n, i;
    cin >> n;
    int flag = 0;
    
    for(i = 0; i < 11; i++){ 
        if(n == arr[i]){
            cout << "Element is at index: " << i << endl;
            flag = 1;  
            break;
        }
    }
    
    if(flag == 0){ 
        cout << "Element is not present" << endl;
    }
    
    return 0;
}

