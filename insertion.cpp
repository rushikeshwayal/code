#include<iostream>
using namespace std;
int main()
{
int arr[5]={34,53,22,19,12};


    for (int i = 1; i < 5; i++)
    {
        int temp = arr[i];
        int j= i-1;
        while (arr[j]>temp && j>=0)

        {
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=temp;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}