// Object: GrantRequisitionPointsEntityData
// ClassId: 2790
// RuntimeId: 15104
// TypeInfo: 0x0000000144D2AD20
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../GameShared/SquadId.h"
#include "../GameShared/TeamId.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GrantRequisitionPointsEntityData : public Entity::EntityData {
        Int32 Points; // 0x20
        GameShared::SquadId Squad; // 0x24
        GameShared::TeamId Team; // 0x28
        char pad_0x2C[0x4];
        CString GrantTypeSid; // 0x30
        Boolean GrantPointsToAllSquads; // 0x38
        Boolean UseTeamAndSquadFromInputEvent; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(GrantRequisitionPointsEntityData) == 0x40);
}
#pragma pack(pop)