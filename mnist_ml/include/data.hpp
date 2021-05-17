#ifndef __DATA_H
#define __DATA_H

#include<vector>
#include<stdint.h> // uint8_t 
#include<stdio.h>

class data
{
  std::vector<uint8_t> *feature_vector;  //no class at end
  uint8_t label; 
  uint8_t enum_label; // A -> 1, B -> 2

  //double distance;

  public:
  data();
  ~data();
  void setDistance(double);

  void set_feature_vector(std::vector<uint8_t>*);
  void append_to_feature_vector(uint8_t);
  void set_label(uint8_t);
  void set_enumerated_label(int);

  //void setNormalizedFeatureVector(std::vector<double>*);
  //void setClassVector(int counts);
  //void printVector();
  //void printNormalizedVector();

  //double getDistance();

  int get_feature_vector_size();
  uint8_t get_label();
  uint8_t get_enumerated_label();

  std::vector<uint8_t> * get_feature_vector();


  //std::vector<double> * getNormalizedFeatureVector();
  //std::vector<int> getClassVector();

};

#endif
