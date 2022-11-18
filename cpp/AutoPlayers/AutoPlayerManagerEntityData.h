// Object: AutoPlayerManagerEntityData
// ClassId: 2077
// RuntimeId: 36581
// TypeInfo: 0x0000000144BEC890
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace AutoPlayers {
    class AutoPlayerManagerEntityData : public Entity::EntityData {
        Int32 PlayerCount; // 0x20
        Float32 OrphanTimeSeconds; // 0x24
    }; // 0x28
    static_assert(sizeof(AutoPlayerManagerEntityData) == 0x28);
}
#pragma pack(pop)