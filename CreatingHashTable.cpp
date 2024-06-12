#include<iostream>
#include<math.h>
using namespace std;

#define MAX 1000  //macros

bool HashTable[MAX+1][2]; // Automatically puts the value zero;

bool Search(int x){
    if(x >=0){
        if(HashTable[x][0] == 1){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        x = abs(x);
        if(HashTable[x][1] == 1){
            return true;
        }
        else{
            return false;
        }
    }
}

void insert(int a[], int n){
    for(int i = 0; i<n;i++){
        if(a[i] >= 0){
            HashTable[a[i]][0] = 1;   
        }
        else
        {
            HashTable[abs(a[i])][1] = 1;   
        }
    }

}
int main(){
    int arr[] = {-1, 9, 2, -5, 1};
    int n = sizeof(arr)/ sizeof(arr[0]);
    insert(arr, n);
    int find = 1;
    if(Search(find)){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is not Present";
    }
    return 0;
}