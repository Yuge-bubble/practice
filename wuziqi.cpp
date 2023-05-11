//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string>
//using namespace std;
//
/////*
////棋盘:
////map[i][j]表示坐标(i,j)的值
////0表示空地
////1表示黑子
////2表示白子
////如: map[3][6] = 1 表示(3,6)的位置是黑子
////*/
//int map[19][19];
////// 表示当前回合数 偶数表示黑棋落子 奇数表示白棋落子
////// 如: flag = 20 表示当前是第[20]次落子 由黑方落子
//int flag;
////// -------------------- 数据设计 --------------------
////// -------------------- service --------------------
/////*
////负责人: 张三
////功能: 初始化游戏数据
////将棋盘的值初始化为0
////当前回合设为黑棋(flag设为0)
////参数: void
////返回值: void
////*/
//void init();
//int isWin(int x, int y);
//int playerMove(int x, int y);
//void menuView();
//void gameView_ShowMap();
//void winView();
//void gameView();
////// -------------------- view --------------------
//int main()
//{
//	int testflag = 0;
//	////init测试代码
//
//	init();
//	if (flag != 0) {
//		printf("init()错误");
//		exit(0);
//	}
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			if (map[i][j]) {
//				printf("init()错误");
//				exit(0);
//			}
//		}
//	}
//	printf("init()测试成功\n");
//	testflag++;
//
//	//playerMove测试代码
//
//	int result = 1;
//	result &= playerMove(2, 2);
//	result &= playerMove(2, 3);
//	result &= playerMove(2, 4);
//	result &= playerMove(2, 5);
//	if (result != 1 || (map[2][2] & map[2][3] & map[2][4] & map[2][5]) != 1) {
//		printf("playerMove()1错误");
//		exit(0);
//	}
//	flag = 1;
//	result &= playerMove(2, 5);
//	if (result != 0 || map[2][5] != 1) {
//		printf("playerMove()2错误");
//		exit(0);
//	}
//	printf("playerMove()测试成功\n");
//	testflag++;
//
//	//isWin测试代码
//	playerMove(2, 1);
//	if (isWin(2, 1)) {
//		printf("iswin()错误1");
//		exit(0);
// 	}
//	playerMove(1, 0);
//	playerMove(3, 2);
//	playerMove(4, 3);
//	playerMove(5, 4);
//	if (isWin(1, 0) == 2) {
//		printf("iswin()错误2");
//		exit(0);
//	}
//	printf("isWin()测试成功\n");
//    testflag++;
//
//	if (testflag == 3) {
//    	printf("service代码测试成功\n");
//	}
//	return 0;
//}
//void init() {
//	int flag = 0;
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			map[i][j] = 0;
//		}
//	}
//}
/////*
////*难点1
////负责人: 张三
////功能: 根据传入的坐标(map对应位置)和flag值 判断落点后是否获胜
////参数:
////x: 当前回合落子的x坐标
////y: 当前回合落子的y坐标
////返回值:
////0表示没有获胜
////1表示黑子胜利
////2表示白子胜利
////*/
//int isWin(int x, int y) {
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 19; i++)
//	{
//		for (j = 0; j < 15; j++)//推移
//		{
//			if (map[i][j] == map[i][j + 1] &&
//				map[i][j] == map[i][j + 2] &&
//				map[i][j] == map[i][j + 3] &&
//				map[i][j] == map[i][j + 4])
//			{
//				return map[i][j];
//			}
//		}
//	}
//	//列
//	for (j = 0; j < 15; j++)
//	{
//		for (i = 0; i < 15; i++)//推移
//		{
//			if (map[i][j] == map[i + 1][j] &&
//				map[i][j] == map[i + 2][j] &&
//				map[i][j] == map[i + 3][j] &&
//				map[i][j] == map[i + 4][j])
//			{
//				return map[i][j];
//			}
//		}
//	}
//	//俩对角
//	for (i = 0, j = 0; i < 15; i++, j++)
//	{
//		if (map[i][j] == map[i + 1][j + 1] &&
//			map[i][j] == map[i + 2][j + 2] &&
//			map[i][j] == map[i + 3][j + 3] &&
//			map[i][j] == map[i + 4][j + 4])
//		{
//			return map[i][j];
//		}
//		if (map[i][j + 4] == map[i + 1][j + 3] &&
//			map[i][j + 4] == map[i + 2][j + 2] &&
//			map[i][j + 4] == map[i + 3][j + 1] &&
//			map[i][j + 4] == map[i + 4][j])
//		{
//			return map[i][j + 4];
//		}
//	}
//
//	return 0;
//}
/////*
////负责人: 张三
////功能: 在指定位置落子
////如果map[x][y]是空地 则修改map[x][y]的值:改为相应颜色(flag对应颜色)
////否则不操作
////参数:
////x: 当前回合落子的x坐标
////y: 当前回合落子的y坐标
////返回值:
////0表示落子失败 (棋盘已经有子)
////1表示落子成功
////*/
//int playerMove(int x, int y) {
//	if (map[x][y] != 0) {
//		return 0;
//	}
//	else {
//		if (flag / 2 == 0) {
//			map[x][y] = 1;
//			return 1;
//		}
//		else {
//			map[x][y] = 2;
//			return 1;
//		}
//	}
//}
////// -------------------- service --------------------
////// -------------------- view --------------------
/////*
////功能: 展示选项, 玩家可以在这里选择进入游戏, 进入设置或退出游戏
////进入游戏: 调用游戏界面函数gameView();
////进入设置: 敬请期待...
////退出游戏: 调用exit(0);
////*/
//void menuView() {
//	printf("***************************\n");
//	printf("*****1、进入游戏***********\n");
//	printf("*****2、进入设置***********\n");
//	printf("*****3、退出游戏**********\n");
//	printf("***************************\n");
//	int n;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		gameView();
//		break;
//	case 2:
//		printf("敬请期待");
//		break;
//	case 3:
//		exit(0);
//		break;
//	default:
//		break;
//	}
//	//代码实现
//}
/////*
////负责人: 张三
////功能: 根据map数组 打印游戏棋盘
////参数: void
////返回值: void
////*/
//void gameView_ShowMap() {
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			printf("%d\n", map[i][j]);
//		}
//	}
//}
/////*
////负责人: 张三
////功能: 根据flag的值 打印游戏胜利界面 用户可以按任意键回到主菜单
////参数: void
////返回值: void
////*/
//void winView() {
//	if (flag / 2 == 0) {
//		printf("黑棋获胜");
//		system("pause");
//	}
//	else {
//		printf("白棋获胜");
//		system("pause");
//	}
//
//}
/////*难点2
////负责人 : 张三
////功能 : 游戏界面整合
////初始化游戏数据(调用函数init())
////while (1) {
////	打印游戏界面(调用函数gameView_ShowMap())
////		接收玩家坐标输入
////		落子(调用落子函数playerMove())
////		(如果落子失败 重新开始循环)
////		判断游戏是否胜利(调用胜利判断函数isWin())
////		(如果游戏胜利 调用胜利界面函数 然后结束当前界面)
////		切换玩家(修改flag值)
////}
////参数: void
////返回值 : void
////*/
//void gameView() {
//	init();
//	while (1) {
//		gameView_ShowMap(); 
//		int x, y;
//		scanf("%d%d", &x, &y);
//		if (!playerMove(x, y)) {
//			continue; 
//		}
//		int winner = isWin(x, y);
//		if (winner) {
//			winView(); 
//			break; 
//		}
//	}
//
//}