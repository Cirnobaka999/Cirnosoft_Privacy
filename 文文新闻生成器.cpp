#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    string zhi,title,main,reason;     //��,��,֮,����,����,ԭ�� (������) 
    int year,mon,model;    //��,��,ģ��(������) 
    int season; //��,�� (����) 
    string yue;  //�� 
    int esc;  //���¶�����ذ͸� 
    printf("������:");
	cin>>year;	
	printf("������:");
	cin>>mon;
	printf("��������:");
	cin>>zhi;
	printf("�������:");
	cin>>title;
	cout<<"��������:";
	cin>>main;
	printf("����ԭ��:");
	cin>>reason;
	printf("ѡ��ģ��  1=�¼� 2=�ɷð��� 3=�ܿ�־:");   //ģ�� 
	cin>>model; 
	season=year-1885;
	if (mon==1) yue="����";
	if (mon==2) yue="����";
	if (mon==3) yue="����";
	if (mon==4) yue="î��";
	if (mon==5) yue="����";
	if (mon==6) yue="ˮ����";
	if (mon==7) yue="����";
	if (mon==8) yue="Ҷ��";
	if (mon==9) yue="����";
	if (mon==10) yue="������";
	if (mon==11) yue="˪��";
	if (mon==12) yue="ʦ��";
	
    cout<<"================================="<<endl;
    cout<<"���ġ�����"<<"   ��"<<season<<"�� / "<<yue<<"֮"<<zhi<<endl;
    cout<<"================================="<<endl;
    cout<<title<<endl;
    cout<<"================================="<<endl;
    
    if (model==1){
    cout<<"�������һ���ش���¼�"<<endl;
    cout<<"���Ŵ��Ҳ�Ѿ�֪����,����¾���"<<main<<endl;
    cout<<"���������¼���ԭ����ʵ��"<<reason<<endl; 
    }
	
	if (model==2){
	cout<<"- ���죬�����������뵽�˳��������Ұ��ﰢ����ʦ���ܲɷã����ʰ�����ʦ�ڲɷ���ʽ��ʼǰ��ʲô��˵����"<<endl;
    cout<<"-"<<main<<endl;
    cout<<"-����������ͦ���˵�,������ʲôԭ����"<<endl;
    cout<<"-ԭ����ʵ��"<<reason<<endl;
	}
	
	if (model==3){
	cout<<"��ǰ,������һ���ܿ�־,��������Ƭ�����������������ٴ�д��־��һ������."<<endl;
	cout<<main<<",�����ĵ�"<<reason<<",��������Ƭ����"<<reason<<"����֤."<<endl; 
	cout<<main<<",Ψһ�����ŷ������ɾ���"<<reason<<"��?��˵"<<main<<"������Ҳ��ǧ˿���Ƶ���ϵ."<<endl;
	cout<<"�������������������µ������ܿ�־<���Ĵ��±�>׷�������.�����ڴ�!" <<endl;
	}
	
	cin>>esc;
    return 0;
    
} 
