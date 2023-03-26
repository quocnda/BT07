#include<iostream>
using namespace std;

int* thu()
{
    int a[3]={1,2,3};

    return a;
}
int main() {
    int * tmp=thu();
    for(int i=0;i<3;i++) {
        cout<<tmp[i]<<" ";
    }
    /*ở đây chương trình bị lỗi vì trong hàm thu() ta lệnh cho bộ nhớ cấp 1 mảng a trong hàm, sau khi kết thúc hàm thì
    bộ nhớ cũng bị thu hồi, dẫn đến dòng 11 khi đó tmp vẫn là 1 con trỏ chưa có giá trị gì, để khắc phục thì ta đưa int a 
    ra làm biến cục bộ*/
}