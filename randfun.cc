//��������������
#include<iostream>
#include<cstdlib>//rand , srand
#include<ctime>//need time
#include<algorithm> //random_shuffle()
#include<vector>
#include<functional> // ptr_fun()
#include<iterator>
using namespace std ;

//Data to randomsize
int arr[10]= {1,2,3,4,5,6,7,8,9,10};

vector<int> v(arr,arr+10);
//ע������vector��������ʽ


//Funtion prototypes
void Display(vector<int> &vr, const char *s)
{
    cout << endl << s << endl ;
    copy(vr.begin(),vr.end(),ostream_iterator<int>(cout," "));
    cout << endl ;
}
unsigned int RandInt(const unsigned int n)
{
    return rand() % n;
}

int main()
{
    srand(time(NULL));
    Display(v,"Before shuffle");

    pointer_to_unary_function<unsigned int ,unsigned int >
        ptr_RandInt = ptr_fun(RandInt);

    //���ʹ��STL�ĵ�Ŀ����ģ�嶨����һ������ptr_RandInt��������ַ��ʼ�������ǵĺ���RandInt()��
    //��Ŀ��������һ��������������һ��ֵ������random_shuffle()�������µ��ã�
    //random_shuffle(v.begin(), v.end(), ptr_RandInt);�ڱ������У�������ֻ�Ǽ򵥵ĵ���rand()������

    //ptr_fun�ǽ�һ����ͨ�ĺ��������һ���º���(functor),
    random_shuffle(v.begin(),v.end(),ptr_RandInt);
    Display(v,"After shuffle");
    return 0;
}


/* std::random_shuffle //xxx-?�������
template <class RandomAccessIterator, class RandomNumberGenerator>
  void random_shuffle (RandomAccessIterator first, RandomAccessIterator last,
                       RandomNumberGenerator& gen)
{
  iterator_traits<RandomAccessIterator>::difference_type i, n;
  n = (last-first);
  for (i=n-1; i>0; --i) {
    swap (first[i],first[gen(i+1)]);
  }
}
*/
