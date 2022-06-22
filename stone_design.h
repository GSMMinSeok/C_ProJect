typedef struct pictures {
    int i;      // 문자열이 몇 줄인지
    char pic[100][100];     // 그림을 수용할 수 있는 최대 크기
} Stone_design;

Stone_design p0 = { 1, {"■" } };

Stone_design p1 = { 2, {"■■",
                        "■■"
} };
Stone_design p2 = { 13, {
    "                         ■■■■■       ",
    "                        ■        ■      ",
    "                       ■ ■    ■  ■    ",
    "                      ■   ■   ■   ■   ",
    "                     ■      ■       ■  ",
    "                    ■       ■■       ■",
    "                   ■        ■ ■      ■",
    "                  ■         ■    ■■ ■",
    "                   ■      ■   ■      ■",
    "                    ■   ■       ■   ■ ",
    "                     ■ ■         ■ ■  ",
    "                      ■            ■    ",
    "                       ■■■■■■■     "
} };

Stone_design p3 = { 12, {
    "                                         ■■         ",
    "                                        ■■■        ",
    "                                        ■■■        ",
    "                                         ■■         ",
    "                                      ■■■■■      ",
    "                                    ■          ■    ",
    "                                   ■   □□□   ■   ",
    "                                   ■   □■□   ■   ",
    "                                   ■   □□□   ■   ",
    "                                    ■          ■    ",
    "                                     ■■■■■■     ",
    "                                  ■■         ■■   "
} };
Stone_design p4 = { 13, {
    "□□□□                                            □□□□",
    "■■■■                                            ■■■■",
    "■■□□                                            □□■■",
    "■■■■               ■■■  ■■■               ■■■■",
    "  ■■■              ■  ■  ■  ■  ■              ■■■ ",
    "  ■■■            ■      ■  ■      ■            ■■■ ",
    "  ■■■   ■■   ■     ____    ____     ■   ■■   ■■■ ",
    "  ■■ ■■■■■■      ■      ■      ■■■■■■ ■■  ",
     "  ■■■■■■■  ■    ■      ■    ■  ■■■■■■■   ",
    "    ■■         ■      □      □      ■         ■■    ",
    "                   ■    __________/   ■                   ",
    "                     ■ /  ■  ■    ■                     ",
    "                       ■■  ■  ■■                       "
} };

Stone_design p5 = { 17, {
    "                             ■■■■■■■■",
    "                         ■■         ■   ■",
    "                     ■■ □□□□□■     ■",
    "                   ■            ■   □   ■",
    "                 ■            ■      □  ■",
    "               ■            ■ □      □ ■",
    "             ■□□□□□□■    □      ■  ",
    "           ■            ■       □     ■  ",
    "           ■          ■□        □    ■  ",
    "           ■        ■  □         □ ■    ",
    "         ■        ■     □         ■      ",
    "         ■      ■        □      ■        ",
    "         ■    ■ □        □   ■          ",
    "       ■    ■    □        □■            ",
    "       ■  ■       □     ■■              ",
    "       ■■          □■■                  ",
    "       ■■■■■■■■                      "
} };

Stone_design p6 = { 16,
 {
    "                              ■■■■■■     ",
    "                        ■■■            ■   ",
    "                      ■                    ■ ",
    "                    ■                      ■ ",
    "                  ■                        ■ ",
    "                ■                   ■     ■ ",
    "              ■                   ■       ■ ",
    "              ■                 ■■       ■ ",
    "              ■         ■■■■■       ■   ",
    "            ■         ■■■■■         ■   ",
    "            ■       ■■                 ■   ",
    "            ■     ■■                 ■     ",
    "            ■   ■                   ■       ",
    "            ■                      ■         ",
    "              ■              ■■■           ",
    "                ■■■■■■■                 "
 } };

Stone_design p7 = { 17,
{
"               DE6O               ",
"                pZOQ              ",
"              BB.rcBB,            ",
"     LBBBBBBBBRRp6pZBBBB,         ",
"     cBX,vBG;; ::::::::ir5OgBr    ",
"     JQ6,; ri,:irrr. : r. 2Bp2Jr  ",
"     : SaBU ,5J77v7r; Ls; ,sE; JB ",
"       ,BX.:2c    sX : .7UUP1sHQ  ",
"     rB1 : ar  :: : ,,,..7sLrPB7  ",
"   LBMg2 : rUc ,7v77;; 7LLscrXB7  ",
"; 6s7JEs:r2L;; 7rrrSS1ssvciZB7    ",
" gBs; 2s7vrcvLsJLsSKLvvcsws57:    ",
" vBS1J1UG2r7LsKXKX7rsLs7wP; sB    ",
"   JBBBBBgaXvc7777::56aKsc7rSB    ",
"       :Bp; 7pX52S5KPc; EBBQBBJ   ",
"       iBG ,LwBBBBr;.DBr .:       ",
"        ::ss61  ..JUJs::          "
} };

