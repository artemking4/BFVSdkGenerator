// Object: BFUIEncounterAreaEntityData
// ClassId: 2181
// RuntimeId: 4501
// TypeInfo: 0x0000000144D97010
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEncounterAreaEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Enabled; // 0x24
        Boolean Invert; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(BFUIEncounterAreaEntityData) == 0x28);
}
#pragma pack(pop)