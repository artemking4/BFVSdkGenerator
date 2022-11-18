// Object: StaticEnlightenEntityData
// ClassId: 2696
// RuntimeId: 34746
// TypeInfo: 0x0000000144EC2E40
#include "../WorldSim/EnlightenEntityData.h"
#include "../RenderBase/StaticEnlightenBaseAsset.h"
#include "../RenderBase/EnlightenBaseAsset.h"
#include "../Entity/ObjectBlueprint.h"

#pragma pack(push, 8)
namespace WorldSim {
    class StaticEnlightenEntityData : public WorldSim::EnlightenEntityData {
        RenderBase::StaticEnlightenBaseAsset EnlightenData; // 0x30
        RenderBase::EnlightenBaseAsset DynamicEnlightenData; // 0x38
        Entity::ObjectBlueprint VisualEnvironment; // 0x40
    }; // 0x48
    static_assert(sizeof(StaticEnlightenEntityData) == 0x48);
}
#pragma pack(pop)