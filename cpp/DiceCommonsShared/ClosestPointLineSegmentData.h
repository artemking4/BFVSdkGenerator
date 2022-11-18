// Object: ClosestPointLineSegmentData
// ClassId: 2515
// RuntimeId: 57518
// TypeInfo: 0x0000000144DBBC00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ClosestPointLineSegmentData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean OpenStart; // 0x24
        Boolean OpenStop; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(ClosestPointLineSegmentData) == 0x28);
}
#pragma pack(pop)