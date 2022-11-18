// Object: AutoPlayerMoveObjectiveEntityData
// ClassId: 2084
// RuntimeId: 49333
// TypeInfo: 0x0000000144BECD60
#include "../AutoPlayers/AutoPlayerObjectiveEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace AutoPlayers {
    class AutoPlayerMoveObjectiveEntityData : public AutoPlayers::AutoPlayerObjectiveEntityData {
        Core::Vec3 TargetPosition; // 0x80
        Float32 MoveAreaRadius; // 0x90
        Boolean IsTargetReachedAsSoonAsEnteringTargetArea; // 0x94
        Boolean UseRandomPathSpread; // 0x95
        char pad_0x96[0xA];
    }; // 0xA0
    static_assert(sizeof(AutoPlayerMoveObjectiveEntityData) == 0xA0);
}
#pragma pack(pop)