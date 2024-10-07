#include <iostream>
using namespace std;

int main() {
    
    int n1 = 3;
    int poly1[] = {1, 2, 3};  

   
    int n2 = 4;
    int poly2[] = {4, 0, 5,4};  

    
    int maxSize = max(n1, n2);
    int result[maxSize]={0};  
    // for (int i = 0; i < maxSize; i++) {
    //     result[i] = 0;
    // }

   
    for (int i = 0; i < n1; i++) {
        result[i] = poly1[i];
    }

    
    for (int i = 0; i < n2; i++) {
        result[i] += poly2[i];
    }

    
    cout << "Resultant polynomial: ";
    for (int i = 0; i < maxSize; i++) {
       
            cout << result[i] << "x^" << i;
            if (i != maxSize - 1) {
                cout << " + ";
            }
        
    }

    return 0;
}
