#pragma once
#include <stdio.h>//���ͷ�ļ����������������һ�ξͿ�����
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
//��û�������λ�������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ-��*��
//����Ӯ-��#��
//ƽ��-��Q��
//����-��C��
char Iswin(char board[ROW][COL], int row, int col);

////�ж�ƽ��
//int Isfull(char board[ROW][COL], int row, int col);
//�������������ҪҲ���ԣ���Ϊmain.c������game.c��ʹ����game.h��������
//Isfull�����ǰ�����game.c�ļ���������Բ�����game.h��������