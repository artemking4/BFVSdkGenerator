// Object: SimpleMovementActionData
// ClassId: 4318
// RuntimeId: 6854
// TypeInfo: 0x0000000144E8F5E0
#include "../GameShared/SimpleMovementActionBaseData.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class SimpleMovementActionData : public GameShared::SimpleMovementActionBaseData {
        Float32 Level; // 0x28
        Int32 Action; // 0x2C
        Int32 SpecialAnimationIndex; // 0x30
        Boolean Teleport; // 0x34
        Boolean Respawn; // 0x35
        char pad_0x36[0x2];
    }; // 0x38
    static_assert(sizeof(SimpleMovementActionData) == 0x38);
}
#pragma pack(pop)