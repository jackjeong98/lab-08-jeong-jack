#pragma once
const int MAX_H = 512;
const int MAX_W = 512;

void readImage(int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(int image[MAX_H][MAX_W], int height, int width);
void invert(int image[MAX_H][MAX_W], int &height, int &width);

//aqibedits function
void revert_inverted(int image[MAX_H][MAX_W], int &h, int &w);

void invert_half(int image[MAX_H][MAX_W], int &height, int &width);
void box(int image[MAX_H][MAX_W], int &height, int &width);
void frame(int image[MAX_H][MAX_W], int &height, int &width);
void scale(int image[MAX_H][MAX_W], int &height, int &width);
void pixelate(int image[MAX_H][MAX_W], int &height, int &width);
