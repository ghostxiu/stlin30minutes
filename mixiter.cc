#include<iostream>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm> //find() need
//��������������
//advance()�Ƕ���Ŀ������������
//distance()��������������֮��ľ��롣
using namespace std;
int arr[5]={1,2,3,4,5};
void Display(list<int> &v,const char *s)
{
    cout << endl << s << endl ;
    copy(v.begin(),v.end(),std::ostream_iterator<int>(cout , " "));
    cout << endl;
}
int main()
{
    list<int> iList;
    //���ʹ��front_inserter �����ν�Ԫ�ز���ǰ�ˣ��������鵹��
    copy(arr,arr+5,back_inserter(iList));
    list<int>::iterator p =
                find(iList.begin(),iList.end(),2);
    Display(iList,"Before advance");
    cout << "before: p == " << *p << endl;
    advance(p,4);//same as p = p+2;
    cout << "after : p == " << *p << endl;
    Display(iList,"After advance");

    int k = 0 ;
    k = distance(p,iList.end());
    cout << "k == " << k << endl;
    return 0;

}
