#include "SingletonSerialiser.h"

std::string Macgyver::Serialisation::SingletonSerialiser::serialiseMessenger()
{
    std::string serialised = "{\n\"size\": ";

    long long size = getMessenger.getDataSize();
    serialised += std::to_string(size) + ",\n";

    serialised += "\"values\" : [";
    for (long long i = 0; i < size - 1; i++) {
        serialised += std::to_string(getMessenger[i]) + ", ";
    }
    serialised += std::to_string(getMessenger[size - 1]) + "]\n}";
    return serialised;
}

void Macgyver::Serialisation::SingletonSerialiser::deserialiseMessenger(std::string serialised)
{
    auto json = nlohmann::json::parse(serialised);
    getMessenger.setDataSize(json["size"]);
    for (long long i = 0; i < json["size"]; i++) {
        getMessenger[i] = json["values"][i];
        // std::cout << i << " : " << json["values"][i] << std::endl;
    }
}

std::string Macgyver::Serialisation::SingletonSerialiser::serialiseAnimations()
{
    return std::string();
}
