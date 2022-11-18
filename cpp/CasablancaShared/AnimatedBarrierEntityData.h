// Object: AnimatedBarrierEntityData
// ClassId: 3256
// RuntimeId: 50219
// TypeInfo: 0x0000000144D6CAB0
#include "../Entity/SpatialEntityData.h"
#include "../CasablancaShared/AnimatedBarrierState.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class AnimatedBarrierEntityData : public Entity::SpatialEntityData {
        Array<CasablancaShared::AnimatedBarrierState> States; // 0x60
        Array<Int32> CustomPropertyIds; // 0x68
        Int32 InitialState; // 0x70
        Float32 ClientEventMaxDistance; // 0x74
        char pad_0x78[0x8];
    }; // 0x80
    static_assert(sizeof(AnimatedBarrierEntityData) == 0x80);
}
#pragma pack(pop)