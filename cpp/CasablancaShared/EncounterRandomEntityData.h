// Object: EncounterRandomEntityData
// ClassId: 2691
// RuntimeId: 51724
// TypeInfo: 0x0000000144D0B830
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EncounterRandomEntityData : public Entity::EntityData {
        Int32 Min; // 0x20
        Int32 Max; // 0x24
    }; // 0x28
    static_assert(sizeof(EncounterRandomEntityData) == 0x28);
}
#pragma pack(pop)