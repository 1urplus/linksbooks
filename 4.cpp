#include<iostream>
using namespace std;
struct linkman
{
    string name;
    string tele;
};

void showmenu(){
cout<<"*****************"<<endl;
cout<<"***1添加联系人******"<<endl;
cout<<"***2显示联系人******"<<endl;
cout<<"***3删除联系人******"<<endl;
cout<<"***4查找联系人******"<<endl;
cout<<"***5修改联系人******"<<endl;
cout<<"***6清空联系人******"<<endl;
cout<<"***0退出通讯录******"<<endl;
cout<<"*****************"<<endl;
}
int times=0;
linkman per[100];
void add(linkman * per){
    string name;
    string tele;
        cout<<"输入名字"<<endl;
        cin>>name;
        cout<<"输入电话"<<endl;
        cin>>tele;
        per->name=name;
        per->tele=tele;
        cout<<"添加成功"<<endl;
}
void show(linkman * per){
    cout<<"话薄"<<endl;
    int t=0;
    for(int i=0;i<=times;i++){
        if(per[i].name!=""){
            cout<<t+1<<" "<<per[i].name<<" "<< per[i].tele <<endl;
            t++;
        }
    }
    cout<<""<<endl;
}

void del(linkman * per){
    string name;
    cout<<"输入要删除的联系人"<<endl;
    cin>>name;
    for(int i=0;i<times;i++){
        
        if(per[i].name==name){
            per[i].name="";
            per[i].tele="";
            cout<<"删除成功"<<endl;
            break;
        }
        if(i==times-1){
            cout<<"查无此人"<<endl;
        }
    }
}

int main(){
showmenu();
while(1){
     int num;
     
     cin>>num;
     if(num==1){
        add(&per[times]);
        times++;
     }
     if(num==2){
        show(&per[0]);
     }
     if(num==3){
        del(&per[0]);
     }
}
   system("pause");
   return 0;
}
