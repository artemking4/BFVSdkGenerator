// Object: WeaponZeroingComponentData
// ClassId: 1923
// RuntimeId: 65339
// TypeInfo: 0x0000000144F49940
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class WeaponZeroingComponentData : public Entity::GameComponentData {
        Int32 CycleInputAction; // 0x80
        Boolean Enabled; // 0x84
        char pad_0x85[0xB];
    }; // 0x90
    static_assert(sizeof(WeaponZeroingComponentData) == 0x90);
}
#pragma pack(pop)