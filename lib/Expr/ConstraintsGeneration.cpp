#include "klee/Expr/ConstraintsGeneration.h"
//#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;
using namespace klee;

std::string con;
std::string ConstraintsGeneration::overflow_constraintGen(std::string methodName){
  //printf("This is executing ::::::");

  if(methodName == "__INSTR_check_add_i32"){
     //printf("Inside if statement"); 
     con = "((2147483647 + 1 <= 2147483647) & (2147483647 + 1 >= -2147483648))";
  }
  return con;
}

void ConstraintsGeneration::generate_cfc_out(string write_constraints){

  ofstream myfile;
  myfile.open ("/tmp/cfc.out");
  myfile << write_constraints;
  myfile.close();

}
