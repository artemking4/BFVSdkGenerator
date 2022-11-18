// Object: DynamicEnlightenEntityData
// ClassId: 2695
// RuntimeId: 14680
// TypeInfo: 0x0000000144EC2EC0
#include "../WorldSim/EnlightenEntityData.h"
#include "../RenderBase/EnlightenBaseAsset.h"

#pragma pack(push, 8)
namespace WorldSim {
    class DynamicEnlightenEntityData : public WorldSim::EnlightenEntityData {
        RenderBase::EnlightenBaseAsset EnlightenData; // 0x30
    }; // 0x38
    static_assert(sizeof(DynamicEnlightenEntityData) == 0x38);
}
#pragma pack(pop)