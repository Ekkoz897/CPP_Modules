#include "Serializer.hpp"

#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data data = {42, 3.14f, "Hello, world!"};

    std::cout << "Original Data:" << std::endl;
    std::cout << "intValue: " << data.intValue << std::endl;
    std::cout << "floatValue: " << data.floatValue << std::endl;
    std::cout << "stringValue: " << data.stringValue << std::endl;

    // Serialize the data
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Serialized data: " << raw << std::endl;

    // Deserialize the data
    Data* deserializedData = Serializer::deserialize(raw);

    std::cout << "Deserialized Data:" << std::endl;
    std::cout << "intValue: " << deserializedData->intValue << std::endl;
    std::cout << "floatValue: " << deserializedData->floatValue << std::endl;
    std::cout << "stringValue: " << deserializedData->stringValue << std::endl;

    return (0);
}