Stone_design p8 = { 23, {
    "                               ■                           ",
    "                              ■■                          ",
    "             ■                ■■             ■          ",
    "              ■■           ■■■          ■■           ",
    "               ■■         ■■■          ■■            ",
    "              ■■         ■■■■          ■■           ",
    "               ■■                        ■■             ",
    "                ■■■    ■■■■■     ■■■             ",
    "                 ■■   ■          ■    ■■              ",
    "      ■              ■              ■                    ",
    "       ■■■■■■ ■                  ■ ■               ",
    "          ■■ ■■ ■                  ■  ■■■■ ■     ",
    "                 ■ ■                  ■  ■  ■ ■ ■    ",
    "                      ■              ■               ■   ",
    "                   ■   ■          ■     ■               ",
    "                 ■■■   ■■■■■    ■■■              ",
    "                ■■■■               ■■■■             ",
    "              ■■■       ■■■■       ■■■            ",
    "             ■■■         ■■■         ■■■           ",
    "            ■■             ■■■            ■■         ",
    "           ■               ■■                 ■         ",
    "                             ■■                           ",
    "                              ■                            "
} };
Stone_design p9 = { 36, {
"                   .7PQBBBQBQBBBBBEJ.              ",
"               rDBBBBBBBBBBBBBBBBBBBBG:            ",
"             sBBBBBMBQBBBQBQBQBQQRBBBBBBr          ",
"          .RBBBBQBBBQBQBQQQQQBQBQQRMMBBBBR:        ",
"       ,JQBQBQBQBQBQBMBQQQBQQMQQBQQRMgRRQBBO:      ",
"     :QBBBBBQBQBQBQBQBQBQBMQQQQMRQRgggGgERMQBJ     ",
"    7QBBBQBQQQBQQMQMQQBMQRQRQMBgRgMGGEOOOZRRgB1    ",
"   :QBBBMQMBMBQBQBQBQQQBRQMMMQRDggDO6EEOZggMgDBr   ",
" :BBBQQBQBMBQQMQMBQQMQMMRQRQQMggggGZEg666RRgKP6    ",
"  DBQQMQMQQBQBQBQQQMORRMgMRRRBMMERRg6ggEH6EGpp2Ev  ",
"  GBBMBQBQBQBQQMQQMpP6DRRgRRMgQggRQDgggpHUHPPZHHD  ",
"  EBBQQBBBQQRQRQBBQRGgRQggMBQOGMRQRQRQgREaaE6GPHQ, ",
"  RQBQBBBDO6p6Z6DODGOZE6pKEDRHKpGEDDRgQMBMMRRODpB: ",
"  2BBBBBZU1wJ22UsJ1SXPXa121S52J1JUUS5Us;.:LgBBQQB: ",
"   EBBBEwJ1JSaSJSXXUS5KHHUSUUJ2UHKpXX1r     .7BBB  ",
"    BBQX2SJUaXaOM5gBBEKHSaSXJ;7OgE6OMB5w;...  7B:  ",
"   BQDB522aKSUHKHUOgRZ6HPSPp1.,KG6ODBBi:7,. :.:i   ",
"   BEHQH1UUPwU255HSS5a5XXKZK2irrraKpKpw: .. :i;r   ",
"   ORORX2w25U1SUS2SUUwS5SEG2Kr;:,;77sLvi:,. : r;   ",
"   KBQXaw5wUUwJ2JwJ55XSaXO5Xa, ; ;s7rri;,. ::.7    ",
"   :BEHaSU5Jw2SUU12Ua5SPO55aa, :: 5Xas7;: ,:.,:    ",
"    QR6p5XUUJ11SUXSKHZZZ5U2UUL  ,,:LJwJsr:  .:     ",
"    7QMROaX22JwJw2XXpZE21w21XX;.. 1QpaHSL:..,.     ",
"        rg551w1Uw5SXXHHEOgOpHZpgEa6ROGKS7r:::.     ",
"         gp521U2S5S5H5aXKXPapDgv;;rcHH6psi;:;      ",
"         7QH2U2S22SGpKSHK6KUwHXc;:,7EH:c1;:;:      ",
"          pga2U2S1ZggDRRMgMgG6PXSsUBBR:;r::;.      ",
"           KOaU5U55H5XHpKpSwLL:.  .rP5;r:;r,      ",
"            PgaUS2S2S2U121U5HX2;:.,:rri:;r,       ",
"             GgHUS2UU52Uw55KXHsr:::;:;:;;.        ",
"              OQK5SU525UXHpPP1;:;:;:::;:          ",
"              PQOXXUS2XSKXppS:::::::;:           ",
"                :aQGKSXSXaPKXsr:;:::;,            ",
"                  :agOKH5aUaU1c7;;i;              ",
"                     ,;rv7svLsJ7;:                "
} };

