#include<iostream>
using namespace std;
int missingNumber(int A[], int N)
{
    // Your code goes here
    for (int i = 0; i < N; i++){
        if(A[i] != N){
            cout << A[i];
            break;
        }
    }
    return -1;
}
int main(){
    return 0;
    int N = 4;
    int a[] = {1, 3, 4};
    missingNumber(a, N);
    return 0;
}