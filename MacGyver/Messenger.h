#pragma once

namespace Macgyver {

	class Messenger {
		static Messenger& getInstance() {
			static Messenger instance;
			return instance;
		}
		Messenger(const Messenger&) = delete;
		Messenger& operator=(const Messenger&) = delete;

		long long& operator[](std::size_t idx) { return data[idx]; }
		const long long& operator[](std::size_t idx) const { return data[idx]; }
		void setDataSize(size_t newSize);
		size_t getDataSize() const;
		long long* data;
	private:
		size_t size;
		Messenger();
		~Messenger();
	};

}
