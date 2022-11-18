// Object: BFUIUnlockAssetEntityData
// ClassId: 2412
// RuntimeId: 50399
// TypeInfo: 0x0000000144C32370
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFUIUnlockAssetEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::UnlockAssetBase Unlock; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIUnlockAssetEntityData) == 0x30);
}
#pragma pack(pop)