// Object: AutoSquadEntityData
// ClassId: 2086
// RuntimeId: 55474
// TypeInfo: 0x0000000144D5C8E0
#include "../Entity/EntityData.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AutoSquadEntityData : public Entity::EntityData {
        GameShared::SquadId SquadId; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AutoSquadEntityData) == 0x28);
}
#pragma pack(pop)