// Object: ToolData
// ClassId: 5190
// RuntimeId: 62519
// TypeInfo: 0x0000000144E812C0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class ToolData : public Core::DataContainer {
        Boolean IsAlwaysActive; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(ToolData) == 0x20);
}
#pragma pack(pop)