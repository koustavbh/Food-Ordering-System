#include<iostream>
using namespace std;
int main(){
    int idly = 50;
    char choice;
    float price,money,change;
    cout<<"------------IDLYGO-------------"<<endl<<endl;
    cout<<"[R - Regular] - Idly Price: \t\t\t\t\tPHP 50.00"<<endl;
    cout<<"[C - Cheese] - Add Cheese \t\t\t\t\t PHP 5.00"<<endl;
    cout<<"[E - Egg] - Add Egg \t\t\t\t\t\t PHP 6.00"<<endl;
    cout<<"[S - Sandwich] - Add Sandwich & Cheese \t\t\t\t PHP 11.00"<<endl;
    cout<<"[M - Mushroom] - Add Mushroom, Sandwich & Cheese \t\t PHP 17.00"<<endl;
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
        case 'M' : price = idly + 17;
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