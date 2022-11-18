// Object: InputConfiguration
// ClassId: 4166
// RuntimeId: 50100
// TypeInfo: 0x0000000144BEB120
#include "../Core/DataContainer.h"
#include "../App/InputSet.h"

#pragma pack(push, 8)
namespace App {
    class InputConfiguration : public Core::DataContainer {
        Array<App::InputSet> CustomInputSets; // 0x18
    }; // 0x20
    static_assert(sizeof(InputConfiguration) == 0x20);
}
#pragma pack(pop)