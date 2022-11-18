// Object: EncountersQueryInfoEntityData
// ClassId: 2693
// RuntimeId: 30445
// TypeInfo: 0x0000000144D0B7B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncountersQueryInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Uint32> ExcludedEncounterTypeIds; // 0x28
        Array<Uint32> IncludedEncounterTypeIds; // 0x30
        Boolean OutputObjectiveLocations; // 0x38
        Boolean SortEncounters; // 0x39
        Boolean RememberActive; // 0x3A
        Boolean RememberEncounters; // 0x3B
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(EncountersQueryInfoEntityData) == 0x40);
}
#pragma pack(pop)