#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int data[], int n)
{
    for (int j = 0; j < n; j++)
    {
        int i = j;
        while(i>0 && data[i-1]>data[i]){
            int tmp = data[i-1];
            data[i-1]=data[i];
            data[i] = tmp;
            i--;
        }
    }
}

void printArray(int data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << endl;
    }
}

int main()
{
    int data[] = {-2, 45, 0, 11, -9};
    int size = sizeof(data) / sizeof(data[0]);
    bubbleSort(data, size);
    printArray(data, size);
    // int sorted[size]= bubbleSort(data,size);
}
