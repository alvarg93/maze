#ifndef maze_h
#define maze_h

#include<stdio.h>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;

class Maze
{
private:

    static const int MAXS = 50; //maksymalny rozmiar mapy
	static const int MAXL = 10;
    static const char SEP = '#'; //znak oznaczający separator
    static const int dx[4];
    static const int dy[4];


	
	vector<int>leafx;
	vector<int>leafy;

	char map[MAXL][MAXS][MAXS]; //macierz znaków symbolizująca labirynt 
    int height,width,layers; //wymiary labiryntu
	
	int cur_layer;

    bool valid(int sty,int stx,int y,int x,int layer);
    void Generate(int sty,int stx,int layer);

public:
	int elevator_up_i;
	int elevator_up_j;
	int elevator_down_i;
	int elevator_down_j;


	int elevator_i;
	int elevator_j;

    Maze(int _height,int _width,int layers);

    char* operator[](int i);

    void GetSize(int& _height,int& _width);
	int GetLayers();
	void NextLayer();
	void PreviousLayer();
	void Show(int layer);

	int getElevatorI();
	int getElevatorJ();
};
#endif
