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
Stone_design* Print_Stone[18] = { &p0,&p1,&p2, &p3,&p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12,&p13,&p14,&p15,&p16,&p17 };//�� ��Ʈ

int main() {
	/*Gauntlet_After();
	getch();*/
	//Stone_Soul();
	srand(time(NULL));
	Game_Main();
	Game_diffcult();
	Game_Start();
}
void Game_Main() {	
	stone_cnt = 0;
	int While_out = 0;
	main_ui_1();
	while(While_out == 0) {
		CursorView();
		if (kbhit())
		{
			key = getch();
			if (key == 122) {

			}
			else {
				While_out++;
				break;
			}
		}
	}
	system("cls");
	gotoxy(0, 0);
	main_ui_2();
	While_out = 0;
	while (While_out == 0)
	{
		CursorView();
		// �ƹ�Ű�� ���ȴٸ� ��� �� ����. 
		if (kbhit())
		{
			// �Էµ� Ű���� ���. 
			key = getch();
			// �Էµ� ���ڿ� �ƽ�Ű�ڵ� ��� �� ���� ���� ������. 
			While_out++;
			break;
		}
		else {
			gotoxy(71, 34);
			TextColor(8);
			printf("press any key");
			TextColor(15);
			Sleep(500);
			gotoxy(71, 34);
			printf("press any key");
			Sleep(500);
		}
	}

}
void Game_diffcult() {
	int While_out = 0;
	gotoxy(0, 0);
	main_menu_0();
	difficulty_select();
	while (While_out == 0) {
		if (_kbhit()) {
			key = getch();
			switch (key) {

			case 75:
				if (MenuNum == 1) {
					difficulty_color[0] = 10;
					difficulty_color[1] = 8;
				}
					difficulty_select();
					MenuNum = 0;
					break;
			case 77:
				if (MenuNum == 0) {
					difficulty_color[0] = 8;
					difficulty_color[1] = 4;
				}
					difficulty_select();
					MenuNum = 1;
					break;
			case 13:
				switch (MenuNum) {
				case 1:
					While_out++;
					difficulty = 0;
					break;
				case 0:
					While_out++;
					difficulty = 1;
					break;
				}
			}
		}

	}
}
void Game_Start() {
	int MenuNum = 1;
	system("cls");
	int While_out = 0;
	CursorView();
	gotoxy(0, 0);
	main_menu_1();
	gotoxy(30, 34);
	printf("�ᰭȭ�ϱ�                                                                      �����");
	while (While_out == 0) {
		if (_kbhit()) {
			key = getch();
			switch (key) {

			case 75:
				if (MenuNum >= 2) {
					gotoxy(30, 34);
					printf("�ᰭȭ�ϱ�                                                                      �����");
				}
					MenuNum = 1;
					break;
			case 77:
				if (MenuNum <= 1) {
					gotoxy(30, 34);
					printf("�భȭ�ϱ�                                                                      �����");
					}
					MenuNum = 2;
					break;
			case 13:
				switch (MenuNum) {
				case 2:
					While_out++;
					Stone_Shop_1();
					break;
				case 1:
					While_out++;
					Stone_Reinforce();
					break;
				}
			}
		}

	}
}//��ȭ �������̽�
void Stone_Reinforce() {
	int While_out = 0;
	system("cls");
	Reinforce_ui();
	gotoxy(140, Y_menu[MenuNum]);
	printf("��");
	if (stone_gauntlet_menu == 5) {
		gotoxy(140, 12);
		printf("�� ��Ʋ��");
	}
	gotoxy(7, 2);
	printf("%lld\\", My_Gold);
	gotoxy(10, 4);
	printf(" %d", stone_item[1]);
	Stone_pic();
	while (While_out == 0) {
		if (_kbhit) {
			key = getch();
			switch (key) {
				case 72://�� ����Ű
					if (MenuNum > 0) {
						MenuNum--;
					}
					gotoxy(140, Y_menu[MenuNum+1]);
					printf("��");
					gotoxy(140,Y_menu[MenuNum]);
					printf("��");
					break;
				case 80://�Ʒ� ����Ű
					if (MenuNum < stone_gauntlet_menu) {
						MenuNum++;
					}
					gotoxy(140, Y_menu[MenuNum + -1]);
					printf("��");
					gotoxy(140,Y_menu[MenuNum]);
					printf("��");
					break;
				case 13:
					switch (MenuNum) {
					case 0:
						While_out++;
						Game_Start();
						break;
					case 1:
						Fast_Reinforce = 1;
						Stone_Reinforce2();
						gotoxy(10, 3);
						clear();
						Stone_pic();
						break;
					case 2:
						Fast_Reinforce = 0;
						//Stone_Reinforce2();
						stone_cnt++;
						gotoxy(40, 2);
						clear();
						Stone_pic();
						break;
					case 3:
						My_Gold += Gold[stone_cnt];
						stone_cnt = 0;
						gotoxy(7, 2);
						printf("%lld\\", My_Gold);
						gotoxy(30, 3);
						clear();
						Stone_pic();
						break;
					case 4:
						printf("�̱���");
						break;
					case 5:
						While_out++;
						Gauntlet_Before();
						break;
					}
					break;

			}
			
		}
	}
}
void Stone_Reinforce2() {
	if (My_Gold < stone_Gold[stone_cnt]) {
		printf("���� �����մϴ�.");
		Stone_Reinforce();
	}
	else {
		My_Gold -= stone_Gold[stone_cnt];
		stone_rand = rand() % 100 + 1;
		if (stone_rand == 77) {
			Stone_Soul();
		}//�������� ȣ��
		if (stone_cnt >= 6) {
			if (stone_rand >= 50) {
				stone_rand = rand() % 50 + 1;
			}
		}
		if (Fast_Reinforce == 1) {
			PlaySound(TEXT(UP), NULL, SND_ASYNC);
			Sleep(3000);
		}

		if (stone_rand <= stone_rand_cnt[stone_cnt]) {
			stone_cnt++;
			if (stone_cnt > 16) {
				system("cls");
				Game_clear();
			}
			else {
				PlaySound(TEXT(SUCCES), NULL, SND_ASYNC);
			}
		}//��ȭ����
		else {
			PlaySound(TEXT(FAIL), NULL, SND_ASYNC);
			printf("broken");
			Sleep(300);
			if (difficulty == 1) {
				stone_cnt -= 1;
			}
			else {
				stone_cnt = 0;
			}
		}//��ȭ����
	}
}
void Stone_Soul() {
	if (soul_visit == 0) {
		stone_gauntlet_menu++;
		printf("������ �ݰ��� �̰� ����");
		printf("+���Ǵ�Ƽ ��Ʋ��");
	}
	int cnt = 0;
	while (cnt != 3) {
		stone_gauntlet_soul = rand() % 6 + 1;
		if (stone_gauntlet[stone_gauntlet_soul] == 0) {

		}
		else {
			cnt++;
			switch (stone_gauntlet_soul) {
			case 1:
				gotoxy(0,0);
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			case 5:

				break;
			case 6:

				break;
			}
		}
	}
}
void Stone_Shop_1() {
	gotoxy(0, 0);
	shop_ui_2();
	gotoxy(0, 10);
	up_stone();
	gotoxy(135, Stone_Y[MenuNum]);
	printf("���");
	gotoxy(135, Stone_Y[MenuNum] + 1);
	printf("���");
	int While_out = 0;
	MenuNum = 0;
	while (While_out == 0) {
		if (_kbhit) {
			key = getch();
			switch (key) {
			case 72://�� ����Ű
				if (MenuNum > 0) {
					MenuNum--;
				}
				gotoxy(135, Stone_Y[MenuNum + 1]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum + 1]+1);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum]+1);
				printf("���");
				break;
			case 80://�Ʒ� ����Ű
				if (MenuNum < 2) {
					MenuNum++;
				}
				gotoxy(135, Stone_Y[MenuNum + -1]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum + -1]+1);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum]+1);
				printf("���");
				break;
			case 13:
				switch (MenuNum) {
				case 0:
					stone_item[1]++;
					break;
				case 1:
					stone_item[2]++;
					break;
				case 2:
					stone_item[3]++;
					break;
				}
				break;
			case 77:
				While_out++;
				Stone_Shop_2();
				break;
			case 27:
				While_out++;
				Game_Start();
				break;
			}

		}
	}
}
void Stone_Shop_2() {
	gotoxy(0, 0);
	shop_ui_2();
	gotoxy(135, Stone_Y[MenuNum]);
	printf("���");
	gotoxy(135, Stone_Y[MenuNum] + 1);
	printf("���");
	int While_out = 0;
	MenuNum = 0;
	while (While_out == 0) {
		if (_kbhit) {
			key = getch();
			switch (key) {
			case 72://�� ����Ű
				if (MenuNum > 0) {
					MenuNum--;
				}
				gotoxy(135, Stone_Y[MenuNum + 1]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum + 1] + 1);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum] + 1);
				printf("���");
				break;
			case 80://�Ʒ� ����Ű
				if (MenuNum < 2) {
					MenuNum++;
				}
				gotoxy(135, Stone_Y[MenuNum + -1]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum + -1] + 1);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum]);
				printf("���");
				gotoxy(135, Stone_Y[MenuNum] + 1);
				printf("���");
				break;
			case 13:
				switch (MenuNum) {
				case 0:
					stone_item[4]++;
					break;
				case 1:
					stone_item[5]++;
					break;
				}
				break;
			case 77:
				While_out++;
				Stone_Shop_1();
				break;
			case 27:
				While_out++;
				Game_Start();
				break;
			}

		}
	}
}
void Stone_pic() {
	for (int i = 0; i < Print_Stone[stone_cnt]->i; i++) {
		gotoxy(stone_prt_X[stone_cnt], stone_prt_Y[stone_cnt]+i);
		printf("%s\n", Print_Stone[stone_cnt]->pic[i]);
	}
}
void Game_clear() {
	for (int i = 0; i < Print_Stone[stone_cnt]->i; i++) {
		printf("%s\n", Print_Stone[stone_cnt]->pic[i]);
	}
}
 
