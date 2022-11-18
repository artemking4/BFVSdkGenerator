// Object: PosesGlobalAsset
// ClassId: 633
// RuntimeId: 45916
// TypeInfo: 0x0000000144E96730
#include "../Core/Asset.h"
#include "../GameShared/PoseDefinition.h"

#pragma pack(push, 8)
namespace GameShared {
    class PosesGlobalAsset : public Core::Asset {
        Array<GameShared::PoseDefinition> Poses; // 0x20
        GameShared::PoseDefinition DefaultPose; // 0x28
    }; // 0x30
    static_assert(sizeof(PosesGlobalAsset) == 0x30);
}
#pragma pack(pop)