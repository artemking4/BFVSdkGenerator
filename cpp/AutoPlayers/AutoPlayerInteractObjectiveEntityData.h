// Object: AutoPlayerInteractObjectiveEntityData
// ClassId: 2083
// RuntimeId: 36722
// TypeInfo: 0x0000000144BECDE0
#include "../AutoPlayers/AutoPlayerObjectiveEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace AutoPlayers {
    class AutoPlayerInteractObjectiveEntityData : public AutoPlayers::AutoPlayerObjectiveEntityData {
        Core::Vec3 InteractionEntityPosition; // 0x80
        Core::Vec3 InteractionPosition; // 0x90
        Int32 InteractInputAction; // 0xA0
        Float32 InteractionStartRadius; // 0xA4
        Float32 HoldToInteractTime; // 0xA8
        Float32 PrimaryInteractionSearchRadius; // 0xAC
        Boolean FindInteractTargetPosition; // 0xB0
        Boolean UseRandomPathSpread; // 0xB1
        Boolean IsASpammingButtonAction; // 0xB2
        Boolean InfiniteRetriesAfterObjectiveDone; // 0xB3
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(AutoPlayerInteractObjectiveEntityData) == 0xC0);
}
#pragma pack(pop)