Stone_design p10 = { 14, {
    "                             ■■■                                      ",
    "                            ■    ■                                     ",
    "                             ■  ■                                      ",
    "            ▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼                     ",
    "             ▼     ▼               ▼          ▼                      ",
    "               ▼  ▼       _-----_   ▼       ▼                        ",
    "                 ▼      __-  _--_  -__▼    ▼                          ",
    "                   ▼    ---  -__-   ---▼ ▼                            ",
    "                     ▼     -_____-      ▼                              ",
    "                       ▼▼▼▼▼▼▼▼▼                                ",
    "                         ▼          ▼                                  ",
    "                           ▼      ▼                                    ",
    "                             ▼  ▼                                      ",
    "                               ▼                                        "
 } };

Stone_design p11 = { 14, {
    "                             ■■■                                      ",
    "                            ■    ■                                     ",
    "                             ■  ■                                      ",
    "            ▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼▼                     ",
    "             ▼                                  ▼                      ",
    "               ▼           _-----_            ▼                        ",
    "                 ▼      __-  _--_  -__      ▼                          ",
    "                   ▼    ---  -__-   ---   ▼                            ",
    "                     ▼     -_____-      ▼                              ",
    "                       ▼              ▼                                ",
    "                         ▼          ▼                                  ",
    "                           ▼      ▼                                    ",
    "                             ▼  ▼                                      ",
    "                               ▼                                        "
                        } };

Stone_design p12 = { 19, {
    "            ■■■■           ■■■■                                ",
    "          ■        ■       ■ ★     ■                             ",
    "          ■   ★   ■       ■        ■                             ",
    "          ■        ■       ■     ★ ■                             ",
    "            ■■■■           ■■■■                               ",
    "                                                                      ",
    "                                                                      ",
    "    ■■■■              ■■■■              ■■■■              ",
    "  ■   ★   ■          ■  ★ ★ ■          ■   ★   ■            ",
    "  ■★ ★ ★■          ■★ ★ ★■          ■        ■            ",
    "  ■  ★ ★ ■          ■  ★ ★ ■          ■ ★  ★ ■            ",
    "    ■■■■              ■■■■              ■■■■              ",
    "                                                                      ",
    "                                                                      ",
    "             ■■■■                 ■■■■                        ",
    "           ■   ★   ■             ■ ★  ★ ■                      ",
    "           ■ ★   ★■             ■        ■                      ",
    "           ■  ★ ★ ■             ■  ★ ★ ■                      ",
    "             ■■■■                 ■■■■                        "
} };

