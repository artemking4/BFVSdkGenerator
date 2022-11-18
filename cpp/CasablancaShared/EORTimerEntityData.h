// Object: EORTimerEntityData
// ClassId: 2680
// RuntimeId: 53220
// TypeInfo: 0x0000000144D5C260
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EORTimerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EORTimerEntityData) == 0x28);
}
#pragma pack(pop)