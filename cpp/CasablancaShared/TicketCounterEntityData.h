// Object: TicketCounterEntityData
// ClassId: 3574
// RuntimeId: 58280
// TypeInfo: 0x0000000144D5C460
#include "../Entity/EntityData.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/TicketCountPercentage.h"
#include "../CasablancaShared/TicketDecreaseType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class TicketCounterEntityData : public Entity::EntityData {
        GameShared::TeamId TeamId; // 0x20
        Int32 TicketLossWhenLostAll; // 0x24
        Int32 TicketLossWhenLostAllControlsPoint; // 0x28
        Int32 TicketLossPerMin; // 0x2C
        Array<CasablancaShared::TicketCountPercentage> TicketPercentages; // 0x30
        Int32 TicketLossStart; // 0x38
        Int32 InitialTicketCount; // 0x3C
        CasablancaShared::TicketDecreaseType DecreaseTickets; // 0x40
        Boolean EnableTicketLossWhenLostAll; // 0x44
        Boolean SetBestSquadSpawner; // 0x45
        Boolean HaltTicketLossOnEqualPointCount; // 0x46
        Boolean SpawnAlwaysAllowed; // 0x47
        Boolean IsActive; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(TicketCounterEntityData) == 0x50);
}
#pragma pack(pop)