#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
#include<string.h>
#include<Windows.h>
#include<conio.h>
#include"stone.h"
#include"function.h"
#include"stone_UI.h"
#include"stone_design.h"
#include"stone_Gauntlet.h"
#pragma comment (lib, "winmm.lib")
#include <mmsystem.h>;

#define UP "C:\\Users\\USER\\Documents\\C_ProJect\\Music\\1.wav"
#define SUCCES "C:\\Users\\USER\\Documents\\C_ProJect\\Music\\SUCCES12.wav"
#define FAIL "C:\\Users\\USER\\Documents\\C_ProJect\\Music\\2.wav"

void delay(clock_t n)

{

	clock_t start = clock();

	while (clock() - start < n);

};
enum ColorType {                                        //텍스트 컬러 목록
    BLACK,            //0
    darkBLUE,        //1
    DarkGreen,        //2
    darkSkyBlue,    //3
    DarkRed,        //4
    DarkPurple,        //5
    DarkYellow,        //6
    GRAY,            //7
    DarkGray,        //8
    BLUE,            //9
    GREEN,            //10
    SkyBlue,        //11
    RED,            //12
    PURPLE,            //13
    YELLOW,            //14
    WHITE            //15
} COLOR;

