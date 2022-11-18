// Object: PA2TargetProperties
// ClassId: 613
// RuntimeId: 33525
// TypeInfo: 0x0000000144E75DC0
#include "../Core/Asset.h"
#include "../GameShared/PA2BoneList.h"

#pragma pack(push, 8)
namespace GameShared {
    class PA2TargetProperties : public Core::Asset {
        Array<GameShared::PA2BoneList> BoneTargets; // 0x20
    }; // 0x28
    static_assert(sizeof(PA2TargetProperties) == 0x28);
}
#pragma pack(pop)