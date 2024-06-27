//完成通訊錄
//1.添加聯絡人
//2.顯示所有聯絡人
//3.刪除聯絡人  
//4.查詢聯絡人
//5.修改聯絡人
//6.清空聯絡人
//0.退出

#include <iostream>
using namespace std;
#define MAX 1000

//通訊錄介面
void showMenu(){
    cout << "---------------------" << endl;
    cout << "  1.添加聯絡人" << endl;
    cout << "  2.顯示所有聯絡人" << endl;
    cout << "  3.刪除聯絡人" << endl;
    cout << "  4.查詢聯絡人" << endl;
    cout << "  5.修改聯絡人" << endl;
    cout << "  6.清空聯絡人" << endl;
    cout << "  0.退出" << endl;
    cout << "---------------------" << endl;
}

struct Person{
    string m_Name; //姓名
    int m_Sex; //1.男 2.女
    int m_Age; //年齡
    string m_Phone; //  手機號碼
    string m_Address; //地址
};

struct Addressbooks{
    struct Person personArray[MAX]; //通訊錄
    int m_Size; //通訊錄人數
};

void addPerson(Addressbooks * abs){
    if(abs->m_Size == MAX){
        cout << "通訊錄已滿,無法新增聯絡人" << endl;
    }
    else{
        cout << "請輸入姓名:" << endl;
        cin >> abs->personArray[abs->m_Size].m_Name;
        cout << "請輸入性別(1.男 2.女):" << endl;
        cin >> abs->personArray[abs->m_Size].m_Sex;
        cout << "請輸入年齡:" << endl;
        cin >> abs->personArray[abs->m_Size].m_Age;
        cout << "請輸入手機號碼:" << endl;
        cin >> abs->personArray[abs->m_Size].m_Phone;
        cout << "請輸入地址:" << endl;
        cin >> abs->personArray[abs->m_Size].m_Address;
        abs->m_Size++;
        system ("pause");
        system ("cls");
    }
}

void showPerson(Addressbooks * abs){
    if(abs->m_Size == 0){
        cout << "通訊錄中沒有任何聯絡人" << endl;
    }
    else{
        for(int i = 0; i < abs->m_Size; i++){
            cout << "姓名:" << abs->personArray[i].m_Name << endl;
            cout << "性別:" << abs->personArray[i].m_Sex << endl;
            cout << "年齡:" << abs->personArray[i].m_Age << endl;
            cout << "手機號碼:" << abs->personArray[i].m_Phone << endl;
            cout << "地址:" << abs->personArray[i].m_Address << endl;
        }
    }
    system ("pause");
    system ("cls");
}


int main(){
    // 創建通訊錄結構體變量
    Addressbooks abs;
    // 通訊錄人數初始化
    abs.m_Size = 0;

    int select = 0; //用戶輸入選擇

    while(true){
        cin >> select;

        showMenu();

        switch(select){
            case 1:
                cout << "添加聯絡人" << endl;
                addPerson(&abs);
                break;
            case 2:
                cout << "顯示所有聯絡人" << endl;
                break;
            case 3:
                cout << "刪除聯絡人" << endl;
                break;
            case 4:
                cout << "查詢聯絡人" << endl;
                break;
            case 5:
                cout << "修改聯絡人" << endl;
                break;
            case 6:
                cout << "清空聯絡人" << endl;
                break;
            case 0:
                cout << "歡迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "輸入錯誤" << endl;
                break;
        }
    }



}

