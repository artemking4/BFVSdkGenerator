// Object: DoublePlayerEventEntityData
// ClassId: 2669
// RuntimeId: 62172
// TypeInfo: 0x0000000144D010A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DoublePlayerEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DoublePlayerEventEntityData) == 0x28);
}
#pragma pack(pop)