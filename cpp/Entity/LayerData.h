// Object: LayerData
// ClassId: 273
// RuntimeId: 3745
// TypeInfo: 0x0000000144EE69D0
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Entity {
    class LayerData : public Entity::PrefabBlueprint {
        Guid HackToSolveRealTimeTweakingIssue; // 0x58
        Boolean Enabled; // 0x68
        char pad_0x69[0x7];
    }; // 0x70
    static_assert(sizeof(LayerData) == 0x70);
}
#pragma pack(pop)