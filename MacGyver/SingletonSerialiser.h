#pragma once
#include <string>
#include "json.hpp"
#include "iostream"
#include "Messenger.h"
namespace Macgyver::Serialisation {
	class SingletonSerialiser {
	public:
		static std::string serialiseMessenger();
		static void deserialiseMessenger(std::string serialised);
		
		static std::string serialiseAnimations();
	
	};
}
