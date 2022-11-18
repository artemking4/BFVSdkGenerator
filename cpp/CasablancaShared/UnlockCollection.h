// Object: UnlockCollection
// ClassId: 5550
// RuntimeId: 41465
// TypeInfo: 0x0000000144D017A0
#include "../Core/DataContainer.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UnlockCollection : public Core::DataContainer {
        Array<GameShared::UnlockAssetBase> Unlocks; // 0x18
    }; // 0x20
    static_assert(sizeof(UnlockCollection) == 0x20);
}
#pragma pack(pop)