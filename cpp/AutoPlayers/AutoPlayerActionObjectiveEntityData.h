// Object: AutoPlayerActionObjectiveEntityData
// ClassId: 2079
// RuntimeId: 58593
// TypeInfo: 0x0000000144BEC810
#include "../AutoPlayers/AutoPlayerObjectiveEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace AutoPlayers {
    class AutoPlayerActionObjectiveEntityData : public AutoPlayers::AutoPlayerObjectiveEntityData {
        Core::Vec3 ActionTargetPosition; // 0x80
        Core::Vec3 ActionPosition; // 0x90
        Float32 ActionStartRadius; // 0xA0
        Int32 SelectItemInput; // 0xA4
        Int32 ActionInput; // 0xA8
        Float32 ActionTime; // 0xAC
        Boolean IsASpammingButtonAction; // 0xB0
        Boolean UseRandomPathSpread; // 0xB1
        Boolean InfiniteRetriesAfterObjectiveDone; // 0xB2
        char pad_0xB3[0xD];
    }; // 0xC0
    static_assert(sizeof(AutoPlayerActionObjectiveEntityData) == 0xC0);
}
#pragma pack(pop)