// Object: BFUIProfileOptionColorLabelEntityData
// ClassId: 2349
// RuntimeId: 5127
// TypeInfo: 0x0000000144D874A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionColorLabelEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUIProfileOptionColorLabelEntityData) == 0x28);
}
#pragma pack(pop)