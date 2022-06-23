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
Stone_design* Print_Stone[14] = { &p0,&p1,&p2, &p3,&p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12,&p13 };//�� ��Ʈ

int main() {
	srand(time(NULL));
	Game_Main();
	Game_Start();
}
void Game_Main() {	
	int key;
	while (1)
	{
		
		// �ƹ�Ű�� ���ȴٸ� ��� �� ����. 
		if (kbhit())
		{
			// �Էµ� Ű���� ���. 
			key = getch();
			// �Էµ� ���ڿ� �ƽ�Ű�ڵ� ��� �� ���� ���� ������. 
			break;
		}
		else {
			main_ui_1();
			delay(500);
			system("cls");
			main_ui_2();
			delay(500);
			system("cls");
		}
	}
}
void Game_Start() {
	system("cls");
	CursorView();
	printf("����ȭ���Դϴ�.1)��ȭ 2)���� :");
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
	if(stone_Reinforce=='m')Game_Start();
	else if (stone_Reinforce == 'y'|| stone_Reinforce == 'Y') {
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
	if (stone_cnt >= 6) {
		if (stone_rand >= 50) {
			stone_rand = rand() % 50 + 1;
		}
	}
	if (stone_rand == 77) {
		system("cls");
		printf("���� ������ ��Ÿ�����ϴ�.\n");
		Sleep(300);
		Stone_Soul();
	}//�������� ȣ��
	if (stone_Reinforce == 'y') {
		PlaySound(TEXT(UP), NULL, SND_ASYNC);
		Sleep(3000);
	}
	
	if (stone_rand <= stone_rand_cnt[stone_cnt]) {
		stone_cnt++;
		if (stone_cnt > 12) {
			system("cls");
			Game_clear();
		}
		else  {
			PlaySound(TEXT(SUCCES), NULL, SND_ASYNC);
			Stone_Reinforce();
		}
	}//��ȭ����
	else {
		system("cls");
		PlaySound(TEXT(FAIL), NULL, SND_ASYNC);
		printf("broken");
		Sleep(300);
		stone_cnt -= 1;
		Stone_Reinforce();
	}//��ȭ����
}
void Stone_Soul() {
	printf("(���� ��¼�� ��ǰ��)");
	Sleep(2000);
	getch();
	Stone_Reinforce();
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
 
