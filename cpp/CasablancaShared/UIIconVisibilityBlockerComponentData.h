// Object: UIIconVisibilityBlockerComponentData
// ClassId: 1865
// RuntimeId: 11191
// TypeInfo: 0x0000000144D1E070
#include "../Entity/GameComponentData.h"
#include "../CasablancaShared/UICylinderShapeBlocker.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIIconVisibilityBlockerComponentData : public Entity::GameComponentData {
        CasablancaShared::UICylinderShapeBlocker BlockerShape; // 0x80
        Boolean ExcludePlayerFromOcclusionCheck; // 0x88
        Boolean ExcludePlayerTeamFromOcclusionCheck; // 0x89
        Boolean ExcludePlayerSquadFromOcclusionCheck; // 0x8A
        char pad_0x8B[0x5];
    }; // 0x90
    static_assert(sizeof(UIIconVisibilityBlockerComponentData) == 0x90);
}
#pragma pack(pop)