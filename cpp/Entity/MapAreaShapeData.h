// Object: MapAreaShapeData
// ClassId: 1668
// RuntimeId: 19704
// TypeInfo: 0x0000000144EE35D0
#include "../Entity/VolumeVectorShapeData.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class MapAreaShapeData : public Entity::VolumeVectorShapeData {
        Int32 Priority; // 0x38
        char pad_0x3C[0x4];
        CString AreaName; // 0x40
        Boolean ShowAreaNameInMap; // 0x48
        Boolean ShowInDeploy; // 0x49
        Boolean ShowInTabletop; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(MapAreaShapeData) == 0x50);
}
#pragma pack(pop)