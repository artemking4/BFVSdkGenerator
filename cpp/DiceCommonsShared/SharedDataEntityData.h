// Object: SharedDataEntityData
// ClassId: 3205
// RuntimeId: 47495
// TypeInfo: 0x0000000144DBEB30
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class SharedDataEntityData : public Entity::EntityData {
        Float32 FloatInput; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform TransformInput; // 0x30
        Int32 IntInput; // 0x70
        Boolean BoolInput; // 0x74
        char pad_0x75[0xB];
    }; // 0x80
    static_assert(sizeof(SharedDataEntityData) == 0x80);
}
#pragma pack(pop)