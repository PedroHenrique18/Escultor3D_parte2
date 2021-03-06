
#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <string>

struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};

class Sculptor {
protected:
  Voxel ***v;
  // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a, side; // Current drawing color
public:
  Sculptor(int x,int y,int z);
  ~Sculptor();
  void alocaMemoria();
  void limpaVoxels();
  void setColor(float _r, float _g, float _b, float alpha);
  void putVoxel(int _x, int _y, int _z);
  void cutVoxel(int _x, int _y, int _z);
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void writeOFF(std::string filename);

};




#endif // ESCULTOR_H
