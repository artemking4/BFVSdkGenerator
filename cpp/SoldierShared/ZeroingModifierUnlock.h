// Object: ZeroingModifierUnlock
// ClassId: 5722
// RuntimeId: 12672
// TypeInfo: 0x0000000144F49A40
#include "../Core/DataContainer.h"
#include "../Global/Guid.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ZeroingModifierUnlock : public Core::DataContainer {
        Guid UnlockAssetGuid; // 0x18
        Int32 ZeroingIndex; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ZeroingModifierUnlock) == 0x30);
}
#pragma pack(pop)