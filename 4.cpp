#include<iostream>
using namespace std;
struct linkman
{
    string name;
    string tele;
};

void showmenu(){
cout<<"*****************"<<endl;
cout<<"***1�����ϵ��******"<<endl;
cout<<"***2��ʾ��ϵ��******"<<endl;
cout<<"***3ɾ����ϵ��******"<<endl;
cout<<"***4������ϵ��******"<<endl;
cout<<"***5�޸���ϵ��******"<<endl;
cout<<"***6�����ϵ��******"<<endl;
cout<<"***0�˳�ͨѶ¼******"<<endl;
cout<<"*****************"<<endl;
}
int times=0;
linkman per[100];
void add(linkman * per){
    string name;
    string tele;
        cout<<"��������"<<endl;
        cin>>name;
        cout<<"����绰"<<endl;
        cin>>tele;
        per->name=name;
        per->tele=tele;
        cout<<"��ӳɹ�"<<endl;
}
void show(linkman * per){
    cout<<"����"<<endl;
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
    cout<<"����Ҫɾ������ϵ��"<<endl;
    cin>>name;
    for(int i=0;i<times;i++){
        
        if(per[i].name==name){
            per[i].name="";
            per[i].tele="";
            cout<<"ɾ���ɹ�"<<endl;
            break;
        }
        if(i==times-1){
            cout<<"���޴���"<<endl;
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
