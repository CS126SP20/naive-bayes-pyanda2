// Copyright (c) 2020 [Your Name]. All rights reserved.

#ifndef BAYES_IMAGE_H_
#define BAYES_IMAGE_H_

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
namespace bayes {

/*
 * We've given you a starter class to represent an image.
 * You are totally allowed to delete, change, move, rename, etc. this class
 * however you like! In fact, we encourage it! It only exists as a starting
 * point of reference.
 *
 * You can delete this comment once you're done with it.
 */

constexpr size_t kImageSize = 28;

class Image {
 private:
  string images_file_name;
  string labels_file_name;
  int number_of_shaded_pixels;
  char pixels_[kImageSize][kImageSize]{};
  vector<vector<char>> image_char_2d;

 public:
  [[nodiscard]] const vector<vector<char>>& GetImage() const;
  Image();
  Image(string &images_file_name, string &labels_file_name);
  friend istream& operator>>(istream& input, Image& image);
  friend ostream& operator<<(ostream& output, const Image& image);

};
//overloaded operators for loading in or extracting an image
istream& operator>>(istream& input, Image& image);
ostream& operator<<(ostream& output, const Image& image);

}  // namespace bayes

#endif  // BAYES_IMAGE_H_
