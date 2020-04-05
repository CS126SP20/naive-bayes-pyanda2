// Copyright (c) 2020 [Your Name]. All rights reserved.

#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <bayes/classifier.h>
#include <bayes/image.h>

using namespace bayes;
// TODO(you): Remove this unnecessary test case.
TEST_CASE("Sanity Check", "[addition]") {
  REQUIRE(1 + 1 == 2);
}

TEST_CASE("Count number of shaded pixels in image", "[image-function]") {
  string image_name = "data/sampleimages";
  string label_name = "data/samplelabels";
  Image *image;
  image = new Image(image_name, label_name);
  int num_of_shaded_pixels = image->CalcNumOfShadedPixels();
  delete image;
  REQUIRE(num_of_shaded_pixels == 148);
}

TEST_CASE("Count of pixels works", "[image-function]") {
  string image_name = "data/sampleimages";
  string label_name = "data/samplelabels";
  Image *image;
  image = new Image(image_name, label_name);
  int num_of_shaded_pixels = image->CalcNumOfShadedPixels();
  delete image;
  REQUIRE(num_of_shaded_pixels == 148);
}

TEST_CASE("Multiple counts of shaded pixels (3 images)", "[image-function]") {
  string image_name = "data/sampleimages";
  string label_name = "data/samplelabels";
  Image *image;
  image = new Image(image_name, label_name);
  int num_of_shaded_pixels = image->CalcNumOfShadedPixels();
//  int num_of_shaded_pixels_2 = image2->CalcNumOfShadedPixels();
  delete image;
  REQUIRE(num_of_shaded_pixels == 148);
}