Stone_design p13 = { 45, {
"                                    ,;isJ7irJc;r:,.                              ",
"                                 :X6Z2Usi7rrH6Jc5JKXJvv:                         ",
"                               ,JgK5U5Jrrs7rrHJ7vJrss7cUci.                      ",
"                              rHK1U5H577w17rrLS7sLsL1ss2a2Hs                     ",
"                             rUUsJUw5Jr2S1s2LsX2aa5S2S1PHPP62                    ",
"                           raUSUw1Uw5sUKS5KKpX6PXXPXHKw2PHp6Er                   ",
"                         .H52K5UUSUS2SPpwXXPHXXpwaKPUp2UUUaSKH                   ",
"                         11Jaw1waUUJ5ap22SXHpapPX5KKUSK255HUwZr                  ",
"                         w1Jsws2wJssJaU2J5Sp66HEpKS6aXKXw5S2LHp.                 ",
"                         Jas5USSPUX5PPPpHw5aEZEEDEZZOXXHS2S2ssHK                 ",
"                         7pwaXapPPS1JHHEGOpGGgHXKg6pZgpEp6XH251g,                ",
"                          ESpHULcsL;;rsssJws1ss77rrr7sXJs1g66pHX                 ",
"                          7Q7;ir:7cKPS7rr;rc7LrrsXX2Lr::  vB6PZS                 ",
"                          rD::.:rrr5p17;7;7rL7r7w5PJsv:,;. Hgap.                 ",
"                          Lc :.::;;;:::;7r;rrvrrii;r;;::;: ;QR:                  ",
"                          ;r ::,::;:;:;:;::;7;rrr;r;r;:::  :gR                   ",
"                          .i.,,::::;;7L:.:::,;rcrr;i;;;;.. :5:                   ",
"                          .i:,,,:;rrvcL;rrsLs7JJLv777rr::..:J                    ",
"                           i:::::;irri:r7sU222crrc7s7r::::.;J                    ",
"                           ,::::;;r;i:::;ic77rrr7r77vrr::,:7.                    ",
"                             ;:::;:i7JUHwJwa5HKP1s7r;r;;:,                       ",
"                             :;::::iL1sr7sUJsvL12sL;;;;:;                        ",
"                             .r;::;rr;:irLcLvcrrrsL7;;;r,                        ",
"                              7rr;;;i:::::::;:;:;r7rr;7;                         ",
"                               ,rv;;::,::rr7rr::::;;ir;                          ",
"                                 .Li;:;;r7ss1s7;;;rr7;                           ",
"                                  7JcccJJUUa5X2Jcscc7:                           ",
"                              .Lw.;rLL1UHHpPPHX5ULLrr,;.                         ",
"                       :sgBBQBBBw;:i;77LL12aaa22ss7r:.vBP;                       ",
"                   ,7HQQRRBQOGBi.:;;;irrvL11S21sLv7;: rBBBBMOaJ:.                ",
"         ,rJXOEHHQBBBDGPXggDKgR..:;;;rr77LLJJ1LL77i;.:gBOZpHaRQQOHi              ",
"      ;wMBBGEgMEggRGHSDaaOgZZOG ,:;;;rrr77LvLLL7cri:rgBGZpE2UPH5ZgBgU7::;5L,     ",
"   .JQBMOGpPS6pZZRGHUOgXUDOE6ORr .:;:;;rr7r77v77r77KQBGPSXSSHE51XZHpgBBBDRgRRp   ",
"..XBQOOP6PZHKpZERZXUGggHaEgppHgM2r:,,.::;;;;rr7L2ZQBREOEpSHKZZEXXSKaKKOHKEa5PRB  ",
":BBOpEpZP66ZKGOgpSSOggE6aEDOHpDgQBBM6SJscssUSpOQQBRgEE6OEPKZHPZEHHaHSPKHXpSSXOQr ",
":GRppZZppZgPpZZXSHgggO6PPpg66pEEDEODBBBBBQBBBQBRgDOZGEZPpXpPKX6pPXPHPPKK6P6PEpO1 ",
" ZR6KOZ6ZgD6pZHP6gDgOEPEK6ODGEpGZE6p6EZDOggROgDgZE6GpOZ6XppZpPHpPKPpPZpZpgGOPZOP ",
" XB66EOERgDPGPZEgDgOGpGOEKOOOEE6Z6GZEPZ6EZE6GEGpEED6EEGp6PGZZKpKZP66EEDPEOgZODDP ",
" GQG6gEDDM6Z6ZEgDgGDEGOgZ66DEE6Z6GEDZEP6P6K6pZ6OEDZOOEP6PZEE6ppEpZpZZRZZEROgDDO6 ",
" EBDGGOOggp6OGgDgDgGGEDOOPZEDGOZE6OGOZEZEZGZEZOEOGDOG6E6Z6GZEpGZEpEPDOEpgDDDgDgS ",
" 6BMGgDRRRpDGDOgDDZOEEODOE6GOgOOZEZDGOGgODEGZDGgDgDO6EEO6EEGZZ6EpEPEgRZEODOgEGgw ",
" pBMgOggMGEGOGDDgDDOgEDOgZEZDDRDgEGZOZGGgGDEDDgDgDEZDGOZEZgGDEGEO6pERgOZgRgOOgB, ",
" LBBBQMQQgOgDMRBBBQQRQRRRgGgGgDRggOOGgOgODDRgMgMgDEgggODODMQgRDgggGQMMOgRQRMRBB: ",
"  RQBBBBBBBBBBBBBBBBBBBBBBBRRDgDRRQQBBBQBBBBBBBBBBBBBBBQBBBBBBBBBBBBBBBBBBBBBRc  "
} };


