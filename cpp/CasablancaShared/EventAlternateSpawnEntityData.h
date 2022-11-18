// Object: EventAlternateSpawnEntityData
// ClassId: 3255
// RuntimeId: 48364
// TypeInfo: 0x0000000144D0A930
#include "../GameShared/AlternateSpawnEntityData.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class EventAlternateSpawnEntityData : public GameShared::AlternateSpawnEntityData {
        GameShared::SquadId Squad; // 0x70
        char pad_0x74[0xC];
    }; // 0x80
    static_assert(sizeof(EventAlternateSpawnEntityData) == 0x80);
}
#pragma pack(pop)