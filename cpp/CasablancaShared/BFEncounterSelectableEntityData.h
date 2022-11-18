// Object: BFEncounterSelectableEntityData
// ClassId: 2098
// RuntimeId: 12657
// TypeInfo: 0x0000000144D4BDF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFEncounterSelectableEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Enabled; // 0x24
        Boolean FallbackEnabled; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(BFEncounterSelectableEntityData) == 0x28);
}
#pragma pack(pop)