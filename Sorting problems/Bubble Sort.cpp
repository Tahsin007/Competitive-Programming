#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int data[], int n){
    for(int j=0;j<n;j++){
        for (int i = 0; i < n - j-1; i++)
        {
            if (data[i] > data[i + 1])
            {
                int tmp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = tmp;
            }
        }
    }
    
}

void printArray(int data[], int n){
    for(int i=0;i<n;i++){
        cout<<data[i]<<endl;
    }
}

int main(){
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data)/sizeof(data[0]);
    bubbleSort(data, size);
    printArray(data,size);
    // int sorted[size]= bubbleSort(data,size);

}
