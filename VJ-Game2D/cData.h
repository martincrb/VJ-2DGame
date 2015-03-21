#pragma once

#include "cTexture.h"
#include "Globals.h"

//Image array size
#define NUM_IMG		5

//Image identifiers
#define IMG_BLOCKS	0
#define IMG_PLAYER	1
#define IMG_PLAYER2	2
#define IMG_JUMPING_FROG 3
#define IMG_EVIL_BIRD 4
/*
#define IMG_PLAYER	1
#define IMG_ENEMY1	2
#define IMG_ENEMY2	3
#define IMG_SHOOT	4
...
*/

//Sound array size
#define NUM_SND 1

class cData
{
public:
	cData(void);
	~cData(void);

	int  GetID(int img);
	void GetSize(int img,int *w,int *h);
	bool LoadImage(int img,const char *filename,int type = GL_RGBA);

private:
	cTexture texture[NUM_IMG];
};
