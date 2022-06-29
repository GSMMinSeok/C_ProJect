#ifndef UNIQUE_CHECKING_STR

#define UNIQUE_CHECKING_STR

//강화하기 변수
int stone[18] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};//강화단계
int stone_cnt = 0;//강화 인덱스
char stone_Reinforce;//입력
int stone_rand;//난수저장 확률 계산용
int stone_rand_cnt[18] = { 95,93,90,88,85,80,88,80,77,70,60,57,50,48,40,30,20,10 };//강화 단계별 확률
int Gold[18] = { 10,50,100,300,1000,5000,10000,100000,200000,1000000,5000000,10000000,30000000,50000000,100000000,300000000, };//강화단계별 판매비용
long long int My_Gold = 10000;//사용자 돈
int stone_Gold[18] = { 100,150,200,300,500,1000,2000,3000,5000,10000,50000,100000,300000, };//강화단계별 소모비용
int stone_prt_X[18] = {30,};
int stone_prt_Y[18] = {30,};
int stone_item[10] = { 0,};//인벤:1) 돌가루 2)방지권 3)6강 워프석 4)10강 워프석 5)12강 워프석 6)15강 하스스톤
int stone_gauntlet[6] = { 1,1,1,1,1,1 };//인피니티 스톤,1)파워 2)스페이스 3)마인드 4)타임 5)소울 6)리얼리티
int stone_gauntlet_menu = 4;//건틀렛 획득시 건틀렛 메뉴 추가
int stone_gauntlet_soul;//돌상점 확률용
int Soul_X[3] = { 0, };
int Soul_Y[3] = { 0, };
int soul_visit = 0;
int main_menu;//
int key;//키입력
int Fast_Reinforce;
int Y_menu[6] = { 2,4,6,8,10,12 };//강화 ui 위치
int MenuNum = 0;//메뉴 선택
int Stone_Y[3] = { 13,22,33,};//상점 ui 위치
int difficulty = 0;//난이도 설정용
int difficulty_color[2] = { 10,8 };//ui 컬러
char *a
#endif // !UNIQUE_CHECKING_STR


//인피니티 건틀렛 변수