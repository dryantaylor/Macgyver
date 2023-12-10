#pragma once
#include "ComponentData.h"
namespace Macgyver::Components {
	/*
	Wrapper around a Component Data struct to hold it's type
	and a pointer to the Data struct
	*/
	struct ComponentDataWrapper {
		/*
		Constructor for the struct

		@param data type of the object calculated using
		typeinfo().hash_code()
		@param data pointer to the data struct casted to the dummy
		ComponentData* type
		*/
		ComponentDataWrapper(std::size_t type, ComponentData* data);

		/// type of the data
		std::size_t type;
		/// pointer to the data struct casted to a ComponentData*
		ComponentData* data;
	};
}