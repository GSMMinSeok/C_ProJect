#ifndef UNIQUE_CHECKING_STR

#define UNIQUE_CHECKING_STR

//��ȭ�ϱ� ����
int stone[18] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};//��ȭ�ܰ�
int stone_cnt = 0;//��ȭ �ε���
char stone_Reinforce;//�Է�
int stone_rand;//�������� Ȯ�� ����
int stone_rand_cnt[18] = { 95,93,90,88,85,80,88,80,77,70,60,57,50,48,40,30,20,10 };//��ȭ �ܰ躰 Ȯ��
int Gold[18] = { 10,50,100,300,1000,5000,10000,100000,200000,1000000,5000000,10000000,30000000,50000000,100000000,300000000, };//��ȭ�ܰ躰 �Ǹź��
long long int My_Gold = 10000;//����� ��
int stone_Gold[18] = { 100,150,200,300,500,1000,2000,3000,5000,10000,50000,100000,300000, };//��ȭ�ܰ躰 �Ҹ���
int stone_prt_X[18] = {30,};
int stone_prt_Y[18] = {30,};
int stone_item[10] = { 0,};//�κ�:1) ������ 2)������ 3)6�� ������ 4)10�� ������ 5)12�� ������ 6)15�� �Ͻ�����
int stone_gauntlet[6] = { 1,1,1,1,1,1 };//���Ǵ�Ƽ ����,1)�Ŀ� 2)�����̽� 3)���ε� 4)Ÿ�� 5)�ҿ� 6)����Ƽ
int stone_gauntlet_menu = 4;//��Ʋ�� ȹ��� ��Ʋ�� �޴� �߰�
int stone_gauntlet_soul;//������ Ȯ����
int Soul_X[3] = { 0, };
int Soul_Y[3] = { 0, };
int soul_visit = 0;
int main_menu;//
int key;//Ű�Է�
int Fast_Reinforce;
int Y_menu[6] = { 2,4,6,8,10,12 };//��ȭ ui ��ġ
int MenuNum = 0;//�޴� ����
int Stone_Y[3] = { 13,22,33,};//���� ui ��ġ
int difficulty = 0;//���̵� ������
int difficulty_color[2] = { 10,8 };//ui �÷�
char *a
#endif // !UNIQUE_CHECKING_STR


//���Ǵ�Ƽ ��Ʋ�� ����