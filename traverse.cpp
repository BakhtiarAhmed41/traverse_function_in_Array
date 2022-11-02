#include<iostream>
using namespace std;


int A[]={2,4,6,8,10,12,14};
int n = sizeof(A)/sizeof(int);

int traverse(int A[]) {
	for (int i = 0;i < n;i++) {
        if(i<n-1){
		cout << A[i]<<",";}
        else{
		cout << A[i]; }
	}
}

int main(){
  traverse(A);
  }
