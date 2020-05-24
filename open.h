#pragma once
#include <glut.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <Windows.h>
#include <cmath>
using namespace std;

const int maxSize = 20;                      //максимальное число вершин
extern int WinW;
extern int WinH;
struct vertCoord		                    
{
	int x, y;
};

class Graph
{
private:
	vector<int> vertList;					
	int adjMatrix[maxSize][maxSize];		
public:
	Graph();                              
	~Graph();                             
	bool IsEmpty();		                    
	bool IsFull();		                    

	int getVertText(int i) { return vertList[i]; }                               //получить значение вершины
	vector<int> getVertList() { return  vertList; }                              //получить вектор вершин
	int getAdjMatrixElem(int i, int j) { return adjMatrix[i][j]; }               //получить элемент матрицы смежности
	void setEdgeZero(int i, int j) { adjMatrix[i][j] = 0; adjMatrix[j][i] = 0; } //занулить элемент матрицы (для Коммивояжера)
	int GetAmountVerts() { return vertList.size(); }                             //получить количество вершин графа
	int GetVertPos(const int& vertex);		                                     //получить позицию вершины в векторе вершин
	int GetAmountEdges();                                                        //получить количество ребер графа
	void InsertVertex(const int& vertex);					                     //добавить вершину (в конец вектора вершин)
	void InsertEdge(const int& vertex1, const int& vertex2, int weigth);	     //добавить ребро весом weight между vertex1 и vertex2
	void Print();		                                                         //вывод матрицы смежности в консоль
	void eraseLastVert();                                                        //удалить последнюю вершину в векторе вершин
	void eraseEdge(const int& vertex1, const int& vertex2);                      //удалить ребро между vertex1 и vertex2
	void drawGraph();                                                            //рисоавание графа OpenGL
};
extern Graph graph;		                                                         //создается объект класса Graph

int** Make_TSPMatrix();	                                                         //создается матрица, заменяя 0 на -1
int* Find_Min(int* line, int n);	                                             //поиск минимального элемента в строке матрицы
void Print_Matrix(int** matrix);		                                         //вывод текущей матрицы
int** Reduct_Matrix(int** oldmatrix);		                                     //редукция матрицы
int** Rebuild_Matrix(int** oldmatrix);
void Print_Result();                                                             //вывод результата решения задачи Коммивояжера

void drawButton1();
void drawButton2();
void drawButton3();
void drawButton4();
void drawButton5();

void drawCircle(int x, int y, int R);                                         
void drawBorderedCircle(int x, int y, int R);                                   
void drawText(int nom, int x1, int y1);                                        
void drawLine(int text, int x0, int y0, int x1, int y1);                         
void drawVertex(int n);                                                          

void makeGraph();                                                              
void setCoords(int i, int n);                                                  

bool Salesman_Check(int** matrix);                                              
int Circle_Check(int x, int y);                                               
void Button_Check(int x, int y);                                                

void mouseMove(int x, int y);                                                    
void mouseClick(int button, int state, int x, int y);                            
void reshape(int w, int h);                                                      
void display();                                                                 

