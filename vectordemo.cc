//��������������
//ʵ�ֺ�iterdemoһ���Ĺ���
//�������͵�����������end()��begin(),��Щ�������������rend()��rebegin()����
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> intVector(100);

int main()
{
    intVector[20] =50;
    vector<int>::iterator InteRator =
        find(intVector.begin(),intVector.end(),50);
    if(InteRator == intVector.end())
        cout << "50 is not in vector\n" ;
    else
        cout << "Vector contains value " << *InteRator << endl ;

    return 0;
}
