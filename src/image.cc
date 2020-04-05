// Copyright 2020 [Your Name]. All rights reserved.

#include <bayes/image.h>


using namespace std;
namespace bayes {

const vector<vector<char>>& Image::GetImage() const { return image_char_2d; }

istream& operator>>(istream& input, Image& image) {
  input >> image.images_file_name >> image.labels_file_name;
  return input;
}
ostream& operator<<(ostream& output, const Image& image) {
  return output;
}
Image::Image(string& images_file_name, string& labels_file_name) {
  ifstream images_file;
  images_file.open(images_file_name);
  this->labels_file_name = labels_file_name;
  for (int i = 0; i < kImageSize; i++) {

    string image_line;
    getline(images_file, image_line);
    vector<char> single_line_image;

    for (auto &character : image_line) {
      single_line_image.push_back(character);
    }
    image_char_2d.push_back(single_line_image);
  }
}
Image::Image() = default;

}  // namespace bayes

