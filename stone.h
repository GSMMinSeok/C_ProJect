#ifndef UNIQUE_CHECKING_STR

#define UNIQUE_CHECKING_STR

//��ȭ�ϱ� ����
int stone[13] = { 0,1,2,3,4,5,6,7,8,9,10,11,12 };//��ȭ�ܰ�
int stone_cnt = 0;//��ȭ �ε���
char stone_Reinforce;//�Է�
int stone_rand;//�������� Ȯ�� ����
int stone_rand_cnt[13] = { 95,90,85,80,70,65,50,40,30,25,15,10,5 };//��ȭ �ܰ躰 Ȯ��
int Gold[13] = { 10,50,100,200,10000,20000,50000,100000,200000,1000000,5000000,10000000,999999999 };//��ȭ�ܰ躰 �Ǹź��
int My_Gold = 100000000000000;//����� ��
int stone_Gold[13] = { 100,150,200,300,500,1000,10000,15000,30000,100000,500000,1000000,3000000 };//��ȭ�ܰ躰 �Ҹ���
int stone_item[10] = { 1,2,3,4,5,6 };//�κ�
int stone_gauntlet[6] = { 1,2,3,4,5,6 };//���Ǵ�Ƽ ����
int main_menu;
#endif // !UNIQUE_CHECKING_STR


//���Ǵ�Ƽ ��Ʋ�� ����