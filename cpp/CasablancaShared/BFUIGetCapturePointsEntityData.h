// Object: BFUIGetCapturePointsEntityData
// ClassId: 2220
// RuntimeId: 54525
// TypeInfo: 0x0000000144D30320
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUITeamObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetCapturePointsEntityData : public Entity::EntityData {
        CasablancaShared::BFUITeamObject Team; // 0x20
        Boolean UpdateAutomatically; // 0x28
        Boolean OutputForLocalTeam; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(BFUIGetCapturePointsEntityData) == 0x30);
}
#pragma pack(pop)