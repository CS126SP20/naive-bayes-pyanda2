// Copyright (c) 2020 [Your Name]. All rights reserved.

#include <bayes/classifier.h>
#include <bayes/image.h>
#include <bayes/model.h>
#include <gflags/gflags.h>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

// TODO(you): Change the code below for your project use case.

DEFINE_string(name, "Pranav", "Your first name");
DEFINE_bool(happy, false, "Whether the greeting is a happy greeting");


int main(int argc, char** argv) {
  string fileName;
  fileName = argv[1];

// show all command line arguments
  for (int i=0; i<argc; i++)
    cout<<i<<": "<< *(argv+i) <<endl;
  cout<<endl;
  cout<<"fileName: "<<fileName<<endl;

  string file_name = argv[1];
  ifstream file;
  file.open(file_name);
  if (file.is_open()) {
    std::cout << "Halelujah" << std::endl;

  }
  return 0;
}
