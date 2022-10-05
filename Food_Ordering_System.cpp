#include<iostream>
using namespace std;
int main(){
    int idly = 50;
    char choice;
    float price,money,change;
    cout<<"-----------------IDLYGO-------------------"<<endl<<endl;
    cout<<"[R - Ragi Idly] - Price .................. \t\t\t\t\t\t PHP 50.00"<<endl;
    cout<<"[K - Kanchipuram Idly] - Price ........... \t\t\t\t\t\t PHP 55.00"<<endl;
    cout<<"[E - Rava Idly] - Price ..................\t\t\t\t\t\t PHP 56.00"<<endl;
    cout<<"[S - Oats Idly] - Price ...................\t\t\t\t\t\t PHP 61.00"<<endl;
    cout<<"[M - Stuffed Idly] - Price ................ \t\t\t\t\t\t PHP 57.00"<<endl;
    cout<<"\n\n";
    cin>>choice;
    switch (choice){
        case 'R' : price = idly;
        cout<<"\nthat will be PHP "<<price<<".00"<<endl;
        break;
        case 'C' : price = idly + 5;
        cout<<"\nthat will be PHP "<<price<<".00"<<endl;
        break;
        case 'E' : price = idly + 6;
        cout<<"\nthat will be PHP "<<price<<".00"<<endl;
        break;
        case 'S' : price = idly + 11;
        cout<<"\nthat will be PHP "<<price<<".00"<<endl;
        break;
        case 'M' : price = idly + 7;
        cout<<"\nthat will be PHP "<<price<<".00"<<endl;
        break;

        default : cout<<"We don't have that item in our menu!!"<<endl;
        return 0;
        break;
    }
    cout<<"Enter your cash payment = ";
    cin>>money;

    change = money-price;
    if(money>price){
        cout<<"Your change is : "<<change<<endl;
        cout<<"Thank you,Enjoy your meal!!\n";
    }

    else if(money == price){
        cout<<"Your change is : "<<change<<endl;
        cout<<"Thank you,You paid the exact amount!!\n";
    }
    else if(money<price){
        cout<<"Insufficient cash!! Pay it correctly...."<<endl;
    }
    system("pause");
    return 0;

}
