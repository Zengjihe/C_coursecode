#pragma once
//��ǰ��������ʹ��printf()��scanf()�������ᱨ����
#define _CRT_SECURE_NO_WARNINGS
//�����������õ�������ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�궨���ά����������������������޸�
#define ROW 3
#define COL 3
//��game.cԴ�ļ��еĺ������к������������������������е���
void InitBoard(char Board[ROW][COL], int row, int col);
void DisplayBoard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void ComputerMove(char Board[ROW][COL], int row, int col);
char Is_Win(char Board[ROW][COL], int row, int col);
