//ָ�������
#include<iostream>
#include<algorithm>

using namespace std ;

#define S 100

int arr[S];

int main ()
{
    arr[20] = 50 ;
    int *ip = find(arr,arr+S,50);
    if(ip == arr + S)
        //Ϊ���ж�find()�Ƿ�ɹ��������в���ip ��past-end�Ƿ���ȡ�
        cout << "50 is not in arr\n";
    else
        cout << *ip << " find in arr\n";

    return 0;
}
