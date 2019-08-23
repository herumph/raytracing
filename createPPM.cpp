#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("PPM_test.ppm");

  // Header information
  int height = 400; int width = 400; int maxColor = 255;
  myfile << "P3\n";
  myfile << width;
  myfile << "\n";
  myfile << height;
  myfile << "\n";
  myfile << maxColor;
  myfile << "\n";

  int pixelVal1; int pixelVal2; int pixelVal3;
  for (int y = 0; y < height; ++y) {
      for (int x = 0; x < width; ++x) {
        //int pixelVal1 = rand() % maxColor;
        if (y < height/2) {
          pixelVal1 = 255;
          pixelVal2 = 255;
          pixelVal3 = 0;
        }
        if (y >= height/2) {
          pixelVal1 = 0;
          pixelVal2 = 0;
          pixelVal3 = 255;
        }

        myfile << pixelVal1 << " " << pixelVal2 << " " << pixelVal3 << "\t";
    }
    myfile << "\n";
  }
  myfile.close();
  return 0;
}
