// Object: VisualTerrainEntityData
// ClassId: 3883
// RuntimeId: 40913
// TypeInfo: 0x0000000144EB1370
#include "../Entity/EntityData.h"
#include "../TerrainBase/TerrainData.h"
#include "../Global/ResourceRef.h"
#include "../TerrainRender/VisualTerrainSettings.h"

#pragma pack(push, 8)
namespace TerrainRender {
    class VisualTerrainEntityData : public Entity::EntityData {
        TerrainBase::TerrainData Terrain; // 0x20
        ResourceRef DecalsResource; // 0x28
        TerrainRender::VisualTerrainSettings Settings; // 0x30
    }; // 0x38
    static_assert(sizeof(VisualTerrainEntityData) == 0x38);
}
#pragma pack(pop)