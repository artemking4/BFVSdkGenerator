// Object: AutoPlayerDefendObjectiveEntityData
// ClassId: 2081
// RuntimeId: 4386
// TypeInfo: 0x0000000144BEC710
#include "../AutoPlayers/AutoPlayerObjectiveEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace AutoPlayers {
    class AutoPlayerDefendObjectiveEntityData : public AutoPlayers::AutoPlayerObjectiveEntityData {
        Core::Vec3 TargetPosition; // 0x80
        Float32 DefendAreaRadius; // 0x90
        Boolean UseRandomPathSpread; // 0x94
        Boolean DefendCurrentPosition; // 0x95
        Boolean IsTargetReachedAsSoonAsEnteringTargetArea; // 0x96
        char pad_0x97[0x9];
    }; // 0xA0
    static_assert(sizeof(AutoPlayerDefendObjectiveEntityData) == 0xA0);
}
#pragma pack(pop)