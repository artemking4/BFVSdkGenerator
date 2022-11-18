// Object: CoopSquadReinforcementEntityData
// ClassId: 2553
// RuntimeId: 24474
// TypeInfo: 0x0000000144D50ED0
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/SquadItemList.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CoopSquadReinforcementEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Float32 ScoreMultiplier; // 0x24
        CasablancaShared::SquadItemList ItemList; // 0x28
        Array<Int32> EnabledHashes; // 0x30
        Array<Int32> LaunchPositionHashes; // 0x38
    }; // 0x40
    static_assert(sizeof(CoopSquadReinforcementEntityData) == 0x40);
}
#pragma pack(pop)