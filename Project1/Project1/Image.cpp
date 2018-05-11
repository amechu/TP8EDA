#include "Image.h"



Image::Image()
{
}


Image::Image(std::string path_, unsigned width_, unsigned height_) : path(path_), width(width_), height(height_)
{
	setName(path_);
	loadBitmap(path_);
}

Image::~Image()
{
}
