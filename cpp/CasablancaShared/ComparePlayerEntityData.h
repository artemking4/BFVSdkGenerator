// Object: ComparePlayerEntityData
// ClassId: 2526
// RuntimeId: 6977
// TypeInfo: 0x0000000144D4B570
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ComparePlayerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ComparePlayerEntityData) == 0x28);
}
#pragma pack(pop)