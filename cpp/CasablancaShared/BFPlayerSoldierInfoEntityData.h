// Object: BFPlayerSoldierInfoEntityData
// ClassId: 2110
// RuntimeId: 21505
// TypeInfo: 0x0000000144D317A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFPlayerSoldierInfoEntityData : public Entity::EntityData {
        Boolean EnableContinuousUpdate; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFPlayerSoldierInfoEntityData) == 0x28);
}
#pragma pack(pop)