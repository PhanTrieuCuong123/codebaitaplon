#include<iostream>
using namespace std;
char Ban_Co[3][3]={'1','2','3','4','5','6','7','8','9'};
char Nguoi_di_truoc ='X';
char Nguoi_di_sau ='O';
void Ve_Ban_co()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<< Ban_Co[i][j]<< " ";
        }
        cout << endl;
    }
}
void Nhap_X()
{
    int a;
    cout <<"Nguoi nhap X cac so tu 1 den 9 tren ban co :";cin>>a;
    switch(a)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_truoc;break;
    case 2: Ban_Co[0][1]=Nguoi_di_truoc;break;
    case 3: Ban_Co[0][2]=Nguoi_di_truoc;break;
    case 4: Ban_Co[1][0]=Nguoi_di_truoc;break;
    case 5: Ban_Co[1][1]=Nguoi_di_truoc;break;
    case 6: Ban_Co[1][2]=Nguoi_di_truoc;break;
    case 7: Ban_Co[2][0]=Nguoi_di_truoc;break;
    case 8: Ban_Co[2][1]=Nguoi_di_truoc;break;
    case 9: Ban_Co[2][2]=Nguoi_di_truoc;break;
    }
}
void Nhap_O()
{
    int b;
    cout<<"Nguoi nhap O cac so tu 1 den 9 tren ban co:";cin>>b;
    switch(b)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_sau;break;
    case 2: Ban_Co[0][1]=Nguoi_di_sau;break;
    case 3: Ban_Co[0][2]=Nguoi_di_sau;break;
    case 4: Ban_Co[1][0]=Nguoi_di_sau;break;
    case 5: Ban_Co[1][1]=Nguoi_di_sau;break;
    case 6: Ban_Co[1][2]=Nguoi_di_sau;break;
    case 7: Ban_Co[2][0]=Nguoi_di_sau;break;
    case 8: Ban_Co[2][1]=Nguoi_di_sau;break;
    case 9: Ban_Co[2][2]=Nguoi_di_sau;break;
    }
}
void Nhap_X1()
{
    int a;
    cout <<"Nguoi nhap X cac so tu 1 den 9 tren ban co :";cin>>a;
    switch(a)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_truoc;break;
    case 2: Ban_Co[0][1]=Nguoi_di_truoc;break;
    case 3: Ban_Co[0][2]=Nguoi_di_truoc;break;
    case 4: Ban_Co[1][0]=Nguoi_di_truoc;break;
    case 5: Ban_Co[1][1]=Nguoi_di_truoc;break;
    case 6: Ban_Co[1][2]=Nguoi_di_truoc;break;
    case 7: Ban_Co[2][0]=Nguoi_di_truoc;break;
    case 8: Ban_Co[2][1]=Nguoi_di_truoc;break;
    case 9: Ban_Co[2][2]=Nguoi_di_truoc;break;
    }
}
void Nhap_O1()
{
    int b;
    cout<<"Nguoi nhap O cac so tu 1 den 9 tren ban co:";cin>>b;
    switch(b)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_sau;break;
    case 2: Ban_Co[0][1]=Nguoi_di_sau;break;
    case 3: Ban_Co[0][2]=Nguoi_di_sau;break;
    case 4: Ban_Co[1][0]=Nguoi_di_sau;break;
    case 5: Ban_Co[1][1]=Nguoi_di_sau;break;
    case 6: Ban_Co[1][2]=Nguoi_di_sau;break;
    case 7: Ban_Co[2][0]=Nguoi_di_sau;break;
    case 8: Ban_Co[2][1]=Nguoi_di_sau;break;
    case 9: Ban_Co[2][2]=Nguoi_di_sau;break;
    }
}
void Nhap_X2()
{
    int a;
    cout <<"Nguoi nhap X cac so tu 1 den 9 tren ban co :";cin>>a;
    switch(a)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_truoc;break;
    case 2: Ban_Co[0][1]=Nguoi_di_truoc;break;
    case 3: Ban_Co[0][2]=Nguoi_di_truoc;break;
    case 4: Ban_Co[1][0]=Nguoi_di_truoc;break;
    case 5: Ban_Co[1][1]=Nguoi_di_truoc;break;
    case 6: Ban_Co[1][2]=Nguoi_di_truoc;break;
    case 7: Ban_Co[2][0]=Nguoi_di_truoc;break;
    case 8: Ban_Co[2][1]=Nguoi_di_truoc;break;
    case 9: Ban_Co[2][2]=Nguoi_di_truoc;break;
    }
}
void Nhap_O2()
{
    int b;
    cout<<"Nguoi nhap O cac so tu 1 den 9 tren ban co:";cin>>b;
    switch(b)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_sau;break;
    case 2: Ban_Co[0][1]=Nguoi_di_sau;break;
    case 3: Ban_Co[0][2]=Nguoi_di_sau;break;
    case 4: Ban_Co[1][0]=Nguoi_di_sau;break;
    case 5: Ban_Co[1][1]=Nguoi_di_sau;break;
    case 6: Ban_Co[1][2]=Nguoi_di_sau;break;
    case 7: Ban_Co[2][0]=Nguoi_di_sau;break;
    case 8: Ban_Co[2][1]=Nguoi_di_sau;break;
    case 9: Ban_Co[2][2]=Nguoi_di_sau;break;
    }
}
void Nhap_X3()
{
    int a;
    cout <<"Nguoi nhap X cac so tu 1 den 9 tren ban co :";cin>>a;
    switch(a)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_truoc;break;
    case 2: Ban_Co[0][1]=Nguoi_di_truoc;break;
    case 3: Ban_Co[0][2]=Nguoi_di_truoc;break;
    case 4: Ban_Co[1][0]=Nguoi_di_truoc;break;
    case 5: Ban_Co[1][1]=Nguoi_di_truoc;break;
    case 6: Ban_Co[1][2]=Nguoi_di_truoc;break;
    case 7: Ban_Co[2][0]=Nguoi_di_truoc;break;
    case 8: Ban_Co[2][1]=Nguoi_di_truoc;break;
    case 9: Ban_Co[2][2]=Nguoi_di_truoc;break;
    }
}
void Nhap_O3()
{
    int b;
    cout<<"Nguoi nhap O cac so tu 1 den 9 tren ban co:";cin>>b;
    switch(b)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_sau;break;
    case 2: Ban_Co[0][1]=Nguoi_di_sau;break;
    case 3: Ban_Co[0][2]=Nguoi_di_sau;break;
    case 4: Ban_Co[1][0]=Nguoi_di_sau;break;
    case 5: Ban_Co[1][1]=Nguoi_di_sau;break;
    case 6: Ban_Co[1][2]=Nguoi_di_sau;break;
    case 7: Ban_Co[2][0]=Nguoi_di_sau;break;
    case 8: Ban_Co[2][1]=Nguoi_di_sau;break;
    case 9: Ban_Co[2][2]=Nguoi_di_sau;break;
    }
}
void Nhap_X4()
{
    int a;
    cout <<"Nguoi nhap X cac so tu 1 den 9 tren ban co :";cin>>a;
    switch(a)
    {
    case 1: Ban_Co[0][0]=Nguoi_di_truoc;break;
    case 2: Ban_Co[0][1]=Nguoi_di_truoc;break;
    case 3: Ban_Co[0][2]=Nguoi_di_truoc;break;
    case 4: Ban_Co[1][0]=Nguoi_di_truoc;break;
    case 5: Ban_Co[1][1]=Nguoi_di_truoc;break;
    case 6: Ban_Co[1][2]=Nguoi_di_truoc;break;
    case 7: Ban_Co[2][0]=Nguoi_di_truoc;break;
    case 8: Ban_Co[2][1]=Nguoi_di_truoc;break;
    case 9: Ban_Co[2][2]=Nguoi_di_truoc;break;
    }
}
char Nguoi_thang_cuoc()
{
    if(Ban_Co[0][0]=='X'&& Ban_Co[0][1]=='X'&& Ban_Co[0][2]=='X')
        return'X';
    if(Ban_Co[1][0]=='X'&& Ban_Co[1][1]=='X'&& Ban_Co[1][2]=='X')
        return'X';
    if(Ban_Co[2][0]=='X'&& Ban_Co[2][1]=='X'&& Ban_Co[2][2]=='X')
        return'X';
    if(Ban_Co[0][0]=='X'&& Ban_Co[1][0]=='X'&& Ban_Co[2][0]=='X')
        return'X';
    if(Ban_Co[0][1]=='X'&& Ban_Co[1][1]=='X'&& Ban_Co[2][1]=='X')
        return'X';
    if(Ban_Co[0][2]=='X'&& Ban_Co[1][2]=='X'&& Ban_Co[2][2]=='X')
        return'X';
    if(Ban_Co[2][0]=='X'&& Ban_Co[1][1]=='X'&& Ban_Co[0][2]=='X')
        return'X';
    if(Ban_Co[0][0]=='X'&& Ban_Co[1][1]=='X'&& Ban_Co[2][2]=='X')
        return'X';
    if(Ban_Co[0][0]=='O'&& Ban_Co[0][1]=='O'&& Ban_Co[0][2]=='O')
        return'O';
    if(Ban_Co[1][0]=='O'&& Ban_Co[1][1]=='O'&& Ban_Co[1][2]=='O')
return'O';
    if(Ban_Co[2][0]=='O'&& Ban_Co[2][1]=='O'&& Ban_Co[2][2]=='O')
        return'O';
    if(Ban_Co[0][0]=='O'&& Ban_Co[1][0]=='O'&& Ban_Co[2][0]=='O')
        return'O';
    if(Ban_Co[0][1]=='O'&& Ban_Co[1][1]=='O'&& Ban_Co[2][1]=='O')
        return'O';
    if(Ban_Co[0][2]=='O'&& Ban_Co[1][2]=='O'&& Ban_Co[2][2]=='O')
        return'O';
    if(Ban_Co[2][0]=='O'&& Ban_Co[1][1]=='O'&& Ban_Co[0][2]=='O')
        return'O';
    if(Ban_Co[0][0]=='O'&& Ban_Co[1][1]=='O'&& Ban_Co[2][2]=='O')
        return'O';
    return '2 ben hoa';
}



int main()
{
    Ve_Ban_co();
    Nhap_X();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_O();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_X1();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_O1();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_X2();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_O2();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_X3();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_O3();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    Nhap_X4();
    if(Nguoi_thang_cuoc()=='X')
    {
        cout<<"X la nguoi chien thang:"<<endl;
        return 0;
    }
    else if(Nguoi_thang_cuoc()=='O')
    {
        cout<<"O la nguoi chien thang:"<<endl;
        return 0;
    }
    Ve_Ban_co();
    cout<<"ket thuc tro choi! hoa co"<<endl;
    return 0;
}
