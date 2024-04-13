#pragma once
#include <string>
#include "json.hpp"
#include "iostream"
#include "Messenger.h"


namespace Macgyver::Serialisation {
	/**
	 * Singleton class for Components to serialise/deserialise
	 * data through
	 */
	class SingletonSerialiser {
	public:
		/**
		 * Serialise the messenger
		 * @return JSON string of the messenger with the format:
		 * {"size": int n, "values": int64 array length n}
		 
		 */
		static std::string serialiseMessenger();
		/**
		 * Deserialise the messenger
		 * @param serialised JSON string of the messenger with the format:
		 * {"size": int n, "values": int64 array length n}
		 */
		static void deserialiseMessenger(std::string serialised);
		/**
		 *TODO: FUNCTION WORK IN PROGRESS
		 * Serialise the animations
		 * @return JSON string of the animations
		 */
		static std::string serialiseAnimations();
	
	};
}
