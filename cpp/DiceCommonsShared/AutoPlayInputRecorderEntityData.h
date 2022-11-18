// Object: AutoPlayInputRecorderEntityData
// ClassId: 2075
// RuntimeId: 16830
// TypeInfo: 0x0000000144DBB980
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AutoPlayInputRecorderEntityData : public Entity::EntityData {
        Boolean IsEnabled; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(AutoPlayInputRecorderEntityData) == 0x28);
}
#pragma pack(pop)