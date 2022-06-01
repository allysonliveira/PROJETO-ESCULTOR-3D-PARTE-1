#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "voxel.hpp"

class Sculptor {
protected:
  Voxel ***v; // ponteiro para ponteiro para ponteiro do tipo struct Voxel

  int nx,ny,nz; // dimens�es x,y e z da matriz
  float r,g,b,a; // define o tom vermelho, verde e azul para cada voxel, e transparencia
public:
  Sculptor(int _nx, int _ny, int _nz); //construtor respons�vel por iniciar classe
  ~Sculptor(); // destrutor da classe
  void setColor(float r, float g, float b, float alpha); // se refere a sele��o de cor
  void putVoxel(int x, int y, int z); // se refere a ativa��o de um voxel em (x,y,z)
  void cutVoxel(int x, int y, int z); // se refere a desativa��o de um voxel em (x,y,z)
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1); // ativa um bloco de voxel
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1); // retira um bloco de voxel
  void putSphere(int xcenter, int ycenter, int zcenter, int radius); // ativa um bloco de voxel em forma de esfera
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius); // retira um bloco de voxelem forma de esfera
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // ativa um bloco de voxel em forma de elipsoide
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz); // retira um bloco de voxel em forma de elipsoide
  void writeOFF(const char* filename);
};

#endif
