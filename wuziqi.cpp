//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string>
//using namespace std;
//
/////*
////����:
////map[i][j]��ʾ����(i,j)��ֵ
////0��ʾ�յ�
////1��ʾ����
////2��ʾ����
////��: map[3][6] = 1 ��ʾ(3,6)��λ���Ǻ���
////*/
//int map[19][19];
////// ��ʾ��ǰ�غ��� ż����ʾ�������� ������ʾ��������
////// ��: flag = 20 ��ʾ��ǰ�ǵ�[20]������ �ɺڷ�����
//int flag;
////// -------------------- ������� --------------------
////// -------------------- service --------------------
/////*
////������: ����
////����: ��ʼ����Ϸ����
////�����̵�ֵ��ʼ��Ϊ0
////��ǰ�غ���Ϊ����(flag��Ϊ0)
////����: void
////����ֵ: void
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
//	////init���Դ���
//
//	init();
//	if (flag != 0) {
//		printf("init()����");
//		exit(0);
//	}
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			if (map[i][j]) {
//				printf("init()����");
//				exit(0);
//			}
//		}
//	}
//	printf("init()���Գɹ�\n");
//	testflag++;
//
//	//playerMove���Դ���
//
//	int result = 1;
//	result &= playerMove(2, 2);
//	result &= playerMove(2, 3);
//	result &= playerMove(2, 4);
//	result &= playerMove(2, 5);
//	if (result != 1 || (map[2][2] & map[2][3] & map[2][4] & map[2][5]) != 1) {
//		printf("playerMove()1����");
//		exit(0);
//	}
//	flag = 1;
//	result &= playerMove(2, 5);
//	if (result != 0 || map[2][5] != 1) {
//		printf("playerMove()2����");
//		exit(0);
//	}
//	printf("playerMove()���Գɹ�\n");
//	testflag++;
//
//	//isWin���Դ���
//	playerMove(2, 1);
//	if (isWin(2, 1)) {
//		printf("iswin()����1");
//		exit(0);
// 	}
//	playerMove(1, 0);
//	playerMove(3, 2);
//	playerMove(4, 3);
//	playerMove(5, 4);
//	if (isWin(1, 0) == 2) {
//		printf("iswin()����2");
//		exit(0);
//	}
//	printf("isWin()���Գɹ�\n");
//    testflag++;
//
//	if (testflag == 3) {
//    	printf("service������Գɹ�\n");
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
////*�ѵ�1
////������: ����
////����: ���ݴ��������(map��Ӧλ��)��flagֵ �ж������Ƿ��ʤ
////����:
////x: ��ǰ�غ����ӵ�x����
////y: ��ǰ�غ����ӵ�y����
////����ֵ:
////0��ʾû�л�ʤ
////1��ʾ����ʤ��
////2��ʾ����ʤ��
////*/
//int isWin(int x, int y) {
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < 19; i++)
//	{
//		for (j = 0; j < 15; j++)//����
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
//	//��
//	for (j = 0; j < 15; j++)
//	{
//		for (i = 0; i < 15; i++)//����
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
//	//���Խ�
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
////������: ����
////����: ��ָ��λ������
////���map[x][y]�ǿյ� ���޸�map[x][y]��ֵ:��Ϊ��Ӧ��ɫ(flag��Ӧ��ɫ)
////���򲻲���
////����:
////x: ��ǰ�غ����ӵ�x����
////y: ��ǰ�غ����ӵ�y����
////����ֵ:
////0��ʾ����ʧ�� (�����Ѿ�����)
////1��ʾ���ӳɹ�
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
////����: չʾѡ��, ��ҿ���������ѡ�������Ϸ, �������û��˳���Ϸ
////������Ϸ: ������Ϸ���溯��gameView();
////��������: �����ڴ�...
////�˳���Ϸ: ����exit(0);
////*/
//void menuView() {
//	printf("***************************\n");
//	printf("*****1��������Ϸ***********\n");
//	printf("*****2����������***********\n");
//	printf("*****3���˳���Ϸ**********\n");
//	printf("***************************\n");
//	int n;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		gameView();
//		break;
//	case 2:
//		printf("�����ڴ�");
//		break;
//	case 3:
//		exit(0);
//		break;
//	default:
//		break;
//	}
//	//����ʵ��
//}
/////*
////������: ����
////����: ����map���� ��ӡ��Ϸ����
////����: void
////����ֵ: void
////*/
//void gameView_ShowMap() {
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			printf("%d\n", map[i][j]);
//		}
//	}
//}
/////*
////������: ����
////����: ����flag��ֵ ��ӡ��Ϸʤ������ �û����԰�������ص����˵�
////����: void
////����ֵ: void
////*/
//void winView() {
//	if (flag / 2 == 0) {
//		printf("�����ʤ");
//		system("pause");
//	}
//	else {
//		printf("�����ʤ");
//		system("pause");
//	}
//
//}
/////*�ѵ�2
////������ : ����
////���� : ��Ϸ��������
////��ʼ����Ϸ����(���ú���init())
////while (1) {
////	��ӡ��Ϸ����(���ú���gameView_ShowMap())
////		���������������
////		����(�������Ӻ���playerMove())
////		(�������ʧ�� ���¿�ʼѭ��)
////		�ж���Ϸ�Ƿ�ʤ��(����ʤ���жϺ���isWin())
////		(�����Ϸʤ�� ����ʤ�����溯�� Ȼ�������ǰ����)
////		�л����(�޸�flagֵ)
////}
////����: void
////����ֵ : void
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