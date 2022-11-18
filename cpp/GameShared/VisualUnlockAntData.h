// Object: VisualUnlockAntData
// ClassId: 5569
// RuntimeId: 63455
// TypeInfo: 0x0000000144E8E360
#include "../Core/DataContainer.h"
#include "../GameShared/AntEnumeration.h"

#pragma pack(push, 8)
namespace GameShared {
    class VisualUnlockAntData : public Core::DataContainer {
        Array<GameShared::AntEnumeration> AntEnumerations; // 0x18
    }; // 0x20
    static_assert(sizeof(VisualUnlockAntData) == 0x20);
}
#pragma pack(pop)