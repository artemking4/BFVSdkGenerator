// Object: SquadReinforcementListenerEntityData
// ClassId: 3507
// RuntimeId: 63271
// TypeInfo: 0x0000000144D34DB0
#include "../Entity/EntityData.h"
#include "../GameShared/UnlockAssetBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementListenerEntityData : public Entity::EntityData {
        Array<GameShared::UnlockAssetBase> UnlockAssets; // 0x20
    }; // 0x28
    static_assert(sizeof(SquadReinforcementListenerEntityData) == 0x28);
}
#pragma pack(pop)