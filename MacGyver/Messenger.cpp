#include "Messenger.h"
#include <cstring>
#include <utility>

void Macgyver::Messenger::setDataSize(size_t newSize)
{
	long long* newData = new long long[newSize];
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
}

Macgyver::Messenger::~Messenger()
{
	delete[] data;
}
