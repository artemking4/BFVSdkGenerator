// Object: SimpleStateEntityBaseData
// ClassId: 3213
// RuntimeId: 56408
// TypeInfo: 0x0000000144DF1650
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../DiceShooterShared/SimpleStateData.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class SimpleStateEntityBaseData : public Entity::EntityData {
        Int32 StateInputHash; // 0x20
        Int32 StateOutputHash; // 0x24
        DiceShooterShared::SimpleStateData State; // 0x28
    }; // 0x30
    static_assert(sizeof(SimpleStateEntityBaseData) == 0x30);
}
#pragma pack(pop)