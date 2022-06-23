#include"include.h"
void CursorView()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1; //커서 굵기 (1 ~ 100)
	cursorInfo.bVisible = FALSE; //커서 Visible TRUE(보임) FALSE(숨김)
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}
void gotoxy(int x, int y) {
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
Stone_design* Print_Stone[14] = { &p0,&p1,&p2, &p3,&p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12,&p13 };//돌 도트

int main() {
	srand(time(NULL));
	Game_Main();
	Game_Start();
}
void Game_Main() {	
	int key;
	while (1)
	{
		
		// 아무키나 눌렸다면 출력 후 종료. 
		if (kbhit())
		{
			// 입력된 키정보 얻기. 
			key = getch();
			// 입력된 문자와 아스키코드 출력 후 루프 빠져 나가기. 
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
	printf("메인화면입니당.1)강화 2)상점 :");
	scanf("%d", &main_menu);
	switch (main_menu) {
	case 1: 
		Stone_Reinforce();
		break;
	case 2: 
		printf("상점");
		break;
	default:
		Game_Start();
		break;
	}
}//강화 인터페이스
void Stone_Reinforce() {
	system("cls");
	printf("%d\n", stone[stone_cnt]);
	Stone_pic();
	printf("%d\n", stone_rand);
	printf("성공확률 %d%%\t강화비용 %d\\ \tgold %d\\ \t 판매골드 %d\\ \n", stone_rand_cnt[stone_cnt], stone_Gold[stone_cnt], My_Gold, Gold[stone_cnt]);
	scanf(" %c", &stone_Reinforce);
	if(stone_Reinforce=='m')Game_Start();
	else if (stone_Reinforce == 'y'|| stone_Reinforce == 'Y') {
		if (My_Gold >= stone_Gold[stone_cnt]) {
			My_Gold -= stone_Gold[stone_cnt];
			Stone_Reinforce2();
		}//강화조건 만족시 강화 함수 호출
		else {
			printf("돈이 부족합니다.");
			Sleep(300);
			Game_Start();
		}//강화조건 불만족시 인터페이스 호출
	}
	else if (stone_Reinforce == 'p') {
		My_Gold += Gold[stone_cnt];
		stone_cnt = 0;
		Game_Start();
	}//판매
	else {
		printf("뭐노 돌아가라");
		Sleep(300);
		Game_Start();
	}//지정되지 않은 키 입력시 반환
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
		printf("돌의 정령이 나타났습니다.\n");
		Sleep(300);
		Stone_Soul();
	}//돌의정령 호출
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
	}//강화성공
	else {
		system("cls");
		PlaySound(TEXT(FAIL), NULL, SND_ASYNC);
		printf("broken");
		Sleep(300);
		stone_cnt -= 1;
		Stone_Reinforce();
	}//강화실패
}
void Stone_Soul() {
	printf("(대충 개쩌는 상품들)");
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
 
