// Object: SquadReinforcementControlEntityData
// ClassId: 3504
// RuntimeId: 63922
// TypeInfo: 0x0000000144D356B0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../CasablancaShared/SquadCallinType.h"
#include "../CasablancaShared/SquadAssetType.h"
#include "../Global/Uint32.h"
#include "../CasablancaShared/SquadItemType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementControlEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0x4];
        GameShared::UnlockAssetBase Item; // 0x28
        CasablancaShared::SquadCallinType CallinType; // 0x30
        CasablancaShared::SquadAssetType AssetType; // 0x34
        Uint32 UnlockIdentifier; // 0x38
        CasablancaShared::SquadItemType TypeToTarget; // 0x3C
        Boolean Enabled; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(SquadReinforcementControlEntityData) == 0x48);
}
#pragma pack(pop)