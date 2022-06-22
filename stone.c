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
Stone_design* Print_Stone[13] = { &p0,&p1,&p2, &p3,&p4, &p5, &p6, &p7, &p8, &p9, &p10, &p11, &p12 };//돌 도트

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
	
//메인화면
void Game_Start() {
	system("cls");
	CursorView();
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
	if (stone_Reinforce == 'y') {
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
	if (stone_rand == 77) {
		system("cls");
		printf("돌의 정령이 나타났습니다.\n");
		Sleep(300);
		Stone_Soul();
	}//돌의정령 호출
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
	}//강화성공
	else {
		system("cls");
		printf("broken");
		Sleep(300);
		stone_cnt = 12;
		Game_Start();
	}//강화실패
}
void Stone_Soul() {
	printf("(대충 개쩌는 상품들)");
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
