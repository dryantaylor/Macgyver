#pragma once

/// shorthand for getting the Messenger singleton
#define getMessenger Macgyver::Messenger::getInstance()
#include <cstdint>

namespace Macgyver {
	/**
	 * \brief singleton class for storing/transferring data
	 * between different components
	 */
	class Messenger {
	public:
		static Messenger& getInstance() {
			static Messenger instance;
			return instance;
		}
		Messenger(const Messenger&) = delete;
		Messenger& operator=(const Messenger&) = delete;

		/**
		 * \brief get reference to the data at the given index in the data array
		 */
		int64_t& operator[](const size_t idx) { return data[idx]; }

		/**
		 * \brief get const reference to the data at the given index in the data array
		 */
		const int64_t& operator[](const size_t idx) const { return data[idx]; }

		/**
		 * \brief get reference to the data at the given index in the data array
		 */
		void setDataSize(size_t newSize);
		[[nodiscard]] size_t getDataSize() const;

		

	private:
		/// variable sized array of 64-bit integers to internally store data
		int64_t* data;
		/// size of the data array
		size_t size;
		/// remove the constructor/destructor from the public interface
		Messenger();
		~Messenger();
	};

}
