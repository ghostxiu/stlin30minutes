//���������
//ֻ�õ���copy()���Ϳ�����ɽ�ʸ���еĶ�����뵽�����ǰ�˵Ĳ���
#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>//front_inserter(),ostream_iterator need
#include <algorithm>//copy() need
using namespace std;
void Display(list<int> &v,const char *s)
{
    cout << endl << s << endl ;
    copy(v.begin(),v.end(),std::ostream_iterator<int>(cout , " "));
    cout << endl;
}
int iArray[5] = {1,2,3,4,5};
int main()
{
    list<int> iList;
//Copy iArr backwards into iList
    copy(iArray,iArray+5,front_inserter(iList));
    Display(iList,"Before find and copy");
//��������뵽���ݼ�ǰ��
    //Locate value 3 in iList
    list<int>:: iterator p =
        find(iList.begin(),iList.end(),3) ;

    //Copy fist two iArray values to iList ahead of p
    copy(iArray,iArray+2,inserter(iList,p));
    //��������뵽������p����ǰ��
    Display(iList,"After find and copy");


    copy(iArray,iArray+2,back_inserter(iList));
    Display(iList,"After  copy to the end");
    return 0 ;
}
/*���ֲ��������
��ͨ������ inserter ��������뵽�������κζ���ǰ��
front_inserter ������������ݼ���ǰ�桪���������磬�����ͷ��
back_inserter ��������뵽���ϵ�β�������������磬ʸ����β����
*/
