// Object: SquadReinforcementEntityData
// ClassId: 3505
// RuntimeId: 5146
// TypeInfo: 0x0000000144D34EB0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/SquadItemList.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/HashToSoundAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Float32 ScoreMultiplier; // 0x24
        CasablancaShared::SquadItemList ItemList; // 0x28
        Int32 PurchasedSquadSpawnCost; // 0x30
        char pad_0x34[0x4];
        Array<Int32> EnabledHashes; // 0x38
        Array<Int32> LaunchPositionHashes; // 0x40
        Array<CasablancaShared::HashToSoundAsset> HashToSound; // 0x48
    }; // 0x50
    static_assert(sizeof(SquadReinforcementEntityData) == 0x50);
}
#pragma pack(pop)