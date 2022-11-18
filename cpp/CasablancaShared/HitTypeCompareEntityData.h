// Object: HitTypeCompareEntityData
// ClassId: 2794
// RuntimeId: 10589
// TypeInfo: 0x0000000144D43750
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../UI/HitType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class HitTypeCompareEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        UI::HitType A; // 0x24
        UI::HitType B; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(HitTypeCompareEntityData) == 0x30);
}
#pragma pack(pop)