// Object: CharacterBlueprint
// ClassId: 254
// RuntimeId: 65370
// TypeInfo: 0x0000000144E83C40
#include "../Entity/ObjectBlueprint.h"
#include "../Entity/TimeDeltaType.h"

#pragma pack(push, 8)
namespace GameShared {
    class CharacterBlueprint : public Entity::ObjectBlueprint {
        Entity::TimeDeltaType TimeDeltaType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(CharacterBlueprint) == 0x58);
}
#pragma pack(pop)