// Object: UnlockGroupCompareEntityData
// ClassId: 3854
// RuntimeId: 35754
// TypeInfo: 0x0000000144F49E40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../SoldierShared/UnlockGroupCompareEntityGroup.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class UnlockGroupCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<SoldierShared::UnlockGroupCompareEntityGroup> Groups; // 0x28
        GameShared::UnlockAssetBase Unlock; // 0x30
        Int32 UnlockId; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(UnlockGroupCompareEntityData) == 0x40);
}
#pragma pack(pop)