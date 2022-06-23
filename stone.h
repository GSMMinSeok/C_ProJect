#ifndef UNIQUE_CHECKING_STR

#define UNIQUE_CHECKING_STR

//강화하기 변수
int stone[14] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13};//강화단계
int stone_cnt = 0;//강화 인덱스
char stone_Reinforce;//입력
int stone_rand;//난수저장 확률 계산용
int stone_rand_cnt[13] = { 95,90,85,80,70,65,50,40,35,30,25,20,10 };//강화 단계별 확률
int Gold[13] = { 10,50,100,200,10000,20000,50000,100000,200000,1000000,5000000,10000000,999999999 };//강화단계별 판매비용
int My_Gold = 100000000000000;//사용자 돈
int stone_Gold[13] = { 100,150,200,300,500,1000,10000,15000,30000,100000,500000,1000000,3000000 };//강화단계별 소모비용
int stone_item[10] = { 1,2,3,4,5,6 };//인벤
int stone_gauntlet[6] = { 1,2,3,4,5,6 };//인피니티 스톤
int main_menu;
#endif // !UNIQUE_CHECKING_STR


//인피니티 건틀렛 변수