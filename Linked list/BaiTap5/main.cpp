#include "lib.h"


int main()
{
    int value;
    Node *list=NULL;

    //  Nhập dữ liệu
    cout<<"Nhap 0 de dung: ";
    do {
        cin>>value;
        input(list,value);
    } while (value);

    cout<<"Input: ";
    output(list);

    //  Xử lí
    cout<<"Nhap gia tri can chen: ";
    cin>>value;
    insertSort(list,value);

    //  Xuất danh sách 
    cout<<"Output: ";
    output(list);

    //  Giải phóng bộ nhớ
    deleteList(list);
    cout<<"\nhoan thanh...\n";

    return 225;
}