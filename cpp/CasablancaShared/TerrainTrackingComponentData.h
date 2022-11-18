// Object: TerrainTrackingComponentData
// ClassId: 1860
// RuntimeId: 10035
// TypeInfo: 0x0000000144D22970
#include "../Entity/GameComponentData.h"
#include "../CasablancaShared/TerrainTrackingBinding.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class TerrainTrackingComponentData : public Entity::GameComponentData {
        CasablancaShared::TerrainTrackingBinding TerrainGamestateBinding; // 0x80
        Boolean Enabled; // 0xBC
        char pad_0xBD[0x3];
    }; // 0xC0
    static_assert(sizeof(TerrainTrackingComponentData) == 0xC0);
}
#pragma pack(pop)