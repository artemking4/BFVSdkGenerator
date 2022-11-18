// Object: BFEncounterSelectableCollectorEntityData
// ClassId: 2097
// RuntimeId: 61943
// TypeInfo: 0x0000000144D4BD70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFEncounterSelectableCollectorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 Seed; // 0x24
    }; // 0x28
    static_assert(sizeof(BFEncounterSelectableCollectorEntityData) == 0x28);
}
#pragma pack(pop)