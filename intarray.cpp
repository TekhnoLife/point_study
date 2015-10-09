#include "intarray.hpp"

void IntArray::resize(size_t nsize)
{
	int * ndata = new int[nsize];
	size_t n = nsize > (unsigned)this->data_[0] ? this->data_[0] : nsize;
	for (size_t i = 0; i != n; ++i)
		ndata[i] = data_[i];
	delete [] data_;
	data_ = ndata;
	this->data_[0] = nsize;
}
