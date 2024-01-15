#include "Messenger.h"
#include <cstring>
#include <utility>

void Macgyver::Messenger::setDataSize(size_t newSize)
{
	long long* newData = new long long[newSize];
	//TODO: kinda janky to be writing all 0's just to overwrite
	// consider coming up with a cleverer way of doing this or hope
	// the compiler figures it out
	memset(newData, 0, newSize * sizeof(*newData));
	std::memcpy(newData, this->data, std::min(newSize, size));
	delete[] data;
	data = newData;
	this->size = newSize;
}

size_t Macgyver::Messenger::getDataSize() const
{
	return this->size;
}

Macgyver::Messenger::Messenger()
{
	size = 256;
	data = new long long[size];

	memset(data, 0, size * sizeof(*data));
}

Macgyver::Messenger::~Messenger()
{
	delete[] data;
}
