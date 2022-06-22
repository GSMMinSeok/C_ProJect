#include"include.h"
void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //Ŀ�� ���� (1 ~ 100)
	cursorInfo.bVisible = FALSE; //Ŀ�� Visible TRUE(����) FALSE(����)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
Stone_design* Print_Stone[13] = { &p0,&p1,&p2, &p3,&p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12 };//�� ��Ʈ

int main() {
	srand(time(NULL));
	Game_Main();
	Game_Start();
}
void Game_Main() {	
	main_ui();
	getch();
}
	/*UI* UI_stone[10] = { &u1 };
	for (int i = 0; i < UI_stone[0]->i; i++) {
		printf("%s\n", UI_stone[0]->stone_UI[i]);
	}*/
	
//����ȭ��
void Game_Start() {
	system("cls");
	CursorView();
	scanf("%d", &main_menu);
	switch (main_menu) {
	case 1: 
		Stone_Reinforce();
		break;
	case 2: 
		printf("����");
		break;
	default:
		Game_Start();
		break;
	}
}//��ȭ �������̽�
void Stone_Reinforce() {
	system("cls");
	printf("%d\n", stone[stone_cnt]);
	Stone_pic();
	printf("%d\n", stone_rand);
	printf("����Ȯ�� %d%%\t��ȭ��� %d\\ \tgold %d\\ \t �ǸŰ�� %d\\ \n", stone_rand_cnt[stone_cnt], stone_Gold[stone_cnt], My_Gold, Gold[stone_cnt]);
	scanf(" %c", &stone_Reinforce);
	if (stone_Reinforce == 'y') {
		if (My_Gold >= stone_Gold[stone_cnt]) {
			My_Gold -= stone_Gold[stone_cnt];
			Stone_Reinforce2();
		}//��ȭ���� ������ ��ȭ �Լ� ȣ��
		else {
			printf("���� �����մϴ�.");
			Sleep(300);
			Game_Start();
		}//��ȭ���� �Ҹ����� �������̽� ȣ��
	}
	else if (stone_Reinforce == 'p') {
		My_Gold += Gold[stone_cnt];
		stone_cnt = 0;
		Game_Start();
	}//�Ǹ�
	else {
		printf("���� ���ư���");
		Sleep(300);
		Game_Start();
	}//�������� ���� Ű �Է½� ��ȯ
}
void Stone_Reinforce2() {
	stone_rand = rand() % 100 + 1;
	if (stone_rand == 77) {
		system("cls");
		printf("���� ������ ��Ÿ�����ϴ�.\n");
		Sleep(300);
		Stone_Soul();
	}//�������� ȣ��
	else if (stone_rand <= stone_rand_cnt[stone_cnt]) {
		stone_cnt++;
		if (stone_cnt > 12) {
			system("cls");
			printf("GAME CLEAR");
			Game_clear();
		}
		else  {
			Game_Start();
		}
	}//��ȭ����
	else {
		system("cls");
		printf("broken");
		Sleep(300);
		stone_cnt = 12;
		Game_Start();
	}//��ȭ����
}
void Stone_Soul() {
	printf("(���� ��¼�� ��ǰ��)");
	Sleep(2000);
	getch();
	Game_Start();
}
void Stone_pic() {

	for (int i = 0; i < Print_Stone[stone_cnt]->i; i++) {
		printf("%s\n", Print_Stone[stone_cnt]->pic[i]);
	}
}
void Game_clear() {
	for (int i = 0; i < Print_Stone[stone_cnt]->i; i++) {
		printf("%s\n", Print_Stone[stone_cnt]->pic[i]);
	}
}
