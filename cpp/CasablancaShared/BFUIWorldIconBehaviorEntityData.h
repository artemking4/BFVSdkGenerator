// Object: BFUIWorldIconBehaviorEntityData
// ClassId: 2427
// RuntimeId: 33330
// TypeInfo: 0x0000000144D40ED0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIWorldIconBehavior.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWorldIconBehaviorEntityData : public Entity::EntityData {
        CasablancaShared::BFUIWorldIconBehavior IconBehavior; // 0x20
        Float32 Distance; // 0x28
        Float32 BehaviorValuesMix; // 0x2C
        Float32 DefaultScale; // 0x30
        Float32 DefaultForegroundAlpha; // 0x34
        Float32 DefaultBackgroundAlpha; // 0x38
        Float32 DefaultLabelAlpha; // 0x3C
        Float32 DefaultDistanceAlpha; // 0x40
        Boolean LookedAt; // 0x44
        Boolean IsInteracting; // 0x45
        char pad_0x46[0x2];
    }; // 0x48
    static_assert(sizeof(BFUIWorldIconBehaviorEntityData) == 0x48);
}
#pragma pack(pop)