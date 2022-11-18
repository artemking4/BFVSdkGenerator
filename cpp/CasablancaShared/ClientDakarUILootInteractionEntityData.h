// Object: ClientDakarUILootInteractionEntityData
// ClassId: 2480
// RuntimeId: 62116
// TypeInfo: 0x0000000144D661F0
#include "../Entity/EntityData.h"
#include "../GameShared/UnlockAsset.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientDakarUILootInteractionEntityData : public Entity::EntityData {
        Array<GameShared::UnlockAsset> WeaponTierAssets; // 0x20
        CString UIMetaDataType; // 0x28
        Int32 LootItemIndex; // 0x30
        Boolean IsEnabled; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(ClientDakarUILootInteractionEntityData) == 0x38);
}
#pragma pack(pop)