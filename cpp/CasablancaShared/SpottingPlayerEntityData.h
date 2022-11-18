// Object: SpottingPlayerEntityData
// ClassId: 3501
// RuntimeId: 19635
// TypeInfo: 0x0000000144D357B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/SpotType.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpottingPlayerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult QueryEntityResult; // 0x28
        CasablancaShared::SpotType SpotType; // 0x38
        Guid SpottingGadgetUnlockGuid; // 0x3C
        Boolean NoSpottingIfFriendly; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(SpottingPlayerEntityData) == 0x50);
}
#pragma pack(pop)