// Object: DebugUnlockAggregatorEntityData
// ClassId: 2613
// RuntimeId: 57278
// TypeInfo: 0x0000000144D016A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DebugUnlockAggregatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 PropertyCount; // 0x24
        Array<GameShared::UnlockAssetBase> Events; // 0x28
    }; // 0x30
    static_assert(sizeof(DebugUnlockAggregatorEntityData) == 0x30);
}
#pragma pack(pop)