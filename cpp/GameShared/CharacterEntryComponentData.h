// Object: CharacterEntryComponentData
// ClassId: 1771
// RuntimeId: 38473
// TypeInfo: 0x0000000144E81EC0
#include "../GameShared/EntryComponentData.h"
#include "../GameShared/AimingConstraintsData.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterEntryComponentData : public GameShared::EntryComponentData {
        GameShared::AimingConstraintsData AimingConstraints; // 0x120
    }; // 0x130
    static_assert(sizeof(CharacterEntryComponentData) == 0x130);
}
#pragma pack(pop)