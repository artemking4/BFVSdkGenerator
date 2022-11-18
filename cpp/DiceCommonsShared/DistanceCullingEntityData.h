// Object: DistanceCullingEntityData
// ClassId: 3360
// RuntimeId: 27780
// TypeInfo: 0x0000000144DB5B90
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class DistanceCullingEntityData : public Entity::SpatialEntityData {
        Float32 DistanceThreshold; // 0x60
        Boolean Enabled; // 0x64
        Boolean TriggerOnExitOnDisabled; // 0x65
        char pad_0x66[0xA];
    }; // 0x70
    static_assert(sizeof(DistanceCullingEntityData) == 0x70);
}
#pragma pack(pop)