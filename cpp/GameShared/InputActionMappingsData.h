// Object: InputActionMappingsData
// ClassId: 4158
// RuntimeId: 11978
// TypeInfo: 0x0000000144E6BED0
#include "../Core/DataContainer.h"
#include "../GameShared/InputActionMappingData.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputActionMappingsData : public Core::DataContainer {
        Array<GameShared::InputActionMappingData> Mappings; // 0x18
    }; // 0x20
    static_assert(sizeof(InputActionMappingsData) == 0x20);
}
#pragma pack(pop)