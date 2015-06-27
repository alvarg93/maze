#ifndef square_H
#define square_H

//Model kostki złożonej z trójkątów
//Zawiera tablice:
//squareVertices - tablica współrzędnych homogenicznych wierzchołków
//squareNormals - tablica kolorów
//squareTexCoords - tablica współrzędnych teksturowania
//squareColors - tablica kolorów
//Culling GL_CW
//TBN friendly

int squareVertexCount=6;

float squareVertices[]={
	 1.0f,-1.0f,1.0f,1.0f,
	-1.0f, 1.0f,1.0f,1.0f,
	-1.0f,-1.0f,1.0f,1.0f,
	 
	 1.0f,-1.0f,1.0f,1.0f,
	 1.0f, 1.0f,1.0f,1.0f,
	-1.0f, 1.0f,1.0f,1.0f,	
}; 

float squareColors[]={
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,
	
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,
	1.0f,0.0f,0.0f,1.0f,
};

float squareNormals[]={
	 0.0f, 0.0f,1.0f,0.0f,
	 0.0f, 0.0f,1.0f,0.0f,
	 0.0f, 0.0f,1.0f,0.0f,
	 
	 0.0f, 0.0f,1.0f,0.0f,
	 0.0f, 0.0f,1.0f,0.0f,
	 0.0f, 0.0f,1.0f,0.0f,
};

float squareTexCoords[]={
	1.0f,1.0f, 0.0f,0.0f, 0.0f,1.0f, 
	1.0f,1.0f, 1.0f,0.0f, 0.0f,0.0f,
};



#endif