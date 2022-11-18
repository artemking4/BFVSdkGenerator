// Object: FootprintNode
// ClassId: 5278
// RuntimeId: 60859
// TypeInfo: 0x0000000144D0A0B0
#include "../CasablancaShared/FootprintNodeBase.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class FootprintNode : public CasablancaShared::FootprintNodeBase {
        Entity::PrefabBlueprint Prefab; // 0x28
        Boolean InteriorAllowed; // 0x30
        Boolean ExteriorAllowed; // 0x31
        Boolean NeedWall; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(FootprintNode) == 0x38);
}